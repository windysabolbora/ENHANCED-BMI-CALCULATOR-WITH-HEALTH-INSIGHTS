#include <iostream>
#include <string>
#include <iomanip> // used in the setprecision() to display two decimal places & setw for alignment in the table
#include <chrono> // Include chrono for time measurement

using namespace std;

// BMI formula
float bmi_calculator(float weight, float height) {
    return weight / (height * height);
}

// BMI classification
string bmi_classification(float bmi) {
    if (bmi < 18.5)
        return "Underweight";
    else if (bmi >= 18.5 && bmi < 24.9)
        return "Healthy Weight";
    else if (bmi >= 25 && bmi < 29.9)
        return "Overweight";
    else if (bmi >= 30)
        return "Obesity";
    else
        return "Invalid BMI!";
}

// Dietary meal plan based on BMI classification
void dietary_meal_plan(string classification, int age) 
{
    cout << endl;
    cout << "-------------------------------------------------------------------------- " << endl;;
    cout << "                   Suggested Dietary Meal Plan" << endl;
    cout << "--------------------------------------------------------------------------" << endl;;

    if (age <= 18) 
    { // Dietary recommendations for below 18
        if (classification == "Underweight")
        { // Below 18 Underweight suggested foods
             cout << endl;
             cout << "--------------- Underweight Suggested Foods for below 18 --------------- " << endl;
             cout << endl;
             cout << "Breakfast: Arroz Caldo with egg" << endl;
             cout << "Lunch: Menudo serve with rice" << endl;
             cout << "Snacks: Pancake" << endl;
             cout << "Dinner: Kare-kare serve with vegetables and rice" << endl;
        }
        else if (classification == "Healthy Weight")
        { // Below 18 Healthyweight suggested foods
            cout << endl;
            cout << "--------------- Healthyweight Suggested Foods for below 18 ---------------" << endl; 
            cout << endl;
            cout << "Breakfast: Sinigang with fried egg and rice" << endl;
            cout << "Lunch: Adobo with rice" << endl;
            cout << "Snacks: Biko" << endl;
            cout << "Dinner: Crispy Pata (Deep-fried prok leg) with rice" << endl;
        }
        else if (classification == "Overweight Weight")
        {// Below 18 Overweight suggested foods
            cout << endl;
            cout << "--------------- Overweight Suggested Foods for below 18 ---------------";
            cout << endl;
            cout << "Breakfast: Oatmeal with fruits and nuts" << endl;
            cout << "Lunch: Adobo with vegetables and brown rice"<< endl;
            cout << "Dinner: Ensalada with vegetables" << endl;

        }
        else if (classification == "Obesity")
        {// Below 18 Obese weight suggested foods
            cout << endl;
            cout << "--------------- Obese Weight Suggested Foods for below 18 ---------------";
            cout << endl;
            cout << "Breakfast: Oatmeal with fruits and nuts" << endl;
            cout << "Lunch: Vegetable lumpia"<< endl;
            cout << "Dinner: Tinolang isda with green papaya, ginger, and chili peppers" << endl;
        }  
    }
    else
    { // Dietary recommendations for above 18
        if (classification == "Underweight") 
        { // Above 18 Underweight suggested foods
             cout << endl;
             cout << "--------------- Underweight Suggested Foods for above 18 ---------------" << endl;
             cout << endl;
             cout << "Breakfast: Kare-kare with roasted vegetables and brown rice" << endl;
             cout << "Lunch: Pancit Canton (stir-fried noodles) with lumpia (spring rolls)" << endl;
             cout << "Snacks: Turon (banana spring rolls), Biko (sticky rice cake with coconut milk and sugar), and Leche flan (caramel custard)" << endl;
             cout << "Dinner: Adobo (meat or seafood braised in vinegar, soy sauce, and garlic) with sinangag and rice" << endl;
        } 
        else if (classification == "Healthy Weight") 
        { // Above 18 Healthyweight suggested foods
            cout << endl;
            cout << "--------------- Healthyweight Suggested Foods for above 18 ---------------" << endl; 
            cout << endl;
            cout << "Breakfast: Arroz Caldereta (rice with beef stew)" << endl;
            cout << "Lunch: Menudo (beef stew with liver and vegetables)" << endl;
            cout << "Snacks: Suman (sticky rice cake wrapped in banana leaves), Saba (plantain chips), and Pinakbet (vegetable stew)" << endl;
            cout << "Dinner: Sinigang (sour soup) with shrimp and vegetables and rice" << endl;
        } 
        else if (classification == "Overweight") 
        { // Above 18 Overweight suggested foods
            cout << endl;
            cout << "--------------- Overweight Suggested Foods for above 18 ---------------" << endl;
            cout << endl;
            cout << "Breakfast: Tapioca (cassava) with tuyo (dried fish)" << endl;
            cout << "Lunch: Pinakbet (vegetable stew) with rice"<< endl;
            cout << "Dinner: Grilled chicken with pinakurat (grilled vegetables) and rice" << endl;
        } 
        else if (classification == "Obesity") 
        { // Above 18 Obese weight suggested foods
            cout << endl;
            cout << "--------------- Obese Weight Suggested Foods for above 18 ---------------" << endl;
            cout << endl;
            cout << "Breakfast: Oatmeal with berries and nuts, Greek yogurt with fruit, or whole-grain toast with avocado" << endl;
            cout << "Lucnh: Salad with grilled chicken or fish, lentil soup, or a whole-grain sandwich with lean protein" << endl;
            cout << "Dinner: Baked salmon with roasted vegetables, chicken stir-fry, or a tofu scramble with whole-grain toast" << endl;
        } 
        else 
        {// Validation
            cout << "Invalid Classification" << endl;
            cout << "Please check the inputs and try again." << endl;
        }
    
    }  
}

