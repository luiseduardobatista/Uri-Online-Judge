#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    string name;
    double salary;
    double sales;
    
        cin >> name;
        cout << fixed << setprecision(2);
        cin >> salary >> sales;
        cout << "TOTAL = R$ " << salary + sales * 0.15 << endl;
    return 0;
}
