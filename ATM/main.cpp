#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    string pin;
    string password = "admin";
    bool isTrue = true;
    int count = 0;
    int entry;
    double balance = 0.0;
    double withdraw = 0.0;;
    double deposit = 0.0;
    long double uzs, rubl, euro, usd;
    int choice;

    system("Color A");

    do{

    cout << "*** Welcome to ATM ***" << endl;
    cout << "password: ";
    cin >> pin;
    if(pin == password){
        system("cls");
        do{

             cout << "Welcome to your account!\n"
             << "1. Deposit\n"
             << "2. Withdraw\n"
             << "3. Balance\n"
             << "4. Currenccy\n"
             << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> entry;

        system("cls");

        switch(entry){
    case 1:
        cout << "Deposit amount: ";
        cin >> deposit;
        balance = balance + deposit;
        break;
    case 2:

        if(balance <= 0){
            cout << "Please deposit some money!" << endl;
        }else{
            cout << "Withdraw amount: ";
            cin >> withdraw;
            balance = balance - withdraw;
            }
        break;
    case 3:
        cout << "Your current balance: " << balance << "$ " <<endl;
        break;
    case 4:

        currency:
         cout << "which one do you convert ?\n"
        << "1. usd to \n"
        << "2. uzs to \n"
        << "3. rubl to \n"
        << "4. euro to \n"
        << "choice: ";
        cin >> choice;
        if(choice > 0 && choice < 5){

            system("cls");

            switch(choice){

    case 1:
        usd1:
        cout << "which one do you convert ?\n"
        << "1. usd to uzs\n"
        << "2. usd to rubl\n"
        << "3. usd to euro\n"
        << "choice: ";
        cin >> choice;
        if(choice > 0 && choice < 4){
            cout << "amount: ";
            cin >> usd;
        switch(choice){
    case 1:
        uzs = 11045.00 * usd;
        cout << usd << "$" << " = " << uzs << " uzs" << endl;
        break;
    case 2:
        rubl = 58.80 * usd;
        cout << usd << "$" << " = " << rubl << " rubl" << endl;
        break;
    case 3:
        euro = 1.05 * usd;
        cout << usd << "$" << " = " << euro << " euro" << endl;
        break;
        }

        }else{
            system("cls");
            goto usd1;
        }

        break;
    case 2:
        uzs1:
         cout << "which one do you convert ?\n"
        << "1. uzs to usd\n"
        << "2. uzs to rubl\n"
        << "3. uzs to euro\n"
        << "choice: ";
        cin >> choice;
        if(choice > 0 && choice < 4){
            cout << "amount: ";
            cin >> uzs;

        switch(choice){
    case 1:
        usd = 0.000091 * uzs;
        cout << uzs << " uzs" << " = " << usd << "$" << endl;
        break;
    case 2:
        rubl = 0.0053 * uzs;
        cout << uzs << " uzs" << " = " << rubl << " rubl" << endl;
        break;
    case 3:
        euro = 0.000094 * uzs;
        cout << uzs << " uzs" << " = " << euro << " euro" << endl;
        break;
        }

        }else{
            system("cls");
            cout << "\a";
            goto uzs1;
        }

        break;

    case 3:
        rubl1:
        cout << "which one do you convert ?\n"
        << "1. rubl to usd\n"
        << "2. rubl to uzs\n"
        << "3. rubl to euro\n"
        << "choice: ";
        cin >> choice;
        if(choice > 0 && choice < 4){
            cout << "amount: ";
            cin >> rubl;
       switch(choice){
    case 1:
        usd = 0.017 * rubl;
        cout << rubl << " rubl" << " = " << usd << "$" << endl;
        break;
    case 2:
        uzs = 187.84 * rubl;
        cout << rubl << " rubl" << " = " << uzs << " uzs" << endl;
        break;
    case 3:
        euro = 0.018 * rubl;
        cout << rubl << " rubl" << " = " << euro << " euro" << endl;
        break;
        }

        }else{
            system("cls");
            cout << "\a";
            goto rubl1;
        }

        break;
    case 4:
        euro1:
        cout << "which one do you convert ?\n"
        << "1. euro to usd\n"
        << "2. euro to uzs\n"
        << "3. euro to rubl\n"
        << "choice: ";
        cin >> choice;
        if(choice > 0 && choice < 4){
            cout << "amount: ";
            cin >> euro;

       switch(choice){
    case 1:
        usd = 0.96 * euro;
        cout << euro << " euro" << " = " << usd << "$" << endl;
        break;
    case 2:
        uzs = 10579.06 * euro;
        cout << euro << " euro" << " = " << uzs << " uzs" << endl;
        break;
    case 3:
        rubl = 55.53 * euro;
        cout << euro << " euro" << " = " << rubl << " rubl" << endl;
        break;
        }

        }else{
            system("cls");
            cout << "\a";
            goto euro1;
        }

        }

        }else{
        system("cls");
        cout << "An error occurred\n\a";
        goto currency;
        }
        break;

    case 5:
       cout << "Have a nice day!" << endl;
            isTrue = false;
        break;
        }

        }while(isTrue != false);

    }else{
        count++;
        system("cls");
        if(count == 3){
            isTrue = false;
            cout << "\a";
        }else{
            cout << "Wrong password\a" << endl;
        }
    }

   }while(isTrue != false);


    return 0;
}
