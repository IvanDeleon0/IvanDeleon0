
#include <iostream>
using namespace std;
#include <chrono>
#include <thread> 
#include <iomanip>




// just loading animation
void loading (){
  for (int i =1; i<=5 ; i++){
    cout <<".";
    cout.flush();
    this_thread::sleep_for(chrono:: milliseconds(450));
  }
  cout<<endl;// so the other cout outside void will be on new line
}
int main() 
{
  //local Variables
  int number =0 ; 
  double currentAmount = 0.0 , depositAmount = 0.0 , withdrawAmount = 0.0;
  cout << setprecision(2)<< fixed; // para 2 decimal lang if ever may decimal
  
  while(number != 4){
    this_thread::sleep_for(chrono::seconds(1));//delay 1 sec
    cout << "===================================\n";
    cout << "\nWelcome to Carl Bank\nHow can we help you?\n\n";
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
      if (depositAmount > 30){
      
        currentAmount += depositAmount;// adds the moneydeposited to tthe current money in the account
        this_thread::sleep_for(chrono::seconds(2));
        cout << "\n===================================\n\n";
        cout << "\nYour current money is "<< currentAmount <<endl;
        cout << "\n===================================\n\n";
        continue;
      }else{
         loading();
         cout <<"Invalid Transaction\n\n";
         cout <<"Must be above 30 deposit amount";
         this_thread::sleep_for(chrono::seconds(2));
         continue;
      }
    }
    else if (number == 2) {
        cout << "\nYou chose to Withdraw Money! \n";

        if (currentAmount == 0) {
            loading();
            cout << "You don't have enough balance.\n";
            loading();
            continue;
        } else {
            cout << "Your Current Money is " << currentAmount << endl;
            cout << "===================================\n";
            
            cout << "Amount to Withdraw: ";
            cin >> withdrawAmount;
            
            // Check if withdrawal is valid
            if (withdrawAmount > currentAmount) {
                this_thread::sleep_for(chrono::seconds(2));

                cout << "\n===================================\n\n";
                cout << "You have Insufficient Funds\n\n";
                cout << "===================================\n\n";
                this_thread::sleep_for(chrono::seconds(2));
                continue; // go back to main menu
            }
            else {
                currentAmount -= withdrawAmount; // deduct amount
                loading();
                cout << "\n===================================\n";
                cout << "You've withdrawn " << withdrawAmount << endl;
                loading();
                cout << "Remaining money is " << currentAmount << endl;
                cout << "===================================\n\n";
                continue;
            }
        }
      }

    else if (number == 3) {
      this_thread::sleep_for(chrono::seconds(1));
      cout << "\n===================================\n";
      cout << "\nYou're Current Balance is "<< currentAmount <<endl;// just check the currentAmount
      cout << "\n===================================\n\n";
      this_thread::sleep_for(chrono::seconds(2));
      continue;
    }
      
      
    
    loading();
    cout<<"\nExiting program";

    loading();
    cout << "\nSuccessful exit\n";
    cout<< "\nThank You for using our Bank.";
    cout<<endl;
    cout<<endl;
  } 
}
/*
this program is created because of boredom and practice on coding - ivan  */
/*
update suggestion
- account creation() di ko pa alam toh hehe
-sub entry like account receivable etc..() soon
-trial balance ()
-timer delay like loading sequence (/)
*/
