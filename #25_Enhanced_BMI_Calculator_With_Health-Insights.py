import time

# BMI formula
def bmi_calculator(weight, height):
    return weight / (height * height)

# BMI classification
def bmi_classification(bmi):
    if bmi < 18.5:
        return "Underweight"
    elif 18.5 <= bmi < 24.9:
        return "Healthy Weight"
    elif 25 <= bmi < 29.9:
        return "Overweight"
    elif bmi >= 30:
        return "Obesity"
    else: #Validation
        return "Invalid BMI!"

# Dietary meal plan based on BMI classification
def dietary_meal_plan(classification, age):
    print()
    print("--------------------------------------------------------------------------")
    print("                    Suggested Dietary Meal Plan")
    print("--------------------------------------------------------------------------")
    
    if age <= 18:
        # Dietary recommendations for below 18
        if classification == "Underweight": # Below 18 Underweight suggested foods
            print("\n--------------- Underweight Suggested Foods for below 18 --------------\n")
            print("Breakfast: Arroz Caldo with egg")
            print("Lunch: Menudo serve with rice")
            print("Snacks: Pancake")
            print("Dinner: Kare-kare serve with vegetables and rice")
        elif classification == "Healthy Weight": # Below 18 Healthyweight suggested foods
            print("\n--------------- Healthy Weight Suggested Foods for below 18 --------------\n")
            print("Breakfast: Sinigang with fried egg and rice")
            print("Lunch: Adobo with rice")
            print("Snacks: Biko")
            print("Dinner: Crispy Pata (Deep-fried prok leg) with rice")
        elif classification == "Overweight": # Below 18 Overweight suggested foods
            print("\n--------------- Overweight Suggested Foods for below 18 --------------\n")
            print("Breakfast: Oatmeal with fruits and nuts")
            print("Lunch: Adobo with vegetables and brown rice")
            print("Dinner: Ensalada with vegetables")
        elif classification == "Obesity": # Below 18 Obese weight suggested foods
            print("\n--------------- Obese Suggested Foods for below 18 --------------\n")
            print("Breakfast: Oatmeal with fruits and nuts")
            print("Lunch: Vegetable lumpia")
            print("Dinner: Tinolang isda with green papaya, ginger, and chili peppers")
        else:
            print("Invalid Classification. Please check the inputs and try again.")
    else:
        # Dietary recommendations for above 18
        if classification == "Underweight": # Above 18 Underweight suggested foods
            print("\n--------------- Underweight Suggested Foods for above 18 --------------\n")
            print("Breakfast: Kare-kare with roasted vegetables and brown rice.")
            print("Lunch: Pancit Canton (stir-fried noodles) with lumpia (spring rolls)")
            print("Snacks: Turon (banana spring rolls), Biko (sticky rice cake with coconut milk and sugar), and Leche flan (caramel custard)")
            print("Dinner: Adobo (meat or seafood braised in vinegar, soy sauce, and garlic) with sinangag and rice")
        elif classification == "Healthy Weight": # Above 18 Healthyweight suggested foods
            print("\n--------------- Healthy Weight Suggested Foods for above 18 --------------\n")
            print("\nBreakfast: Arroz Caldereta (rice with beef stew)")
            print("Lunch: Menudo (beef stew with liver and vegetables) with rice")
            print("Snacks: Suman (sticky rice cake wrapped in banana leaves), Saba (plantain chips), and Pinakbet (vegetable stew)")
            print("Dinner: Sinigang (sour soup) with shrimp and vegetables and rice")
        elif classification == "Overweight": # Above 18 Overweight suggested foods
            print("\n--------------- Overweight Suggested Foods for above 18 --------------\n")
            print("Breakfast: Tapioca (cassava) with tuyo (dried fish)")
            print("Lunch: Pinakbet (vegetable stew) with rice")
            print("Dinner: Grilled chicken with pinakurat (grilled vegetables) and rice")
        elif classification == "Obesity": # Above 18 Obese weight suggested foods
            print("\n--------------- Obese Suggested Foods for above 18 --------------\n")
            print("Breakfast: Oatmeal with berries and nuts, Greek yogurt with fruit, or whole-grain toast with avocado")
            print("Lunch: Salad with grilled chicken or fish, lentil soup, or a whole-grain sandwich with lean protein")
            print("Dinner: Baked salmon with roasted vegetables, chicken stir-fry, or a tofu scramble with whole-grain toast")
        else: #Validation
            print("Invalid Classification. Please check the inputs and try again.")

