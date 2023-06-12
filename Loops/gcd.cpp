#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter 1st number: "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number: "<<endl;
    cin>>num2;
    while(num1 != num2){
    if(num1<num2)        
    num2 = num2 - num1;
    else 
    num1 = num1 - num2;
    }
    cout<<"GCD is: "<<num1<<endl;

    return 0;
}
