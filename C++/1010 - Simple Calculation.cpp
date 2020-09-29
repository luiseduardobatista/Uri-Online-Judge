#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
int code,quantity,code2,quantity2;
double value,value2;

    cout << fixed << setprecision(2);
    cin >> code >> quantity >> value;
    cin >> code2 >> quantity2 >> value2;
    cout << "VALOR A PAGAR: R$ " << quantity * value + quantity2 * value2 << endl;
    
    return 0;
}
