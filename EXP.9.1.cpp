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
