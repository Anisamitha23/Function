#include <iostream>
using namespace std;

#define terkecil(a,b) ((a<b) ? a : b)

int main(){
	int npm9 = 2;
	int npm10 = 2;
	int nilai;
	nilai = terkecil(npm9,npm10);
	
	cout <<"bilangan terkecilnya adalah: "<< nilai;
}
