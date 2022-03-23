#include <iostream>
using namespace std;

int kelinci;
int kurakura;
int lapsatu(){
	kelinci = 0;
	kurakura = 0;
	int langkah = 0;
	do{
		return kelinci = (kelinci * 2 + 1) % 40;
		return kelinci = (kelinci * 2 + 1) % 40;
		return kurakura = (kurakura * 2 + 1) % 40;
		langkah++;	
	}
	while(kelinci != kurakura);
	return langkah;
}

int lapdua(){
	lapsatu();
	kelinci = 0;
	int langkah = 0;
	
	do{
		return kelinci = (kelinci * 2 + 1) % 40;
		return kurakura = (kurakura * 2 + 1) % 40;
		langkah++;
	}
	
	while(kelinci != kurakura);
	return langkah;	
}

int laptiga(){
	lapdua();
	int langkah = 0;
	
	do{
		kelinci = (kelinci * 2 + 1) % 40;
		langkah++;	
	}
	while(kelinci != kurakura);
 	return langkah;
}

int main(){
  cout << lapdua() << endl;
}


// ========== soal lap 3 ==========
/*
 int lapsatu(){
 	kelinci = (kelinci * 2 + 1) % 40;
 	kelinci = (kelinci * 2 + 1) % 40;
 	kurakura = (kurakura * 2 + 1) % 40;
	
 	while(kelinci != kurakura){
 		langkah++;
 	}
 	return langkah;
 }

 int lapdua(){
 	lapsatu();
 	kelinci = 0;
 	int langkah = 0;
	
 	kelinci = (kelinci * 2 + 1) % 40;
 	kurakura = (kurakura * 2 + 1) % 40;
	
 	while(kelinci != kurakura){
 		langkah++;
 	}
 	return langkah;
 }

 int laptiga(){
 	lapdua();
 	kelinci = 0;
 	int langkah = 0;	
 	kelinci = (kelinci * 2 + 1) % 40;
	
 	while(kelinci != kurakura){
 		langkah++;
 	}
 	return langkah;
 }
*/
