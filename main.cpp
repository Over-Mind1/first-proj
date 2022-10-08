#include <iostream>
//F =(9/5)*C + 32
//mohamed sabry hussien ====>212102806
using namespace std;

int main()
{
    float fahren1, celsius1;

    cout << "Enter the temperature in celsius\n";
    cin >> celsius1;
    fahren1 =(9.0/5.0) * celsius1 + 32;

    cout << celsius1 <<"Centigrade is equal to====> " << fahren1 <<"Fahrenheit"<<endl;

    return 0;
}
