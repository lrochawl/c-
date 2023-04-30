// Funções de repetição
//  while()
#include <iostream>

using namespace std;

int main()
{

    int n, i;

    n = 0;
    i = 0;
    while (n <= 100)
    {

        if ((n <= 50))
        {
            cout << "ID: " << n << endl;
            // continue;
        }
        else
        {
            cout << "ID: " << n << endl;
        }

        while ((n >= 49) && (i <= 10))
        {
            i++;
            n++;
            cout << "ID Medle: " << n << endl;
        }

        n++;
    }

    return 0;
}