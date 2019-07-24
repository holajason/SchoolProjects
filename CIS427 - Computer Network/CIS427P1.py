#import socket module
from socket import *
import sys
#import thread module
from _thread import *
import threading
lock = threading.Lock()
                
#A lock object is created by
def multiThread(thread):
        try:
                message = thread.recv(1024)
                filename = message.split()[1]
                f = open(filename[1:])
                outputdata = f.read()
                f.close()
                
                #Send one HTTP header line into socket
                thread.send(b'HTTP/1.1 200 OK\r\n\r\n')
                #Send the content of the requested file to the client
                lock.release()
                for i in range(0, len(outputdata)):
                        thread.send(outputdata[i].encode())
                thread.send("\r\n".encode())
                thread.close()
        except IOError:
                #Send response message for file not found
                print('\n404 Not Found')
                thread.send(b'HTTP/1.1 404 NOT FOUND\r\n\r\n')
        #Close client socket
                thread.close()

serverSocket = socket(AF_INET, SOCK_STREAM)
#Prepare a sever socket
#fill in start
serverSocket.bind(('', 12006))
serverSocket.listen(5)
#fill in end

while True:
    print ('Ready to serve...')
    #Establish the connection
    connectionSocket, addr = serverSocket.accept()
    lock.acquire()
    print('Connected to :', addr[0], ':', addr[1])
    start_new_thread(multiThread,(connectionSocket,))
serverSocket.close()
sys.exit()

