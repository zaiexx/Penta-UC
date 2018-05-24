#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    double n1, n2;
    double prom;

    cin >> n1 >> n2;

    prom = (n1*3.5 + n2*7.5) / 11;

    cout << "MEDIA = " << setprecision(5) << fixed << prom << endl;

return 0;
}
