# Python program to find the maximum of three numbers
# take inputs
num1 = float(input('Enter first number: '))
num2 = float(input('Enter second number: '))
num3 = float(input('Enter third number: '))

# find maximum
max_num = max(num1, num2, num3)

# display result
print('The maximum of {0}, {1}, and {2} is {3}'.format(num1, num2, num3, max_num))
