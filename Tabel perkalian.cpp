#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< " masukan angka positif : ";
    cin >> a;
    
    for (int b = 1 ; b <= 10 ; ++b) {
        cout << a << " * " << b << " = " << a*b << endl;
    }

    return 0;
}
