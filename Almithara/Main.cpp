#include <iostream>
#include <locale.h>

using namespace std;


int main() {

	setlocale(LC_ALL, "Turkish"); 

	//tamsay�    int                         7
	//float      ondal�kl� say�              7.5
	//double     ondal�kl� say�              7.55656354
	//char       karakter                    "A"
	//bool       mant�ksal ifade             true / false

	int a = 7;
	float b = 7.5;
	double c = 7.55656354;
	char d = 'A';
	bool e = 5 > 10;

	cout << "a de�i�keninin de�eri : " << a << endl;
	cout << "b de�i�keninin de�eri : " << b << endl;
	cout << "c de�i�keninin de�eri : " << c << endl;
	cout << "d de�i�keninin de�eri : " << d << endl;
	cout << "e de�i�keninin de�eri : " << e << endl;

	int h;

	h = 5;

	cout << h << endl;

	int n1 = 5;
	int n2 = 10;
	int n3 = n1 + n2;

	cout << n3 << endl;
		

	cout << "Almithara CPP\n";
	cout << "My Name Is Miran";


	system("PAUSE");
	return 0; 
}