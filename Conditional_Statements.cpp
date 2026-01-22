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

  /*   Switch .. Case       */

  int day = 1;

  cout << "enter your Num day?" << endl;
    cin >> day;

  switch (day) {

  
    case 1:
      cout << "Sun" << endl;
      break;
    case 2:
      cout << "Monday" << endl;
      break;
    case 3:
      cout << "Tuesday" << endl;
      break;
    case 4:
      cout << "Wednesday" << endl;
      break;
    case 5:
    cout << "Thursday" << endl;
    break;
    case 6:
    break;
    cout << "Friday" << endl;
    break;
    case 7:
    cout << "Saturday" << endl;
    break;
   default:
    cout << "Not a week day!" << endl;
  }








  return 0;
}
