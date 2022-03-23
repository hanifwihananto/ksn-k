#include <iostream>
using namespace std;

int panas(int x){
  int dingin = 0;
  while(x >= 0){
    dingin += 1;
    if(x % 3 == 0){
		x -= 5;
	} else if(x % 5 == 0){
		x -= 3;
	} else {
		x -= 1;
	}
  }
  return dingin;
}

int main(){
	cout << panas(789);
	return 0;
}
