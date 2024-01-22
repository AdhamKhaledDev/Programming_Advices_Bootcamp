# Python program to calculate the area of a rectangle using diagonal and one side
# take inputs
a = float(input('Enter the length of one side of the rectangle: '))
d = float(input('Enter the length of the diagonal of the rectangle: '))

# calculate area
area = a * ((d**2 - a**2)**0.5)

# display result
print('The area of the rectangle is {0:.3f}'.format(area))
