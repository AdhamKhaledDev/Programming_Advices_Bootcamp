# Step 1: Ask the user to enter his/her age
age = int(input("Step 1: Enter your age: "))

# Step 2: Ask the user if he/she has a driver license
hasDriverLicense = input("Step 2: Do you have a driver license? (Y/N): ")

# Step 3: Result = (Age > 21 and HasDriverLicense=True)
result = (age > 21 and (hasDriverLicense.upper() == 'Y'))

# Step 4: Check if result is True then Hire, otherwise Reject
# Step 5: Print "Hired" or "Rejected" accordingly
if result:
    print("Step 4 & 5: Hired")
else:
    print("Step 4 & 5: Rejected")
