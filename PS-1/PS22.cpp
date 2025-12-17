#include <iostream>
using namespace std;

int main() {

 int a;
 int b;

 cout << "enter a?" << endl;
 cin >> a;

 cout << "enter b?" << endl;
 cin >> b;

 float PI = 3.14;
 double Area = (PI * b * b / 4) * ((2.0 * a - b) / (2.0 * a + b));

 cout << Area << endl;


 return 0;


 /*  Circle Area inscribed in an isosceles Triangle #22  */

}
