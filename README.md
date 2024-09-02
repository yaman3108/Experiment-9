# Experiment 9



## Aim:
To study and implement pointers basics in c++


## Apparatus:
Vs Code, Github


## Theory:
Pointers are variables that hold memory address of other variables. They are crucial for handling large data structures and dynamic memory management

### Declaring a pointer:
A pointer is declared by specifying the type of the data it points to, followed by an asterisk (*), and then the pointer variable name.For example: <br/>
int* ptr;   // Pointer to an integer  <br/>
char* cptr; // Pointer to a character  <br/>

### Initializing a pointer:
To store the address of a variable in a pointer you need to use the & operator. <br/>
int* ptr = &x; // ptr stores the address of x <br/>

### De-refrencing a pointer:
To access the value at the memory location a pointer points to, use the dereference operator (*).  <br/>
cout << *ptr; // Output: 5 (value at the address stored in ptr) <br/>

### Dynamic memory allocation: 
Pointers are essential when working with dynamic memory allocation. <br/>
int* ptr = new int; // Allocates memory for an integer <br/>
*ptr = 5;          // Assigns value <br/>
delete ptr;        // Deallocates memory <br/>


## Code:

### 1:
```
#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
int main() {
    int *ptr, b=10;
    ptr=&b;
    cout<<*ptr<<"    "<<b<<endl<<ptr<<"    "<<&b<<endl;
    ptr++;
    cout<<"After increament: "<<ptr<<endl;

    float *n, a=93.45;
    n=&a;
    cout<<endl<<*n<<"    "<<a<<endl<<n<<"    "<<&a<<endl;
    n++;
    cout<<"After increament: "<<n<<endl;

    char *ch, c(10);
    c='abcd';
    ch=&c;
    cout<<endl<<(void*)ch<<"    "<<endl;
    ch++;
    cout<<"After increament: "<<(void*)ch<<endl;
}
```
### Output:
![Screenshot 2024-09-02 135713](https://github.com/user-attachments/assets/41775573-a4f1-415d-9a2a-ed2d11e36799)

### 2:
```
#include<iostream>
using namespace std;

int main() {
    int a=10;
int* aptr=&a;
cout<<*aptr<<endl;
*aptr=20;
cout<<a<<endl;

int arr[]={10,20,30};
cout<<*arr<<endl;

return 0;
}
```
### Output:
![Screenshot 2024-09-02 135847](https://github.com/user-attachments/assets/ee8572a7-c7eb-4df8-b102-8aa9343a3e53)

### 3:
```
#include <iostream>
using namespace std;
int main(){
    int *ptr = new int[5];
    // initialize array 
    for(int i=0;i<5;i++){
        ptr[i]=10*(i+1);
    }
    // printing the values using pointers 
    cout<< *ptr << endl;
    cout<< *ptr +1 << endl;
    cout<< *(ptr +1) << endl;   
    cout<< 2[ptr] << endl; 
    cout<< ptr[2] << endl; 
    *ptr++;
    cout<< *ptr<<endl;
    return 0;
}
```
### Output:
![Screenshot 2024-09-02 140011](https://github.com/user-attachments/assets/f1f84ae8-515a-408d-a760-5fee7452a41a)


## Conclusion:
This program helps us understand how pointers work in C++. They are usefull for dynamic memory management. we learnt the basics of pointers and how they are used in C++.
