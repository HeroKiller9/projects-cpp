#include <iostream>
using namespace std;
 
enum enWeekDay {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, sat = 7};

void ShowWeekDayMenue() {

  cout << "*******************" << endl;
  cout << "    Week Days      " << endl;
  cout << "*******************" << endl;
  cout << "1: Sunday" << endl;
  cout << "2: Monday" << endl;
  cout << "3: Tuesday" << endl;
  cout << "4: Wensday" << endl;
  cout << "5: Thursday" << endl;
  cout << "6 Friday" << endl;
  cout << "7 Saturday" << endl;
  cout << "*********************" << endl;
  cout << "Please enter your number of day?" << endl;
}

enWeekDay ReadweekDay() {

  enWeekDay WeekDay;

  int wd;
  cin >> wd;
  return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay WeekDay) {

  switch (WeekDay) {
    case enWeekDay::Sun:
      return "Sunday";
    case enWeekDay::Mon:
      return "Monday";
    case enWeekDay::Tue:
      return "Tuesday";
    case enWeekDay::Wed:
      return "Wensday";
    case enWeekDay::Thu:
      return "Thursday";
    case enWeekDay::Fri:
     return "Friday";
    case enWeekDay::sat:
     return "Saturday";
    default:
     return "Not a week day!\n";
  };
}
int main() {

  ShowWeekDayMenue();

  cout << "today is "  << GetWeekDayName(ReadweekDay()) << endl;

  return 0;
}
