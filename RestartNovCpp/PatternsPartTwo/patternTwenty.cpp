#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number:--> ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // loops for spaces
        int spaces = 1;
        while (spaces < i)
        {
            cout << " ";
            spaces++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}