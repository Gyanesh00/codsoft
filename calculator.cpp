#include <iostream>
using namespace std;
//function for adding the number
int add(int a, int b) {
    return a+b;
}
//function for subtracting the number
int subtract(int a, int b) {
    return a-b;
}
//function for multiplying the number
int multiply(int a, int b) {
    return a*b;
}
//function for divide the number
double divide(int a, int b) {
    if(b!=0) 
    {
        double result= a/b;
        cout<< "Result is"<<result<<endl;
    } 
    else 
    {
        cout<<"Can't divided by zero"<<endl;
    }
}

int main() {
    char Continue;
    do 
    {
        int choice;
        int a,b;

        cout<<"Select operation for add....."<<endl;
        cout<<"Adding"<<endl;
        cout<<"Subtracting"<<endl;
        cout<<"Multiplying"<<endl;
        cout<<"Dividing"<<endl;

        cin>>choice;

        cout<< "Enter the first number"<<" ";
        cin>>a;

        cout<< "Enter the second number"<<" ";
        cin>>b;

        int result;
        double divResult;

        switch (choice) {
            case 1:
                result = add(a, b);
                cout<<result<<endl;
                break;
            
            case 2:
                result = subtract(a, b);
                cout<<result<<endl;
                break;

            case 3:
                result = multiply(a, b);
                cout<<result<<endl;
                break;
            
            case 4:
                divResult = divide(a, b);
                cout<<divResult<<endl;
                break;
            
            default:
                cout<<"Invalid choice"<< endl;
                break;
        }

        cout<<"Do you want to perform another operation? (Yes/No) : ";
        cin>>Continue;

    }
    while (Continue == 'Y' || Continue == 'y');
    return 0;
}
