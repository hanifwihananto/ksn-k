#include <iostream>
using namespace std;

int main () {
  int a = 12;
  int b = 7;
  int c = 0;

  while (b > 0){
    c += a;
    b -= 1;
  }
  
  cout << c;
  return 0;
}
