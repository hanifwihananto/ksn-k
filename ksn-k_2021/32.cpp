#include <iostream>
using namespace std;

int N = 10;
int arr[] = {0,5,7,6,4,10,9,1,3,8,2};

void bantal(){
	for(int i = 1; i <= N; i++){
		for(int j = i; j > 1; j /= 2){
			if(arr[j] > arr[j/2]){
				swap(arr[j], arr[j/2]);
			}
		}
	}
}
int main(){
	bantal();
	cout << arr[1];
	return 0;
}
