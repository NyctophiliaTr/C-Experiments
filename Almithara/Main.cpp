#include <iostream>
#include <locale.h>

using namespace std;


int main() {

	setlocale(LC_ALL, "Turkish"); 

	//tamsayý    int                         7
	//float      ondalýklý sayý              7.5
	//double     ondalýklý sayý              7.55656354
	//char       karakter                    "A"
	//bool       mantýksal ifade             true / false

	int a = 7;
	float b = 7.5;
	double c = 7.55656354;
	char d = 'A';
	bool e = 5 > 10;

	cout << "a deðiþkeninin deðeri : " << a << endl;
	cout << "b deðiþkeninin deðeri : " << b << endl;
	cout << "c deðiþkeninin deðeri : " << c << endl;
	cout << "d deðiþkeninin deðeri : " << d << endl;
	cout << "e deðiþkeninin deðeri : " << e << endl;

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