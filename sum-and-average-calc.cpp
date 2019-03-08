//============================================================================
// Author: Jacqueline Kim
// Description: This program calculates the sum and average of all positive inputs, all negative inputs,
// and all inputs total. 
// Last modified: 2/28/19
//============================================================================

#include <iostream>
using namespace std;

int main() {
    
    int input, positiveSum = 0, negativeSum = 0, totSum = 0;
    double averagePositive = 0, averageNegative = 0, totAverage = 0;
    
    cout << "Please press the RETURN key to input a value\n";
    
    for (int n = 1; n <= 10; ++n) {
        
        cout << endl;
        cout << "Enter a positive or negative whole number: \n";
        cin >> input;
        cout << "You inputted: " << input << ".\n" << endl;
        
        if ( input > 0 ) {
            
            positiveSum += input;
            averagePositive = positiveSum / n;
            
        } else if ( input <= 0 ) {
            
            negativeSum += input;
            averageNegative = negativeSum / n;
            
            
        }
        
        totSum = negativeSum + positiveSum;
        totAverage = totSum / n;
        
    }
    
    cout << "The sum of your positive numbers is " << positiveSum << "\n"
    << ", and the average of your positive numbers is " << averagePositive << endl
    << "The sum of your negative numbers is " << negativeSum << endl
    << ", and the average of your negative numbers is " << averageNegative << endl
    << "Your overall sum is " << totSum << ", and your overall average is " << totAverage << "\n";
    
    return 0;
}
