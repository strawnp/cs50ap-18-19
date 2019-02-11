UPPER_A = 65
LOWER_A = 97
ALPHALENGTH = 26

from helpers import *

def initials(name):
    name = name.split(" ")
        
    initials = ""
    for i in range(len(name)):
        initial = name[i][:1].upper()
        initials += initial
    
    return initials

def caesar(plaintext, shift):
    ciphertext = ""
    
    for letter in plaintext:
        if letter.isupper():
            cipher = (ord(letter) - UPPER_A + shift) % ALPHALENGTH
            cipher = chr(cipher + UPPER_A)
            ciphertext += cipher
        elif letter.islower():
            cipher = (ord(letter) - LOWER_A + shift) % ALPHALENGTH
            cipher = chr(cipher + LOWER_A)
            ciphertext += cipher
        else:
            ciphertext += letter
        
    return ciphertext

def vigenere(plaintext, key):
    for letter in key:
        if not(letter.isalpha()):
            return apology("Keyword must only contain alphabetical characters")
    
    keyindex = 0
    keylen = len(key)
    
    ciphertext = ""

    for letter in plaintext:
        if key[keyindex % keylen].isupper():
            shift = ord(key[keyindex % keylen]) - UPPER_A
        else:
            shift = ord(key[keyindex % keylen]) - LOWER_A
            
        if letter.isupper():
            cipher = (ord(letter) - UPPER_A + shift) % ALPHALENGTH
            cipher = chr(cipher + UPPER_A)
            ciphertext += cipher
            keyindex += 1
        elif letter.islower():
            cipher = (ord(letter) - LOWER_A + shift) % ALPHALENGTH
            cipher = chr(cipher + LOWER_A)
            ciphertext += cipher
            keyindex += 1
        else:
            ciphertext += letter
    
    return ciphertext