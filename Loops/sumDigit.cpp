#include <iostream>
using namespace std;
int main(){
    int digit;
    int number;
    int sum = 0;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    while(number != 0){
        digit = number%10;
        number = number/10;
        sum+=digit;
        cout<<digit<<endl;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    return 0;
}