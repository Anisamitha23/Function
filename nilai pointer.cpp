#include <iostream>
using namespace std; 

int main(){
	int npm9= 2;
	int *pNpm9 = &npm9;
	int npm10 = 2;
	int *pNpm10 = &npm10;
	
	cout <<"Nilai pointer: "<< *pNpm9 << endl << "Alamat variabel npm:"<< &npm9 << endl;
	cout <<"Nilai pointer: "<< *pNpm10 << endl << "Alamat variabel npm:"<<&npm10;
	
	return 0;
}
