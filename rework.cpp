#include <iostream>

#include <string>
using namespace std;

struct person {

  string Name;
  int Age;
  string City;
  string country;
  int monthly_salary;
  int Yearly_salary;
  char Gender;
  bool Married;
};

// procedures
void reaidifo(person &info) {

 cout << "enter your Name?" << endl;
 cin >> info.Name;

 cout << "enter your Age?" << endl;
 cin >> info.Age;

 cout << "enter your country?" << endl;
 cin >> info.country;

 cout << "enter your monthly?" << endl;
 cin >> info.monthly_salary;

 cout << "enter your Gender M/F" << endl;
 cin >> info.Gender;

 cout << "enter your Married 1/0" << endl;
 cin >> info.Married;
}

// procedures
void printinfo(person info) {

cout << "\n**************************\n";
cout << "Name: " << info.Name << endl;
cout << "Age: " << info.Age << endl;
cout << "country: << " << info.country << endl;
cout << "monthly_salary: " << info.monthly_salary << endl;
cout << "Yearly_salary: " << info.monthly_salary * 12 << endl;
cout << "Gender: " << info.Gender << endl;
cout << "Married: " << info.Married << endl;
cout << "\n*************************\n";

}


int main() {

person personinfo;
reaidifo(personinfo);
printinfo(personinfo);





  return 0;
}
