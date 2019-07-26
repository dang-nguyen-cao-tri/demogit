#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int n;
	fstream filein;
	filein.open("TRI.txt", ios::in);
	filein >> n;
	cout << n << "\n"; //2
	fflush(stdin);
	char e;
	filein >> e;
	cout << e <<"\n"; //P

	int a;
	filein >> a;
	cout << a <<"\n"; // 12
	filein.seekg(1, ios::cur);

	string b;
	getline(filein, b, ',');
	filein.seekg(0, ios::cur);
	cout << b <<"\n"; // Dang Nguyen
	//filein.seekg(0, ios::cur);
	
	
	char c;
	filein >> c;
	cout << c <<"\n"; // D
	filein.seekg(-1, ios::cur); // ?? -2 thi ket qua d moi la : D123 ???
								//-2 la dich qua trai 2byte
	string d;
	getline(filein, d );
	cout << d <<"\n"; 			// D123
	//filein.ignore();
	//fflush(stdin);
	char f;
	filein >> f;
	cout << f << "\n"; // F
	filein.seekg(-1, ios::cur);
	string h;
	getline(filein, h, ',');
	cout << h <<"\n"; // F20

	filein.seekg(1, ios::cur);
	string l;
	getline(filein, l, ',');
	cout << l <<"\n" ; // Dang CaoTri

	char g;
	filein >> g;
	cout << g << "\n"; // D
	filein.seekg(-1, ios::cur);  	// o day thi -1 thi t da dc D123 roi??
	string t;
	getline(filein, t, ',');
	cout << t <<"\n"; 				// D123
	
	int m,v,s;
	filein >> m;
	cout <<m <<"\n"; // 12
	filein.seekg(1, ios::cur);
	filein >> v;
	cout << v <<"\n"; // 6
	filein.seekg(1, ios::cur);
	filein >> s;
	cout << s <<"\n"; // 1889

////	 fflush(stdin);
//	char i;
//	filein >> i;
//	cout << i <<"\n"; //P
//
//	int q;
//	filein >> q;
//	cout << q <<"\n"; // 12
//	filein.seekg(1, ios::cur);
//
//	string z;
//	getline(filein, z, ',');
//	cout << z <<"\n"; // Dang Nguyen
//	//filein.seekg(0, ios::cur);
//
//	char x;
//	filein >> x;
//	cout << x <<"\n"; // D
//	filein.seekg(-1, ios::cur); // ?? -2 thi ket qua d moi la : D123 ???
//								//-2 la dich qua trai 2byte
//	string y;
//	getline(filein, y);
//	cout << y <<"\n"; 			// D123
	
	filein.close();
	system("pause");
	return 0;
}
