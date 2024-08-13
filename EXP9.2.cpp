#include<iostream>
using namespace std;

int main() {
    int i=0, *ptr, arr[]={7, 4, 90};
    cout<<*arr<<endl;
    ptr=arr;
    cout<<"All elements: "<<endl;
    while(i<3){
        cout<<ptr<<"   "<<*ptr<<endl;
        //cout<<*ptr<<endl;
        ptr++;
        i++;
    }
}
