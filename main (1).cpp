/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Inputs
    string name;
    double prelim =0,midterm=0,final=0;
    int finalAvg = 0;
    
    
    //Display
    cout << "===========================\n";
    cout << "Student Name: ";
    getline (cin, name);
    cout << "===========================\n";
    cout << "Welcome, "<<name;
    cout << "\nPrelim Grade: ";
    cin>> prelim ;
    cout << "Midterm Grade: ";
    cin >> midterm ;
    cout << "Finals Grade: ";
    cin >> final;
    cout << "\n===========================\n";
    
    
    
    // Calculations
    
    finalAvg = (prelim + midterm + final) / 3;
    
    //Condition
    if (finalAvg < 1 || finalAvg > 100){
        cout << "Invalid Grade Input.\n Please try again.";
    }
    else {
        switch( finalAvg / 10 ){
           case 10:
           case 9:
             cout <<"Final Average: "<< finalAvg<<endl;
             cout<< "Letter Grade: A\n";
             cout << "Remarks: Excellent";
             break;
            case 8:
             cout <<"Final Average: "<< finalAvg<<endl;
             cout<< "Letter Grade: B\n";
             cout << "Remarks: Good";
             break;
            case 7:
             cout <<"Final Average: "<< finalAvg<<endl;
             cout<< "Letter Grade: C\n";
             cout << "Remarks: Fair";
             break;
            case 6:
             cout <<"Final Average: "<< finalAvg<<endl;
             cout<< "Letter Grade: D\n";
             cout << "Remarks: Needs Improvement";
             break;
            default:
             cout <<"Final Average: "<< finalAvg<<endl;
             cout<< "Letter Grade: F\n";
             cout << "Remarks: Failed";
             break;
        }
    cout << "\n===========================\n";
    }
}