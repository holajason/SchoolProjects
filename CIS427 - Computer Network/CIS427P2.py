from socket import *
import ssl
import base64

#Use for email log in
emailAddr = 'senderEmail@gmail.com'
emailPass= 'senderPassword'
recipientAddr= 'RecipientAddress@gmail.com'

msg = "\r\n I love computer networks!"
endmsg = "\r\n.\r\n"
# Choose a mail server (e.g. Google mail server) and call it mailserver
#Fill in start
mailServer = 'smtp.gmail.com'
serverPort = 465#SSL port
clientSocket = socket(AF_INET, SOCK_STREAM) 
clientSocket = ssl.wrap_socket(clientSocket)    #For encrypts and decrypts data going over the socket
clientSocket.connect((mailServer, serverPort))
#Fill in end
recv = clientSocket.recv(1024).decode()
print (recv)
if recv[:3] != '220':
    print('220 reply not received from server.')

# Send HELO command and print server response.
heloCommand = 'HELO Alice\r\n'
clientSocket.send(heloCommand.encode())
recv1 = clientSocket.recv(1024).decode()
print(recv1)
if recv1[:3] != '250':
    print('250 reply not received from server.')
    

#Credentials needed for email Authentication
print("Loggin...")
username_b64 = base64.b64encode(bytes(emailAddr, 'utf-8'))
username_b64_str = username_b64.decode('utf-8')
usernameCommand = 'AUTH LOGIN {0}\r\n'.format(username_b64_str)
clientSocket.send(usernameCommand.encode())
recv2 = clientSocket.recv(1024).decode()
print(recv2)
if recv2[:3] != '250':
    print('250 reply not received from server.')

password_b64 = base64.b64encode(bytes(emailPass, 'utf-8'))
password_b64_str = password_b64.decode('utf-8')
passCommand = password_b64_str + '\r\n'
clientSocket.send(passCommand.encode())
recv3 = clientSocket.recv(1024).decode()
print(recv3)
if recv3[:3] != '250':
    print('250 reply not received from server.')
    

# Send MAIL FROM command and print server response.
#Fill in start
print("Sending MAIL FROM command...")
mailAdd = ('MAIL FROM: <' + emailAddr + '>\r\n')
clientSocket.send(mailAdd.encode())
recv4 = clientSocket.recv(1024).decode()
print(recv4)
if recv4[:3] != '250':
    print('250 reply not received from server.')
#Fill in end
    
# Send RCPT TO command and print server response.
#Fill in start
print("Sending RCPT TO command...")
rcptAdd = ('RCPT TO: <'+ recipientAddr + '>\r\n')
clientSocket.send(rcptAdd.encode())
recv5 = clientSocket.recv(1024).decode()
print(recv5)
if recv5[:3] != '250':
    print('250 reply not received from server.')
#Fill in end

# Send DATA command and print server response.
#Fill in start
print("Sending DATA command...")
dataCommand = 'DATA\r\n'
clientSocket.send(dataCommand.encode())
recv6 = clientSocket.recv(1024).decode()
print (recv6)
if recv6[:3] != '250':
    print('250 reply not received from server.')
#Fill in emd


# Send message data.
#Fill in start
print("Sending email message...")
clientSocket.send(msg.encode())
#Fill in end

# Message ends with a single period.
#Fill in start
clientSocket.send(endmsg.encode())
#Fill in end

# Send QUIT command and get server response.
#Fill in start
print("Sending QUIT command...")
quitCommand = 'QUIT\r\n'
clientSocket.send(quitCommand.encode())
recv7 = clientSocket.recv(1024).decode()
print(recv7)
if recv7[:3] != '250':
    print('250 reply not received from server.')
#Fill in start
clientSocket.close()

