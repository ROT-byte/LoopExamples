#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int digit=0;
    int number;
    int nTimes=0;
    int count=0;
    int dup=0;
    int dup1=0;
    int sum=0;

    cout<<"Enter the number: "<<endl;
    cin>>number;
    dup = number;
    dup1=number;

//TO FIND POWER TO MULTIPLY
    while(number != 0){
        digit = number%10;
        number = number/10;
        count++;
    }

//SUM
    while(dup != 0){
        digit = dup%10;
        dup = dup/10;
        nTimes = pow(digit, count);
        sum += nTimes;
    }   
    cout<<"The Sum is: "<< sum <<endl;


    if(dup1 == sum)
        cout<<"The number is Armstrong";
    else
        cout<<"The number is not Armstrong" ;
    


    return 0;
}