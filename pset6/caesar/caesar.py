from cs50 import get_int
from cs50 import get_string
import cs50
import sys

# caesars cipher

key = int(sys.argv[1])

plainText = get_string("plaintext: ")  # prompts user for string to encrypt
print("ciphertext: ", end="")

for c in range(len(plainText)):  # iterate through each character
    character = plainText[c]
    if character.isalpha():  # check if character is alphabetic
        if character.isupper():  # preserve case of character
            cipherText = (ord(character) - ord('A') + key) % 26 + ord('A')  # to ascii
            cipherText = chr(cipherText)  # to alphabetic
            print(cipherText, end="")
        elif character.islower():
            cipherText = (ord(character) - ord('a') + key) % 26 + ord('a')  # to ascii
            cipherText = chr(cipherText)  # to alphabetic
            print(cipherText, end="")
    elif not plainText[c].isalpha():  # includes special characters
        cipherText = character
        print(cipherText, end="")
print()
