/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main(){
    
    int number;
    int even = 0 ;
    int odd = 0;
    
    cout << "Enter a number (0 to stop the program): ";
    cin>> number;
    
    while (number != 0){
        
        if (number % 2 == 0){
        even++;
        }
        
        else{
        odd++;
        }
        
        cout << "Enter a number (0 to stop the program): ";
        cin >> number;
    }    
    cout << "The Frequency of  your Even Numbers is : " << sumeven <<endl;
    cout << "The Frequency of your Odd Numbers is : " << sumodd <<endl;
    cout << "Thank You";
}



    