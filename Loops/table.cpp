#include <iostream>
using namespace std;
int main(){
    int TableOf;
    int i;
    cout<<"Table of : "<<endl;
    cin>>TableOf;
    for(i=1; i<=10; i++){
        cout<<TableOf<<" x "<<i<<" = "<< TableOf * i<<endl;
    }
    return 0;
} 