#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    double r;
    double pi = 3.14159;

    cin >> r;

    double area = pi * r * r;

    cout << "A=" << setprecision(4) << fixed << area << endl;

return 0;
}
