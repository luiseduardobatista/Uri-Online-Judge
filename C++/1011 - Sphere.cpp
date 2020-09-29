#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 double radius;
 cout << fixed << setprecision(3);
 cin >> radius;
 cout << "VOLUME = " << (4/3.0) * 3.14159 * radius*radius*radius << endl;

    return 0;
}
