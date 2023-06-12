#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    cin >> num;
    while (num >= 1)
    {
        sum += num;
        num--;
    }
    cout << sum << endl;
    return 0;
}