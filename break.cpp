#include <iostream>
#include <string>
using namespace std;

int arr[10] {10, 20, 44, 55, 33, 22, 99, 99, 100};
int SearchFor = 20;

int main() {

  for (int i = 0; i <= 10; i++) {

    cout << "we are at iteration " << i + 1 << endl;

    if (SearchFor == arr[i]) {
    
      cout << endl << SearchFor << "fournd at position " << i << endl;
      break;
    }
    
    
  }
  return 0;
}