# BMI message for classification
def bmi_message(classification):
    if classification == "Underweight":
        print("You are Underweight. It's important to consider actions for your health.")
        print("I suggest doing regular exercise and maintaining a balanced diet.")
    elif classification == "Healthy Weight":
        print("You are within the Healthy Weight range. Keep up the good work!")
        print("Continue maintaining a healthy lifestyle.")
    elif classification == "Overweight":
        print("You are Overweight! Regular exercise and a balanced diet will help manage your weight effectively.")
    elif classification == "Obesity":
        print("You are in the Obese range! Focus on physical activity and a healthy balanced diet to improve your health.")
    else: #Validation
        print("Invalid Classification! Please check the inputs and try again.")

# Suggested exercises for male
def suggested_exercise_male(activity_choice, age):
    print()
    print("--------------------------------------------------------------------------------------")
    print("                    Exercise Recommendation for Male:")
    print("--------------------------------------------------------------------------------------")
    print("{:<25} {:<35} {:<25}".format("Activity Level", "Exercise", "Sets/Reps"))
    print("--------------------------------------------------------------------------------------")

    if age <= 18:
        # Suggested exercises for males below 18 years old
        if activity_choice == 1:
            # Light Exercise for Male below 18
            print(f"{'Light Exercise':<25}")
            print(f"{'for Male below 18':<25}")
            print(f"{'(2-3x per week)':<25}")
            print(f"{'':<25}{'Squat':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Push-up':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Plank':<25}{'2 sets of 10 reps':<25}")
            print(f"{'':<25}{'Bicycle crunch':<25}{'3 sets of 30 seconds':<25}")
            print(f"{'':<25}{'Cycling':<25}{'30 minutes':<25}")
        elif activity_choice == 2:
            # Moderate Exercise for Male below 18
            print(f"{'Moderate Exercise':<25}")
            print(f"{'for Male below 18':<25}")
            print(f"{'(3-4x per week)':<25}")
            print(f"{'':<25}{'Dumbbell curls':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Dumbbell rows':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Overhead press':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Biceps extensions':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Interval sprints':<25}")
        elif activity_choice == 3:
            # Vigorous Exercise for Male below 18
            print(f"{'Vigorous Exercise':<25}")
            print(f"{'for Male below 18':<25}")
            print(f"{'(4-6x per week)':<25}")
            print(f"{'':<25}{'Barbell squats':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Bench press':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Deadlifts':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Overhead press':<25}{'3 sets of 10 reps':<25}")
            print(f"{'':<25}{'Interval training':<25}")
        else:
            print("Invalid choice of exercise level!")
    else: 
        # Suggested exercises for males above 18 years old
        if activity_choice == 1:
            # Light Exercise for Male above 18
            print(f"{'Light Exercise':<25}")
            print(f"{'for Male above 18':<25}")
            print(f"{'(3-5x per week)':<25}")
            print(f"{'':<25}{'Squat':<25}{'3 sets of 10-15 reps':<25}")
            print(f"{'':<25}{'Push-up':<25}{'3 sets of 10-15 reps':<25}")
            print(f"{'':<25}{'Pull-up':<25}{'3 sets of 6-10 reps':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 10-15 reps':<25}")
            print(f"{'':<25}{'Bicycle crunch':<25}{'3 sets of 30 seconds':<25}")
            print(f"{'':<25}{'Plank':<25}{'Hold for 30 seconds, increase gradually':<25}")
        elif activity_choice == 2:
            # Moderate Exercise for Male above 18
            print(f"{'Moderate Exercise':<25}")
            print(f"{'for Male above 18':<25}")
            print(f"{'(3-5x per week)':<25}")
            print(f"{'':<25}{'Push-up':<25}{'3 sets of 15-20 reps':<25}")
            print(f"{'':<25}{'Pull-up':<25}{'3 sets of 12-15 reps':<25}")
            print(f"{'':<25}{'Pike push-up':<25}{'3 sets of 12-15 reps':<25}")
            print(f"{'':<25}{'Squats':<25}{'3 sets of 15-20 reps':<25}")
            print(f"{'':<25}{'Burpee':<25}{'3 sets of 10-15 reps':<25}")
            print(f"{'':<25}{'Mountain climbing':<25}{'3 sets of 45 seconds':<25}")
            print(f"{'':<25}{'Crunches':<25}{'3 sets of 30 reps':<25}")
        elif activity_choice == 3:
            # Vigorous Exercise for Male above 18
            print(f"{'Vigorous Exercise':<25}")
            print(f"{'for Male above 18':<25}")
            print(f"{'(2-3x per week)':<25}")
            print(f"{'':<25}{'Barbell squats':<25}{'3 sets of 8-12 reps':<25}")
            print(f"{'':<25}{'Bench press':<25}{'3 sets of 8-12 reps':<25}")
            print(f"{'':<25}{'Overhead press':<25}{'3 sets of 8-12 reps':<25}")
            print(f"{'':<25}{'Deadlifts':<25}{'3 sets of 5-8 reps':<25}")
            print(f"{'':<25}{'Barbell row':<25}{'3 sets of 8-12 reps':<25}")
            print(f"{'':<25}{'Triceps extension':<25}{'3 sets of 8-12 reps':<25}")
        else: # Validation
            print("Invalid choice of exercise level!")

