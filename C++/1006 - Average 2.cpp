#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
 double A;
 double B;
 double C;
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    cout << "MEDIA = " << ((A*2)+(B*3)+(C*5))/(2+3+5) << endl;
 
    return 0;
}
