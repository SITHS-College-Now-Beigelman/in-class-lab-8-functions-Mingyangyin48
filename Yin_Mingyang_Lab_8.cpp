// Mingyang Michelle Yin
// Lab 8
// Nov. 4, 2024

#include <iostream>
#include <cmath>
using namespace std;

    // PART 2 //

int doubleMultiply( int a, int b ) // makes a new function called doubleMultiply which takes 2 int variables 
{
    int product; // new integer called product
    product = a * b * 2; // finding the product by multiplying a b and 2 together
    return product; // returns the value 
}

    // PART 3 //

double getSum(double a, double b, double c) // makes a new function called getSum which takes 3 double variables
{
    double result;  // new double called result
    result = a + b + c;  // add the 3 values
    return result; // returns the value 
}

int main ()
{
    // PART 1 //

    double pointNum;
    cout << "Please enter an floating point number: "; // asks the user for a floating point value
    cin >> pointNum;
    cout << endl;
    cout << "Square root of " << pointNum << " is: " << sqrt(pointNum) << endl; // finds the square root of the value
    cout << "Power of " << pointNum << " to the fourth power is: " << pow(pointNum, 4) << endl; // finds the power of the value to 4
    cout << "Floor of " << pointNum << " is: " << floor(pointNum) << endl << endl; // finds the largerst possible integer value


    // PART 2 //

    int num1, num2;
    cout << "Enter two intergers: "; // asks the user the intergers
    cin >> num1 >> num2; // lets the user plug in values
    cout << "Twice the product of the numbers is: " // prints the value
        << doubleMultiply(num1, num2) << endl << endl; // uses the equation from earlier to do the math

    system("PAUSE"); // pauses the system until the user makes a movement

    cout << endl;


    // PART 3 //    

    double numb1, numb2, numb3;
    cout << "Enter three floating point numbers: "; //asks the user to plug in 3 values
    cin >> numb1 >> numb2 >> numb3; // user inserts value
    double result = getSum(numb1, numb2, numb3); // uses the equation from earlier to do the math
    cout << "The sum of the three numbers is: " << result << endl; // prints value

    return 0;
}

/*

        //OUTPUT//
        
     Please enter an floating point number: 11.1

    Square root of 11.1 is: 3.33167
    Power of 11.1 to the fourth power is: 15180.7
    Floor of 11.1 is: 11

    Enter two intergers: 20 23
    Twice the product of the numbers is: 920

    Press any key to continue . . . 

    Enter three floating point numbers: 33.23 4.23 305.22
    The sum of the three numbers is: 342.68
    
*/

