#!/usr/bin/env python3

import sys

#Python Task Number 1.000
print('\n#Python Task Number 1.000')
myInt = 5
myFloat = 5.5
myString = 'Hello world'
myChar = 'H'

print(myInt)
print(myFloat)
print(myString)
print(myChar)


#Python Task Number 1.001
print('\n#Python Task Number 1.001')
print(5 + 5)
print(5 - 5)
print(5 * 5)
print(5 / 5)
print(5 % 5)

#Python Task Number 2.000
print('\n#Python Task Number 2.000')
f = open('tester.txt', 'r')
print(f.read())
f.close()

#Python Task Number 2.001
print('\n#Python Task Number 2.001')
f = open('tester.txt', 'w')
f.write('Contents replaced')
f.close()

#Python Task Number 2.002
print('\n#Python Task Number 2.002')
f = open('newfile.txt', 'w')
f.write('I made a new file')
f.close()

#Python Task Number 3.000
print('\n#Python Task Number 3.000')
for i in range(10):
    print(i)

print('\n')

#Python Task Number 3.001
print('\n#Python Task Number 3.001')
i = 0
while i < 10:
    print(i)
    i += 1

#Python Task Number 4.000 - 4.002
print('\nPython Task Number 4.000 - 4.002')
days = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
for i in days:
    if i == 'Monday':
        print('Today will suck')
    elif i == ('Friday'):
        print('Today is getting better')
    elif i == ('Saturday'):
        print('Today is awesome')
    elif i == ('Sunday'):
        print('Today is alright')
    else:
        print('Today is a normal day')

#Python Task Number 5.000
print('\n#Python Task Number 5.000')
def pointless():
    print('something out to the screen')

pointless()

#Python Task Number 5.001
print('\n#Python Task Number 5.001')
def print_arguments(*argv):
    for i in argv:
        print(i)

print_arguments(sys.argv)

#Python Task Number 5.002
print('\n#Python Task Number 5.002')
def recursive_function(myArgument):
    print(myArgument)

def recursing_function(myArgument):
    return myArgument + myArgument

recursive_function(recursing_function(5))

#Python Task Number 5.0031'acghinsuvwy-
print('\n#Python Task Number 5.003')
def function2(myArgument):
    if myArgument > 0:
        print('This number is positive')
    elif myArgument < 0:
        print('This number is negative')
    else:
        print('This number is zero')

def function1(myArgument):
    passed_variable = myArgument
    function2(passed_variable)

function1(5)

#Python Task Number 6.000- 6.001
print('\n#Python Task Number 6.000- 6.001')

while True:
    try:
        myInt = input('Please enter a number: ')
        int(myInt)
    except ValueError:
        print('Invalid Number - Please input a digit')
    else:
        print(myInt)
        break
        




