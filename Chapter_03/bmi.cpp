// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weightPounds, heightInches;
    double weightKg, heightMetres, bmi;

    cout << "Enter weight in pounds: ";
    cin >> weightPounds;

    cout << "Enter height in inches: ";
    cin >> heightInches;

    // Convert pounds to kilograms
    weightKg = weightPounds * 0.45359237;

    // Convert inches to metres
    heightMetres = heightInches * 0.0254;

    // Calculate BMI
    bmi = weightKg / (heightMetres * heightMetres);

    cout << fixed << setprecision(2);
    cout << "BMI is " << bmi << endl;

    // Determine BMI category
    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi <= 24.9)
    {
        cout << "Normal" << endl;
    }
    else if (bmi <= 29.9)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Obese" << endl;
    }

    return 0;
}