# Python program to find the maximum of two numbers
# take inputs
num1 = float(input('Enter first number: '))
num2 = float(input('Enter second number: '))

# find maximum
max_num = num1 if num1 > num2 else num2

# display result
print('The maximum of {0} and {1} is {2}'.format(num1, num2, max_num))
