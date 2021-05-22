#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter number of decimals to approximate Pi to (min: 0, max: 10): ";
    unsigned int decimals;
    cin >> decimals;
    while (decimals > 10) {
        cout << "Invalid input. Try again:" << endl;
        cin >> decimals;
    }
    double c = 426880*sqrt(10005);
    double l = 13591409;
    double x = 1;
    double m = 1;
    double s = m*l/x;
    for (int q=1; q<=decimals; q++) {
        l = l+545140134;
        x = x*(-262537412640768000);
        m = m*(12*q+2)*(12*q+6)*(12*q+10)/pow(q+1,3);
        s = s+(m*l/x);
    }
    double pi = c/s;
    cout << setprecision(decimals) << fixed;
    cout << "Pi approximated to " << decimals << " decimals: " << pi << endl;
    return 0;
}