// BMI message for classification
void bmi_message(string message) {
    if (message == "Underweight") {
        cout << "You are Underweight. It's important to consider actions for your health." << endl;
        cout << "I suggest doing regular exercise and maintaining a balanced diet." << endl;
    } else if (message == "Healthy Weight") {
        cout << "You are within the Healthy Weight range. Keep up the good work!" << endl;
        cout << "Continue maintaining a healthy lifestyle.\n";
    } else if (message == "Overweight") {
        cout << "You are Overweight! Regular exercise and a balanced diet will help manage your weight effectively." << endl;
    } else if (message == "Obesity") {
        cout << "You are in the Obese range! Focus on physical activity and a healthy balanced diet to improve your health." << endl;
    } else { // Validation
        cout << "Invalid Classification! Please check the inputs and try again." << endl;
    }
}

// Suggested exercises for male
void suggested_exercise_male(int activity_choice, int age) 
{
    cout << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "                   Exercise Recommendation for Male:" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << setw(25) << left << "Activity Level" << setw(25) << left << "Exercise" << setw(25) << left << "Sets/Reps" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;

    if (age <= 18)
    { // Suggested exercises for males below 18 years old
        switch (activity_choice) 
        {
            case 1: // Light Exercise for male below 18
                cout << setw(25) << left << "Light Exercise" << endl; 
                cout << setw(25) << left << "for Male below 18" << endl;
                cout << setw(25) << left << "(2-3x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squat" << setw(25) << left << "3 sets of 10reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-up" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Plank" << setw(25) << left << "2 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bicycle crunch" << setw (25) << left << "3 sets of 30 seconds" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Cycling" << setw(25) << left << "30 minutes" << endl;
                break;
            case 2: // Moderate Exercise for male below 18
                cout << setw(25) << left << "Moderate Exercise" << endl; 
                cout << setw(25) << left << "for Male below 18" << endl;
                cout << setw(25) << left << "(3-4x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Dumbbell curls" << setw(25) << left << "3 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Dumbbell rows" << setw(25) << left << "3 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead press" << setw(25) << left << "3 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Biceps extensions" << setw(25) << left << "3 sets of 10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Interval sprints" << setw(25) << left << "" << endl;
                break;
            case 3: // Vigorous Exercise for male below 18
                cout << setw(25) << left << "Vigorous Exercise" << endl; 
                cout << setw(25) << left << "for Male below 18" << endl;
                cout << setw(25) << left << "(4-6x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Barbell squats" << setw(25) << left << "3 sets of 10 reps each" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bench press" << setw(25) << left << "3 sets of 10 reps each" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Deadlifts" << setw(25) << left << "3 sets of 10 reps each" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead press" << setw(25) << left << "3 sets of 10 reps each" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Interval training" << setw(25) << left << "" << endl;
                break;
            default:
                cout << "Invalid choice of exercise level!" << endl;
        }
    } 
    else 
    { // Suggested exercises for males above 18 years old
        switch (activity_choice) 
        {   
            case 1: // Light Exercise for male above 18
                cout << setw(25) << left << "Light Exercise" << endl;
                cout << setw(25) << left << "for Male above 18" << endl;
                cout << setw(25) << left << "(3-5x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squat" << setw(25) << left << "3 sets of 10-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-up" << setw(25) << left << "3 sets of 10-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Pull-up" << setw(25) << left << "3 sets of 6-10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 10-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bicycle crunch" << setw (25) << left << "3 sets of 30 seconds" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Plank" << setw(25) << left << "Hold for 30 seconds, increase gradually" << endl;
                break;
            case 2: // Moderate Exercise for male above 18
                cout << setw(25) << left << "Moderate Exercise" << endl; 
                cout << setw(25) << left << "for Male above 18" << endl;
                cout << setw(25) << left << "(3-5x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-up" << setw(25) << left << "3 sets of 15-20 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Pull-up" << setw(25) << left << "3 sets of 12-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Pike push-up" << setw(25) << left << "3 sets of 12-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squats" << setw(25) << left << "3 sets of 15-20 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Burpee" << setw(25) << left << "3 sets of 10-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Mountain climbing" << setw(25) << left << "3 sets of 45 seconds" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Crunches" << setw(25) << left << "3 sets of 30 reps" << endl;
                break;
            case 3: // Vigorous Exercise for male above 18
                cout << setw(25) << left << "Vigorous Exercise" << endl; 
                cout << setw(25) << left << "for Male above 18" << endl;
                cout << setw(25) << left << "(2-3x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Barbell squats" << setw(25) << left << "3 sets of 8-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bench press" << setw(25) << left << "3 sets of 8-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead press" << setw(25) << left << "3 sets of 8-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Deadlifts" << setw(25) << left << "3 sets of 5-8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Barbell row" << setw(25) << left << "3 sets of 8-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Triceps extension" << setw(25) << left << "3 sets of 8-12 reps" << endl;
                break;
            default:
                cout << "Invalid choice of exercise level!" << endl;
        }
    } 
}

