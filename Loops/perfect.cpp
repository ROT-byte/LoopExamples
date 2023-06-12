#include <iostream>
using namespace std;

int main()
{
    int num;
    int SumFactor = 0;
    int i = 1;
    cout << "Enter the num: " << endl;
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            SumFactor += i;
        }
        i++;
    }
    cout << endl;
    if (SumFactor == num * 2)
    {
        cout << "It is a Perfect number" << endl;
    }
    else
        cout << "It is not a Perfect number" << endl;
    // cout << "Perfect number is: " << SumFactor << endl;
    return 0;
}