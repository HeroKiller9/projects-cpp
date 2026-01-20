#include <iostream>
#include <string>
using namespace std;

struct strinfo {

  string FirstName;
  string LastName;
  int Age;
  string Phone;
};

void ReadData(strinfo &info) {

  cout << "enter your FirstName?" << endl;
  cin >> info.FirstName;
  cout << "enter your LastName?" << endl;
  cin >> info.LastName;
  cout << "enter your Age?" << endl;
  cin >> info.Age;
  cout << "enter your Phone?" << endl;
  cin >> info.Phone;
};

void printdata(strinfo info) {

  cout << "****************************" << endl;
  cout << "FirstName: " << info.FirstName << endl;
  cout << "LastName: " << info.LastName << endl;
  cout << "Age: " << info.Age << endl;
  cout << "Phone:" << info.Phone << endl;
  cout << "***************************" << endl;
};

void ReadPersoninfo(strinfo Persons[2]) {

  ReadData(Persons[0]);
  ReadData(Persons[1]);
};

void PrintPersoninfo(strinfo Persons[2]) {

  cout << "\n*****************************\n";

  printdata(Persons[0]);
  printdata(Persons[1]);
}
 

int main() {

 strinfo Persons[2];

 ReadPersoninfo(Persons);
 PrintPersoninfo(Persons);





 return 0;
}
