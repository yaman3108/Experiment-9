# Experiment 5



## Aim:
To study and implement C++ decision making statement.


## Apparatus:
Vs Code, Github


## Theory:
Conditional statements allow you to make decisions within your programs. Specifically they can be used to execute specific blocks of code for particular situations only.
There are four primary conditional statements in C language:

### if:
The simplest form of conditional statements where a certain condition is evaluated and if it evaluates true then the command is excecuted. 

### if-else:
This is an extension of the first form since we have the alternative block whose commands get executed provided that the original statement was false when selected. 

### nested if-else:
This enables the evaluation of several conditions sequentially until it finds one which is true whereby if this happens its contained or associated block will be executed while ignoring all other blocks. 

### switch case: 
This facilitates picking one among many subprograms depending on a variable’s value. So rather than using multiple nested if-else statements we can use switch instead.

## Explanation: 
This program covers the four basic conditional statements in C++, such as if, if-else, nested if-else, switch case.


## Code:

### if-else:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
int main() 
{
    // simple if statement 
    int a = 20;
    int b = 18;
    if (x > y)
    {
        cout<< "a is greater than b "<<endl;
    }
    

    // simple if else 

    int  num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num==0) {
        cout<<num<<"Invalid input, please enter a positive number"<<endl;
    }
    else if(num%2!=0){
        cout<<num<<" is odd"<<endl;
    }
    else {
        cout<<num<<" is even"<<endl;
    }
    
    return 0;


}
```
### Output:
![Screenshot 2024-08-05 113519](https://github.com/user-attachments/assets/20202799-f746-4952-8e24-73e6072142de)

### Nested if-else:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
// Nested if else program
int main() {
    int  num1, num2, num3;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"Enter number-3: ";
    cin>>num3;

    if(num1>=num2) {
        if(num1>=num3) {
            cout<<num1<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else if(num2>=num1) {
        if(num2>=num3) {
            cout<<num2<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    
}
```
### Output:
![Screenshot 2024-08-05 113658](https://github.com/user-attachments/assets/abde726c-3bfa-4c43-a81f-565b24bc05a6)

### Switch case:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
// Simple calculator using 'Switch case'
 
 int main()
 {
    int choice;
    double num1,num2;
    cout<<"This is a simple calculator"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    cout<<" Enter the operation choice number (1-4)"<<endl;
    cin>>choice;

    cout<<"Enter any two numbers: "<<endl;
    cin>>num1>>num2;

    switch(choice){
        case 1:
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"subtraction = "<<num1 - num2<<endl;
        break;

        case 3:
        cout<<"Multiplication = "<<num1*num2<<endl;
        break;

        case 4:
        cout<<"Division = "<<num1/num2<<endl;
        break;
    }

    return 0;
 }
```
### Output:
![Screenshot 2024-08-05 113816](https://github.com/user-attachments/assets/e1bc9c26-4d3c-4efb-a287-086d0a219f53)


## Conclusion:
This program helps us understand how conditional statements work in C++. These conditional statements can be used to make decisions in your program, specifically it only runs a block of code if a particular situation occurs.
