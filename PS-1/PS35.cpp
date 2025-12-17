#include <iostream>
using namespace std;

int main() {

 int Penny;
 int Nickel;
 int Dime;
 int Quarter;
 int Dollar;

 cout << "enter Penny?" << endl;
   cin >> Penny;
 cout << "enter Nickel?" << endl;
   cin >> Nickel;
 cout << "enter Dime?" << endl;
 cin >> Dime;
 cout << "enter Quarter" << endl;
 cin >> Quarter;
 cout << "enter Dollar" << endl;
 cin >> Dollar;

 int total_pennies = Penny * 1 + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
 int total_Dollars = total_pennies / 100;



 cout << total_pennies << " Pennies" << endl;
 cout << total_Dollars << " Dollars" << endl;




 /* Piggy Bank Calculator #35 */




  return 0;
}
