#include<iostream>
#include<cmath>
using namespace std;



int main(){
    
    //define variables
    char operation;
    double num1, num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Operation(+,-,*,/): ";
    cin>>operation;
    cout<<"Enter Number 2: ";
    cin>>num2;  
    //using switch statement: 
   switch (operation)
   {
   case '+':
    cout<<"Your Calculation: "<<num1+num2;
    break;
   case '-':
    cout<<"Your Calculation: "<<num1-num2;
    break;
    case '*':
    cout<<"Your Calculation: "<<num1*num2;
    break;
    case '/':
    cout<<"Your Calculation: "<<(num1/num2);
    break;
   default:
    cout<<"Wrong Operation";
    break;
   }

    return 0;
}
    