// Suggested exercises for females
void suggested_exercise_female(int activity_choice, int age) 
{
    cout << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "                   Exercise Recommendation for Female:" << endl;
    cout << "--------------------------------------------------------------------------------------"<< endl;
    cout << setw(25) << left << "Activity Level" << setw(25) << left << "Exercise" << setw(25) << left << "Sets/Reps" << endl;
    cout << "--------------------------------------------------------------------------------------"<< endl;

    if (age < 18)
    { // Suggested exercises for females below 18 years old        
        switch (activity_choice) 
        {
            case 1: // Light Exercise for female below 18
                cout << setw(25) << left << "Light Exercise" << endl;
                cout << setw(25) << left << "for Female below 18" << endl;
                cout << setw(25) << left << "(2-3x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squats" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-ups" << setw(25) << left << "3 sets of 8 reps per leg" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Plank" << setw(25) << left << "2 sets of 45 seconds" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Dancing" << setw(25) << left << "30 minutes" << endl;
                break;
            case 2: // Moderate Exercise for female below 18
                cout << setw(25) << left << "Moderate Exercise" << endl;
                cout << setw(25) << left << "for Female below 18" << endl;
                cout << setw(25) << left << "(2-3x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Dumbbell curls" << setw(25) << left << "3 sets of 8 reps each arm" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Dumbbell rows" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead press" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bicep extensions" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Jogging" << setw(25) << left << "30 minutes" << endl;
                break;
            case 3: // Vigorous Exercise female below 18
                cout << setw(25) << left << "Vigorous Exercise" << endl;
                cout << setw(25) << left << "for Female below 18" << endl;
                cout << setw(25) << left << "(4-5x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Barbell Squats" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bench press" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Deadlifts" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead press" << setw(25) << left << "3 sets of 8 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Cycling" << setw(25) << left << "45-60 minutes" << endl;
                break;
            default:
                cout << "Invalid choice of exercise level!" << endl;
        }
    }
    else
    { // Suggested exercises for females above 18 years old
        switch (activity_choice) 
        {
            case 1: // Light Exercise for female above 18
                cout << setw(25) << left << "Light Exercise" << endl;
                cout << setw(25) << left << "for Female above 18" << endl;
                cout << setw(25) << left << "(3-4x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squats" << setw(25) << left << "3 sets of 10-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 10-15 reps per leg" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-ups" << setw(25) << left << "3 sets of as many reps as possible (modify by doing knee push-ups)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Plank" << setw(25) << left << "Hold for 30 seconds, increase gradually" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Crunches" << setw(25) << left << "3 sets of 20 reps" << endl;
                break;
            case 2: // Moderate Exercise for female above 18
                cout << setw(25) << left << "Moderate Exercise" << endl;
                cout << setw(25) << left << "for Female above 18" << endl;
                cout << setw(25) << left << "(3-4x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Push-up" << setw(25) << left << "3 sets of 12-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Chair Dips" << setw(25) << left << "3 sets of 15-20 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squats" << setw(25) << left << "3 sets of 12-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 10-15 reps per leg" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Cossack squat" << setw(25) << left << "3 sets of 10-15 reps per leg" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Plank" << setw(25) << left << "Hold for 1 minute, increase gradually" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Mountain climbing" << setw(25) << left << "3 sets of 30 seconds" << endl;
                break;
            case 3: // Vigorous Exercise for female above 18
                cout << setw(25) << left << "Vigorous Exercise" << endl;
                cout << setw(25) << left << "for Female above 18" << endl;
                cout << setw(25) << left << "(2-3x per week)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Squats" << setw(25) << left << "3 sets of 10-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Lunges" << setw(25) << left << "3 sets of 10-12 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Bench Press" << setw(25) << left << "3 sets of 8-10 reps (starts with a light weight)" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Rows" << setw(25) << left << "3 sets of 12-15 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Overhead Press" << setw(25) << left << "3 sets of 8-10 reps" << endl;
                cout << setw(25) << left << "" << setw(25) << left << "Deadlift" << setw(25) << left << "3 sets of 6-8" << endl;
                break;
            default:
                cout << "Invalid choice of exercise level!" << endl;
        }
    }   
}


 // Main function
