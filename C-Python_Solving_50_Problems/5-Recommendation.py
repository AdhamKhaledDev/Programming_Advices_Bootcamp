# Step 1: Ask the user to enter his/her age
age = int(input("Step 1: Enter your age: "))

# Step 2: Ask the user if he/she has a driver license
hasDriverLicense = input("Step 2: Do you have a driver license? (Y/N): ")

# Step 3: Ask the user if he/she has a recommendation
hasRecommendation = input("Step 3: Do you have a recommendation? (Y/N): ")

# Step 4: Result = (Age > 21 and HasDriverLicense=True) or HasRecommendation=True
result = (age > 21 and (hasDriverLicense.upper() == 'Y')) or (hasRecommendation.upper() == 'Y')

# Step 5: Check if result is True then Hire, otherwise Reject
# Step 6: Print "Hired" or "Rejected" accordingly
if result:
    print("Step 5 & 6: Hired")
else:
    print("Step 5 & 6: Rejected")
