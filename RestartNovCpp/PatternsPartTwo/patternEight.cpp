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
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count = count - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}