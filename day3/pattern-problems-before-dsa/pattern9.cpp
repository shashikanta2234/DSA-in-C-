#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (j >= n - i && j <= n + i)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
        else
        {
            int k = i-n;
            for (int j = 0; j < 2 * n; j++)
            {
                if (j > k && j < 2*n-k)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }

    return 0;
}
