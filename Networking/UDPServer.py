#Clay Francisco
#Python Server 1
#10-18-13
#import socket module
from socket import *

serverPort = 12000
serverSocket = socket(AF_INET, SOCK_DGRAM)

serverPort.bind(('', serverPort))
serverSocket.listen(1)

print "Prepped and ready sir."

while 1 :
    connectionSocket, addr =  severSocket.accept()

    sentence = connectionSocket.recv(1024)
    capSent  = sentence.upper()

    connectionSocket.send(capSent)

connectionSocket.close()

