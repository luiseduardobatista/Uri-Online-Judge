#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
int num;
int hours;
float value;

 cout << fixed << setprecision(2);
 cin >> num >> hours >> value;
 cout << "NUMBER = " << num << endl;
 cout << "SALARY = U$ " << hours * value << endl;
 
 
    return 0;   
}