# Suggested exercises for females
def suggested_exercise_female(activity_choice, age):
    print()
    print("--------------------------------------------------------------------------------------")
    print("                    Exercise Recommendation for Female:")
    print("--------------------------------------------------------------------------------------")
    print("{:<25} {:<35} {:<25}".format("Activity Level", "Exercise", "Sets/Reps"))
    print("--------------------------------------------------------------------------------------")

    if age <= 18:
        # Suggested exercises for female below 18 years old
        if activity_choice == 1:  # Light Exercise for female below 18
            print(f"{'Light Exercise':<25}")
            print(f"{'for Female below 18':<25}")
            print(f"{'(2-3x per week)':<25}")
            print(f"{'':<25}{'Squats':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Push-ups':<25}{'3 sets of 8 reps per leg':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Plank':<25}{'2 sets of 45 seconds':<25}")
            print(f"{'':<25}{'Dancing':<25}{'30 minutes':<25}")
        elif activity_choice == 2:  # Moderate Exercise for female below 18
            print(f"{'Moderate Exercise':<25}")
            print(f"{'for Female below 18':<25}")
            print(f"{'(2-3x per week)':<25}")
            print(f"{'':<25}{'Dumbbell curls':<25}{'3 sets of 8 reps each arm':<25}")
            print(f"{'':<25}{'Dumbbell rows':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Overhead press':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Bicep extensions':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Jogging':<25}{'30 minutes':<25}")
        elif activity_choice == 3:  # Vigorous Exercise for female below 18
            print(f"{'Vigorous Exercise':<25}")
            print(f"{'for Female below 18':<25}")
            print(f"{'(4-5x per week)':<25}")
            print(f"{'':<25}{'Barbell Squats':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Bench press':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Deadlifts':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Overhead press':<25}{'3 sets of 8 reps':<25}")
            print(f"{'':<25}{'Cycling':<25}{'45-60 minutes':<25}")
        else:
            print("Invalid choice of exercise level!")

    else:
        # Suggested exercises for females above 18 years old
        if activity_choice == 1:  # Light Exercise for female above 18
            print(f"{'Light Exercise':<25}")
            print(f"{'for Female above 18':<25}")
            print(f"{'(3-4x per week)':<25}")
            print(f"{'':<25}{'Squats':<25}{'3 sets of 10-15 reps':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 10-15 reps per leg':<25}")
            print(f"{'':<25}{'Push-ups':<25}{'3 sets of as many reps as possible':<25}")
            print(f"{'':<25}{'Plank':<25}{'Hold for 30 seconds, increase gradually':<25}")
            print(f"{'':<25}{'Crunches':<25}{'3 sets of 20 reps':<25}")
        elif activity_choice == 2:  # Moderate Exercise for female above 18
            print(f"{'Moderate Exercise':<25}")
            print(f"{'for Female above 18':<25}")
            print(f"{'(3-4x per week)':<25}")
            print(f"{'':<25}{'Push-ups':<25}{'3 sets of 12-15 reps':<25}")
            print(f"{'':<25}{'Chair Dips':<25}{'3 sets of 15-20 reps':<25}")
            print(f"{'':<25}{'Squats':<25}{'3 sets of 12-15 reps':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 10-15 reps per leg':<25}")
            print(f"{'':<25}{'Cossack squat':<25}{'3 sets of 10-15 reps per leg':<25}")
            print(f"{'':<25}{'Plank':<25}{'Hold for 1 minute, increase gradually':<25}")
            print(f"{'':<25}{'Mountain climbing':<25}{'3 sets of 30 seconds':<25}")
        elif activity_choice == 3:  # Vigorous Exercise for female above 18
            print(f"{'Vigorous Exercise':<25}")
            print(f"{'for Female above 18':<25}")
            print(f"{'(2-3x per week)':<25}")
            print(f"{'':<25}{'Squats':<25}{'3 sets of 10-12 reps':<25}")
            print(f"{'':<25}{'Lunges':<25}{'3 sets of 10-12 reps':<25}")
            print(f"{'':<25}{'Bench Press':<25}{'3 sets of 8-10 reps':<25}")
            print(f"{'':<25}{'Rows':<25}{'3 sets of 12-15 reps':<25}")
            print(f"{'':<25}{'Overhead Press':<25}{'3 sets of 8-10 reps':<25}")
            print(f"{'':<25}{'Deadlift':<25}{'3 sets of 6-8 reps':<25}")
        else:
            print("Invalid choice of exercise level!")

