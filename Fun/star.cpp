#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    int number = 0;

    cout << "Enter max number of stars" << endl;
    cin >> number;

    system("cls");

    while (1)
    {
        system("cls");
        for (int i = 0; i < number; i++)
        {

            for (int j = 0; j <= i; j++)
            {
                cout << "*";
                if (j == i)
                {
                    cout << endl;
                }
            }

            if (i == number - 1)
            {
                for (int k = number - 2; k >= 0; k--)
                {
                    for (int l = 0; l <= k; l++)
                    {
                        cout << "*";
                        if (l == k)
                        {
                            cout << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}