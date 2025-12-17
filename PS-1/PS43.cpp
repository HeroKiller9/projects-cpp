#include <iostream>
using namespace std;

int main() {

  int TotalSeconds;

  cout << "enter TotalSeconds?" << endl;
  cin >> TotalSeconds;

  int Days = 24 * 60 * 60;
  int hours = 60 * 60;
  int minutes = 60;
  int seconds;

  int Number_of_Days = (TotalSeconds / Days);
  int reminder = TotalSeconds % Days;
  int Number_of_hours = (reminder / hours);
  int reminder2 = reminder % hours;
  int Number_of_minutes = (reminder2 / minutes);
  int reminder3 = reminder % minutes;
  int Number_of_seconds = reminder3;

  cout << Number_of_Days << ":" << Number_of_hours << ":" << Number_of_minutes << ":" << Number_of_seconds << endl;

 /* seconds to Days hours minutes seconds #43       */



 return 0;
}
