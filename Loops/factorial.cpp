#include <iostream>
using namespace std;

int main()
{
    int fact;
    int result = 1;
    cin >> fact;
    while (fact >= 1)
    {
        result *= fact;
        fact--;
    }
    cout << result << endl;
    return 0;
}