/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int number;
    int sumeven = 0 ;
    int sumodd = 0;
    
    cout << "Enter a number (0 to stop the program): ";
    cin>> number;
    
    while (number != 0){
        
        if (number % 2 == 0){
        sumeven += number;
        }
        
        else{
        sumodd += number;
        }
        
        cout << "Enter a number (0 to stop the program): ";
        cin >> number;
    }    
    cout << "The sum of all Even Numbers is : " << sumeven <<endl;
    cout << "The sum of all Odd Numbers is : " << sumodd <<endl;
    cout << "Thank You";
}

