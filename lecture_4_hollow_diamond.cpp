#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    // top

    for (int i = 0; i < n; i++)
    {
        // spaces1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {
            // spaces 2
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout<<"*";
        }
        cout << endl;
    }

    // bottom

    for (int i = 0; i < n - 1; i++)
    {
        // spaces1
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != n - 2)
        {
            // spaces2
            for(int j=0; j<2*(2-i)-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}