# Main program
def main():
    while True:
        # Start timing the execution
        start_time = time.time()  

        print("------------------------------------------------------------------------------------------------------------------------\n")
        print("                   WELCOME TO ENHANCED BMI CALCULATOR WITH HEALTH INSIGHTS!         \n")
        print("                       BY: WINDY C SABOLBORA BSCS 4B AI \n")
        print(" A quick and easy tool to calculate your Body Mass Index and receive personalized health tips for a better lifestyle! \n")
        print("------------------------------------------------------------------------------------------------------------------------\n")

        # Input weight and height from the user
        weight = float(input("\nEnter your weight (in kg): "))
        height = float(input("Enter your height (in meters): "))
        
        # Ask for age
        age = float(input("Enter your age: "))
        
        # Calculate BMI
        bmi = bmi_calculator(weight, height)
        print("\n-----------------------------------------------------------")
        print("Your BMI is: {:.2f}".format(bmi))
        
        # Display BMI and classification
        classification = bmi_classification(bmi)
        print("BMI Classification: ", classification)
        print("-----------------------------------------------------------\n")
        
        # Display message for BMI classification
        bmi_message(classification)

        # Display dietary meal plan
        dietary_meal_plan(classification, age)
        
        # Get gender-specific exercise recommendations
        print("\n------------------------------------------------")
        print("           For your Exercises")
        print("------------------------------------------------")
        gender = input("Enter your gender (male/female): ").strip().lower()
        
        # Validation for wrong input gender
        while gender != "male" and gender != "female":
            gender = input("Invalid gender! Please enter 'male' or 'female': ").lower()
                
        # Input activity level
        print("\n------------------------------------------------")
        print("What is your preferred activity level?")
        print("------------------------------------------------")
        print("1 - Light Exercise")
        print("2 - Moderate Exercise")
        print("3 - Vigorous Exercise")
        activity_choice = int(input("Enter your Choice: "))
        print()

        # Validation for activity level
        while activity_choice < 1 or activity_choice > 3:
            activity_choice = int(input("Invalid choice of activity level! Please enter a number between 1 and 3: "))

        # Provide exercise recommendation based on gender and activity level
        if gender == "male":
            suggested_exercise_male(activity_choice, age)
        elif gender == "female":
            suggested_exercise_female(activity_choice, age)

        # End timing the execution
            end_time = time.time()
            print(f"\nProgram executed in: {end_time - start_time:.4f} seconds")
        
        # Ask the user if they want to calculate another BMI
        another_calculation = input("\nDo you want to calculate another BMI? (yes/no): ").strip().lower()
        if another_calculation != 'y':
            print("\n----------------------------------------------------------")
            print("    Thank you for using the BMI Calculator. Goodbye!")
            print("----------------------------------------------------------")
            break

if __name__ == "__main__":
    main()
