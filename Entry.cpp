/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

void main_menu() {
    cout << "Welcome to the Accounting 101\n";
    cout << "============================\n";
    cout << "What is your First Entry?\n";
    cout << "1. Asset\n";
    cout << "2. Liabilities\n";
    cout << "3. Equity / Capital\n";
    cout << "4. Expense\n";
    cout << "5. Revenue\n";
    cout << "6. Exit\n";
    cout << "============================\n";
}

void endPrint(double origAmount) {
    cout << "You're money left is "<< origAmount<<endl<<endl;
}

int main() {
    int number = 0;
    double origAmount = 0;
    double creditAmount = 0;
    double debitAmount = 0;
    string entry;
   

    while (number != 6) {

        main_menu();
        cout << "answer: ";
        cin >> number;

        switch (number) {

        case 1: { // ASSET
            cout << "\nYou've chose Asset Entry\n";
            cout << "[Debit]/[Credit] ? ";
            cin >> entry;

            if (entry == "debit" || entry == "Debit" || entry == "DEBIT") {
                cout << "Amount: ";
                cin >> debitAmount;
                origAmount += debitAmount;
            } else {
                cout << "Amount: ";
                cin >> creditAmount;
                origAmount -= creditAmount;
            }
            break;
        }

        case 2: { // LIABILITY
            cout << "\nYou've chose Liability Entry\n";
            cout << "[Debit]/[Credit] ? ";
            cin >> entry;

            if (entry == "debit" || entry == "Debit" || entry == "DEBIT") {
                cout << "Amount: ";
                cin >> debitAmount;
                origAmount -= debitAmount;
            } else {
                cout << "Amount: ";
                cin >> creditAmount;
                origAmount += creditAmount;
            }
            break;
        }

        case 3: { // EQUITY / CAPITAL
            cout << "\nYou've chose Equity / Capital Entry\n";
            cout << "[Debit]/[Credit] ? ";
            cin >> entry;

            if (entry == "debit" || entry == "Debit" || entry == "DEBIT") {
                cout << "Amount: ";
                cin >> debitAmount;
                origAmount -= debitAmount;
            } else {
                cout << "Amount: ";
                cin >> creditAmount;
                origAmount += creditAmount;
            }
            break;
        }

        case 4: { // EXPENSE
            cout << "\nYou've chose Expense Entry\n";
            cout << "[Debit]/[Credit] ? ";
            cin >> entry; // FIXED: was cin << entry;

            if (entry == "debit" || entry == "Debit" || entry == "DEBIT") {
                cout << "Amount: ";
                cin >> debitAmount;
                origAmount += debitAmount;
            } else {
                cout << "Amount: ";
                cin >> creditAmount;
                origAmount -= creditAmount;
            }
            break;
        }

        case 5: { // REVENUE
            cout << "\nYou've chose Revenue Entry\n";
            cout << "[Debit]/[Credit] ? ";
            cin >> entry;

            if (entry == "debit" || entry == "Debit" || entry == "DEBIT") {
                cout << "Amount: ";
                cin >> debitAmount;
                origAmount += debitAmount;
            } else {
                cout << "Amount: ";
                cin >> creditAmount;
                origAmount -= creditAmount;
            }
            break;
        }

        case 6:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid Number\n";
            break;
        }
    endPrint (origAmount);
    }

    return 0;
}

