# create the initial variables below
age = 28
sex = 0
bmi = 26.2
num_of_children = 3
smoker = 0

# Add insurance estimate formula below
insurance_cost = (250 * age) - (128 * sex) + (370 * bmi) + (425 * num_of_children) + (24000 * smoker) - 12500

print("This person's insurance cost is {} dollars.\n".format(insurance_cost))

# Age Factor
age += 4 

new_insurance_cost = (250 * age) - (128 * sex) + (370 * bmi) + (425 * num_of_children) + (24000 * smoker) - 12500

change_in_insurance_cost = new_insurance_cost - insurance_cost
print("New insurance cost when the person is 4 years older is {} dollars\n".format(new_insurance_cost))

print("The change in cost of insurance after increasing the age by 4 years is {} dollars\n".format(change_in_insurance_cost))

# BMI Factor
age = 28
bmi += 3.1

new_insurance_cost = (250 * age) - (128 * sex) + (370 * bmi) + (425 * num_of_children) + (24000 * smoker) - 12500

change_in_insurance_cost = new_insurance_cost - insurance_cost

print("The change in cost of insurance after increasing the bmi by 3.1 is {} dollars\n".format(change_in_insurance_cost))


# Male vs. Female Factor
bmi = 26.2
sex = 1

new_insurance_cost = (250 * age) - (128 * sex) + (370 * bmi) + (425 * num_of_children) + (24000 * smoker) - 12500

change_in_insurance_cost = new_insurance_cost - insurance_cost

print("The change in cost of insurance for being a male is {} dollars".format(change_in_insurance_cost))
