# Python program to demonstrate
# sys.argv

import sys

n = len(sys.argv)
if n == 1:
    exit()
nb = sys.argv[1]
if not nb.isdecimal() and n > 2:
    print("ERROR")
    exit()
if n == 2:
    if int(nb) == 0:
        print("I'm Zero")
    elif (int(nb) % 2) == 0:
        print("I'm Even.")
    else:
        print("I'm Odd.")
