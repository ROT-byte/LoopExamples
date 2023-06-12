#include <iostream>
using namespace std;

int main()
{
    int num;
    int i = 1;
    cout << "Enter the num: " << endl;
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}