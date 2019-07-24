from collections import Counter
import string
from string import ascii_lowercase
import re

"""
with open('constitution.txt', 'r') as f:
    count = Counter(letter for line in f
                for letter in line.lower()
                if letter in ascii_lowercase)
print(count)
                  

f = open('constitution.txt', 'r+')

d = {}
letters = string.ascii_lowercase
for i in f.read():
    txt_lower = i.lower()
    if txt_lower in a
    d[i] = d.get(i,0)+1

for k,v in d.items():
    print("{}: {}".format(k,v))



"""
#Initilze the count
txtRelFreq = 0.00
#lineCounts = 0
charCounts = 0
#wordCounts = 0


#Opean and Read the file and get the total characters of the file
with open('constitution.txt', 'r') as f:
        for line in f:
            wordsList = line.split()
            #lineCounts = lineCounts +1
           # wordCounts = wordCounts + len(wordsList)
            charCounts += sum(len(word) for word in wordsList)
#print('Total Characters of the file: ', charCounts)

text = open('constitution.txt').read()
txtCount = {}
#Initial all 26 letter
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
           'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
           'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
with open('count.dat','w') as out_file:
    for i in range(len(letters)):
    #text.lower() is used to convert all uppercase letter to lowercase in the textfile
    #re.findall('{0}', is used the letter table to find all the word that match
        txtCount[letters[i]] = len(re.findall('{0}'.format(letters[i]),text.lower()))
    #txtCount[letters[i]] return the frequency of the letter
        txtRelFreq = txtCount[letters[i]]/charCounts
    #txtRelFreq, return the relatively frequency of the letter, simply divide the total charaters
    #print('{0} -> {1}'.format(letters[i],txtRelFreq))
     
        out_file.write('{0} -> {1}\n'.format(letters[i],txtRelFreq))
