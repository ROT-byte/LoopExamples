#include <iostream>
using namespace std;
int main(){
    int digit=0;
    int number;
    int reverse=0;

    cout<<"Enter the number: "<<endl;
    cin>>number;
        while(number!=0){
            digit = number%10;
            number = number/10;
            reverse = reverse*10 + digit;
        }
    cout<<"Reverse of the number is: "<<reverse;
        return 0;
    }
