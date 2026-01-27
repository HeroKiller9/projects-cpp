#include <iostream>
#include <string>
using namespace std;

struct strInfo {

  string FirstName;
  string LastName;
  int Age;
  string Phone;

};

void ReadInfo(strInfo& Info) {

  cout << "Please enter your FirstName" << endl;
  cin >> Info.FirstName;

  cout << "Please enter your LastName" << endl;
  cin >> Info.LastName;

  cout << "Please enter your Age" << endl;
  cin >> Info.Age;

  cout << "Please your Phone" << endl;
  cin >> Info.Phone;

  cout << "\n\n";
}

void PrintInfo(strInfo Info) {

  cout << "\n**********************\n";

  cout << "FirstName: " << Info.FirstName << endl;
  cout << "LastName: "  << Info.LastName << endl;
  cout << "Age: " << Info.Age << endl;
  cout << "Phone: " << Info.Phone << endl;

  cout << "*****************\n\n";
}

void ReadPersons(strInfo Persons[100],int &NumberOFPersons) {

  cout << "How many Persons?\n";
  cin >> NumberOFPersons;
  for (int i = 0; i <= NumberOFPersons - 1; i++) {

    cout << "Please enter Person's " << i + 1 << "Info: \n";
    ReadInfo(Persons[i]);
  }
}

void printPersonsInfo(strInfo Persons[100], int NumberOFPersons) {

  for (int i = 0; i <= NumberOFPersons - 1; i++) {

    cout << "Persons " << i + 1 << "Info: \n";
    PrintInfo(Persons[i]);
  }
}

int main() {

  strInfo Persons[100];
  int NumberOFPersons = 1;

  ReadPersons(Persons, NumberOFPersons);
  printPersonsInfo(Persons, NumberOFPersons);







  return 0;
}
