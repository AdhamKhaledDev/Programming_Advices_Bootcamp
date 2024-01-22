# Python program to calculate the average of three marks and print pass/fail
# take inputs
mark1 = float(input('Enter first mark: '))
mark2 = float(input('Enter second mark: '))
mark3 = float(input('Enter third mark: '))

# calculate average
avg = (mark1 + mark2 + mark3) / 3

# display result
print('The average of marks {0}, {1}, and {2} is {3:.2f}'.format(mark1, mark2, mark3, avg))

# print pass/fail
if avg >= 50:
    print('PASS')
else:
    print('FAIL')
