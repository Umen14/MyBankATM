#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{

    string name;
    string password;
    int balance=1000;
    int choice;
    int amount;
    bool authenticated= false;

    cout<<"----------Welcome to MyBank ATM-------"<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your password:";
    cin>>password;

    if (name== "Umen" && password== "1234")
    {
        authenticated=true;
        cout<<"----Welcome Umen--"<<endl;
    }
    else
    {
        cout<<"Invalid Name and Password"<<endl;
    }

    if (authenticated)
    {
        do{
            cout<<endl;
            cout<<"Please select an option"<<endl;
            cout<<"1.Check the balance"<<endl;
            cout<<"2.Withdraw"<<endl;
            cout<<"3.Deposit"<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Your Choice:";
            cin>>choice;

            switch (choice)
            {
            case 1:
                cout<<"Your Current Balance is=$"<<balance<<endl;
                break;
            case 2:
                cout<<"Enter the amount to withdraw:$";
                cin>>amount;
                if (amount>balance)
                {
                    cout<<"Balance is too low. Enter the correct amount"<<endl;
                }
                else
                {
                    balance -=amount;

                    cout <<"Transaction Successful.Your new balance is=$"<<balance<<endl;

                }
                break;
            case 3:
                cout<<"Enter the amount to deposit: $";
                cin>>amount;
                balance +=amount;

                break;
            case 4:
                cout<<"Thank you for choosing MyBank ATM. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice.Please try again"<<endl;
            }

        }while(choice !=4);

    }
    return 0;
}

