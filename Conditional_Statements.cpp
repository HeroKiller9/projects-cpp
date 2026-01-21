#include <iostream>
#include <string>
using namespace std;


int main() {

  int Age;
  bool driver_license;
  cout << "enter your Age?" << endl;
  cin >> Age;
  cout << "you have driver license? 1/0" << endl;
  cin >> driver_license;
  if (Age >= 21 && driver_license) {

    cout << "Hired" << endl;
  }
  else {

   cout << "Rejected" << endl;

  }

  cout << "meow" << endl;











  return 0;
}