int main() 
{
    float weight, height, age;
    string gender;
    int activity_choice;
    char calculate_again;

    do 
    {
        // Start timing the execution
        auto start = chrono::high_resolution_clock::now(); 
        cout << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------ " << endl;;
        cout << "                   WELCOME TO ENHANCED BMI CALCULATOR WITH HEALTH INSIGHTS!         " << endl;
        cout << "                         BY: WINDY C SABOLBORA BSCS 4B AI" << endl;
        cout << " A quick and easy tool to calculate your Body Mass Index and receive personalized health tips for a better lifestyle!" << endl;
        cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;;

        // Input weight and height from the user
        cout << endl;
        cout << "Enter your weight (in kg): ";
        cin >> weight;
        cout << "Enter your height (in meters): ";
        cin >> height;

        // Ask for age
        cout << "Enter your age: ";
        cin >> age;

        // Calculate BMI
        float bmi = bmi_calculator(weight, height);
        string classification = bmi_classification(bmi);

        // Display BMI and classification
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Your BMI is: " << fixed << setprecision(2) << bmi << endl;
        cout << "Your BMI Classification result is: " << classification << endl;
        cout << "-----------------------------------------------------------" << endl;

        // Display message for BMI classification
        cout << endl;
        bmi_message(classification);

        // Display dietary meal plan
        cout << endl;
        dietary_meal_plan(classification, age);

        // Input gender-specific exercise recommendations
        cout << endl;
        cout << endl;
        cout << "------------------------------------------------  " << endl;
        cout << "             For your Exercises " << endl;
        cout << "------------------------------------------------  " << endl;
        cout << "Enter your gender (male/female): ";
        cin >> gender;
        cout << endl;
        // Validation for wrong input gender
        while (gender != "male" && gender != "female") 
        {
            cout << "Invalid gender! Please enter 'male' or 'female': ";
            cin >> gender;
        }

        // Input activity level
        cout << endl;
        cout << "------------------------------------------------  " << endl;
        cout << "What is your preferred activity level?: " << endl;
        cout << "------------------------------------------------  " << endl;
        cout << "1 - Light Exercise" << endl;
        cout << "2 - Moderate Exercise" << endl;
        cout << "3 - Vigorous Exercise" << endl;
        cout << "Enter your Choice: ";
        cin >> activity_choice;
        cout << endl;
        
        // Validation for activity level
        while (activity_choice < 1 || activity_choice > 3) 
        {
            cout << "Invalid choice of activity level! Please enter a number between 1 and 3: ";
            cin >> activity_choice;
        }

        // Display suggested exercises based on gender and activity level
        if (gender == "male") 
        {
            suggested_exercise_male(activity_choice, age);
        } 
        else if (gender == "female") 
        {
            suggested_exercise_female(activity_choice, age);
        }

        // Stop the clock and calculate time taken
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);

        // Display execution time
        cout << endl;
        cout << "Time taken for the calculation and output: " << duration.count() << " milliseconds" << endl;

        // Ask the user if they want to calculate another BMI
        cout << endl;
        cout << "Do you want to calculate another BMI? (Y/N): ";
        cin >> calculate_again;
    } while (calculate_again == 'Y' || calculate_again == 'y');
        cout << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "     Thank you for using the BMI Calculator. Goodbye!" << endl;
        cout << "----------------------------------------------------------" << endl;
    return 0;
}