#include <iostream>
using namespace std;
int main(){
    int digit=0;
    int number;
    int reverse=0;
    int temp;
    
    cout<<"Enter the number: "<<endl;
    cin>>number;
    temp = number;
        while(number!=0){
            digit = number%10;
            number = number/10;
            reverse = reverse*10 + digit;
        }
        if(temp == reverse)
            cout<<"PALINDROME"<<endl;
        else
            cout<<"NOT PALINDROME"<<endl;

        return 0;
    }

