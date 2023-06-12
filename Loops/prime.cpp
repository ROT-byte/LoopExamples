// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     int i;
//     cout << "Enter the number: " << endl;
//     cin >> number;
//     for (i = 1; number >= i; i++)
//     {
//         if (number % i == 0 && i != 1 && i != number)
//         {
//             cout << "NOT PRIME" << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 1;
    int prime = 0;
    cout << "Enter the number: " << endl;
    cin >> number;
    while (number != i)
    {
        if (number % i == 0)
        {
            prime++;
        }
        i++;
    }
    if (prime >= 2)
        cout << "NOT PRIME" << endl;
    else
        cout << "PRIME" << endl;
    return 0;
}