import sys
yesChoice = ['yes','y','Y','Yes','YES']
noChoice = ['No','n','N','no','NO']
def selectionMenu():
    selection = True
    while selection:
        print("""
1: Encode
2: Decode
0: Exit/Quit """)

        selection = input("Please Select: ")
        if (selection == '1'):
            return selection
        elif selection == '2':
            return selection
        elif(selection == '0'):
            print("Goodbye")
            sys.exit(0)
        else:
            print("Invalid Selection")


def encodingStr():
    print("Enter the message: ")
    return input()

#Encoding key provided by the user (shifting postion)
def encodingKey():
    key = 0
    while True:
        print("Enter a key number(1-26): ")
        key = int(input())
        if(key >=1 and key <= 26):
            return key

def encodeFunc(selection, message, key):
    if selection == '1':
        key = key
    elif selection == '2':
        #Change the postion of shifting
        #If the user want to decryp the message
        key = -key
    translated = ''
    for symbol in message:
        if symbol.isalpha():
            " ord(ordinal) conver single string character"
            " into a integer ordinal value"
            num = ord(symbol)
            num += key

            #Encrypting or Decrypting each uppercase letter
            if symbol.isupper():
                if num > ord('Z'):
                    num -=26
                elif num < ord('A'):
                    num +=26

            #Encrypting or Decrypting each lowercase letter
            elif symbol.islower():
                if num >ord('z'):
                    num -=26
                elif num < ord('a'):
                    num +=26

            translated += chr(num)
        else:
            translated += symbol
    return translated

selection = selectionMenu()
message = encodingStr()
key = encodingKey()
print("***Translated Message***")
print(encodeFunc(selection, message, key))

while True:
    cont = input("Another(Y/N): ")
    if cont in yesChoice:
        selection = selectionMenu()
        message = encodingStr()
        key = encodingKey()
        print("***Translated Message***")
        print(encodeFunc(selection, message, key),"\n")
    elif cont in noChoice:
        print("Goodbye")
        sys.exit(0)
    else:
        print("Invalid input")
