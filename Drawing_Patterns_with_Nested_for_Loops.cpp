#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "(a)\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(b)\n";
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(c)\n";
    for (int i = n; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    cout << "(d)\n";
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
