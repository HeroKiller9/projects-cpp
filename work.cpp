#include <iostream>
using namespace std;

int main()
{

  string name;
  int Age;
  string City;
  string Country;
  int Monthly_Salary;
  int Yearly_Salary;
  char Gender;
  bool Married;

  cout << "Please enter a Name?" << endl;
  cin >> name;
  
  cout << "Please enter a Age?" << endl;
  cin >> Age;

  cout << "please enter a City?" << endl;
  cin >> City;

  cout << "Please enter a Country?" << endl;
  cin >> Country;

  cout << "please enter Monthly Salary?" << endl;
  cin >> Monthly_Salary;
  
  cout << "please enter Gender M/F?" << endl;
  cin >> Gender;

  cout << "please enter Married 0/1?" << endl;
  cin >> Married;

  cout << "*******************\n";
  cout << "Name: " << name << endl;
  cout << "Age: " << Age << endl;
  cout << "Country: " << Country << endl;
  cout << "Monthly Salary: " << Monthly_Salary << endl;
  cout << "Yearly Salary: " << Monthly_Salary * 12 << endl;
  cout << "Gender: " << Gender << endl;
  cout << "Married: " << Married << endl;
  cout << "******************\n";

 
  int AGE;

  cout << "please enter your age?" << endl;
  cin >> AGE;

  int YourAgeAfter5Years = AGE + 5;
  cout << "After 5 years you will be " << YourAgeAfter5Years << " years old. " << endl;




  












  return 0;
}
