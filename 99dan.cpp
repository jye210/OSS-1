#include <iostream>
using namespace std;

int main()
{
    int dan;
    for(int dan = 2; dan < 9; dan++)
        for (int i = 1; i < 10; i++)
        {
            cout << dan << " * " << i << " = " << dan * i << endl;
        }
    return 0;
}
