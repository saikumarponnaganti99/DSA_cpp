#include <iostream>
using namespace std;

int main()
{
    int n, i, num = 1;
    printf("Enter the number : ");
    cin >> n;

    for (i = 0; i < n; i++)
    {
        // char ch='A';
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
            // ch++;
        }

        cout << endl;
    }
}