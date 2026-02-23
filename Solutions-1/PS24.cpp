#include <iostream>
#include <string>

using namespace std;

int ReadAge() {

  int Age;
  cout << "Please enter your Age?" << endl;
  cin >> Age;

  return Age;
}

bool ValidateNumberInRange(int Number, int From, int TO) {

  return (Number >= From && Number <= TO);
}

void PrintResult(int Age) {

  if (ValidateNumberInRange(Age, 18, 45))
    cout << Age << " is a valid age" << endl;
  else 
    cout << Age << " is a not invalid age" << endl;
  

}

int main(){

  PrintResult(ReadAge());
}
