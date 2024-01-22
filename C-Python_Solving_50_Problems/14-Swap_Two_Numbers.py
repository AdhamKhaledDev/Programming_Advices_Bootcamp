# Python program to swap two numbers
# take inputs
num1 = float(input('Enter first number: '))
num2 = float(input('Enter second number: '))

# print original numbers
print('Original numbers: {0} and {1}'.format(num1, num2))

# swap numbers
temp = num1
num1 = num2
num2 = temp

# print swapped numbers
print('Swapped numbers: {0} and {1}'.format(num1, num2))
