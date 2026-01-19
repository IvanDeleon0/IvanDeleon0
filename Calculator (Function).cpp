/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
double add (double a, double b) { return a +b;}
double multiply (double a, double b) {return a * b;}
double subtract (double a, double b) {return a - b;}
void divide(double a, double b) {
    if (b == 0) {
        std::cout << "Invalid: Cannot divide by zero" << std::endl;
        return; 
    }
    double result = a / b;
    std::cout << "The Quotient is: " << result << std::endl;
    return;
}

int main()
{
    double num1,num2;
    int response;
    
    std::cout << "Enter your First Number: ";
    std::cin >> num1;
    std::cout << "Enter your Second Number: ";
    std::cin >> num2;
    
    std::cout << " What operation would you like to use \n[1. Add , 2.Subtract, 3. Multiply, 4. Division]: ";
    std::cin >> response;
    
    switch(response){
        case 1: {
            add(num1,num2);
        }
        break;
        case 2:{
            subtract(num1,num2);
            
        }
        break;
        case 3:{
            multiply(num1,num2);
        }
        break;
        case 4:{
            divide(num1,num2);
        } 
        break;
        default:{
            std::cout<< "Invalid Choice";
        }
    }
return 0;    
}


