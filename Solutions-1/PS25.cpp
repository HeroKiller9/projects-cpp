#include <iostream>

using namespace std;


int ReadAge() {

  int Age;

  cout << "enter your Age?" << endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number, int from, int To) {

return (Number >= from && Number <= To);
}

int ReadUntilAgeBetween(int from, int To) {

  int Age =0;

  do {

    Age = ReadAge();
  } while (!ValidateNumberInRange(Age, from, To));

  return Age;
}

void PrintResult(int Age) {

  cout << "Result: " << Age << endl;
}

int main() {

  PrintResult(ReadUntilAgeBetween(18, 45));

  return 0;
}
