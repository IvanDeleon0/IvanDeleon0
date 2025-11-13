/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
  //local Variables
  int number =0 ; 
  double currentAmount = 0.0 , depositAmount = 0.0 , withdrawAmount = 0.0;
  
  while(number != 4){
    cout << "\nWelcome to Carl Bank\nHow can we help you?\n\n ";
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit \n";
    cout << "Number: ";
    cin>> number;
    
    
    if (number != 1 && number != 2 && number != 3 && number != 4){
      cout << "\n===================================\n";
      cout << "\nInvalid Service Number. Please try again";
      cout << "\n===================================\n\n";
      continue;
    }
    if (number == 1) {
      cout << "\nYou chose to deposit money! \n";
      cout << "Amount: ";
      cin >> depositAmount;
      
      currentAmount += depositAmount;// adds the moneydeposited to tthe current money in the account
      
      cout << "\n===================================\n\n";
      cout << "\nYour current money is "<< currentAmount <<endl;
      cout << "\n===================================\n\n";
    }
    
    else if (number == 2){
     cout << "\nYou chose to Withdraw Money! \n";
     cout << "You're Current Money is "<< currentAmount <<endl;
     cout << "===================================\n";
     cout << "Amount to Wihdraw: ";
     cin >>withdrawAmount;
     
     if (withdrawAmount > currentAmount){
       cout << "\n==================================\n\n";
       cout << "\nYou have Insufficient Funds\n\n";
       cout << "\n===================================\n\n";
       continue;// brings back the user to the main menu
     }
     else{
       currentAmount -= withdrawAmount;//deduct the current money to the withdrawal amount
       
       cout << "\n===================================\n";
       //printout the withdrawal amount
       cout << "\nYou've withdraw " << withdrawAmount;
       //printout the remaining balance
       cout << "\nRemaining money is "<< currentAmount<<endl;
       cout << "\n===================================\n\n";
      }
    }
    else if (number == 3){
      cout << "\n===================================\n";
      cout << "\nYou're Current Balance is "<< currentAmount <<endl;// just check the currentAmount
      cout << "\n===================================\n\n";
    }
      
      
    }
    cout << "\n\nSuccessful exit\n";
    cout<< "\nThank You for using our Bank.";
  } 
  
