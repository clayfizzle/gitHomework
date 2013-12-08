import socket module
from socket import *

serverName = 'ada.evergreen.edu'
serverPort = 12345
clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName, serverPort)))

sentence = raw_input('Input lowercase message: ')
clientSocket.send(sentence)
modifiedSentence = clientSocket.recv(1024)

print 'From server: ', modifiedSentence

clientSocket.close()


