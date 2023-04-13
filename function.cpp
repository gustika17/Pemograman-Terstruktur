#include <iostream>
#include <cstring>
using namespace std;

int main(){
//	char nama[15];
//	char npm[11];
//	
//	cin.get(nama,15);
//	cin.ignore();
//	cin.get(npm,11);
//	
//	cout << "Nama : " << nama << endl;
//	cout << "NPM : " << npm << endl;

//	char karakter;
//	while (cin.get(karakter)) {
//		if (karakter == 'a')
//			cin.putback('x');
//		else if (karakter == '\n')
//			break;
//		else
//			cout << karakter;
//	}

//	char str[] = {'I', 'L', 'K', 'O', 'M', 'P', '\0'};
//	
//	cout << str << endl;
//	cout << strlen(str) << endl;

//	char firstName[50] = "Gustika Dwi ";
//	char lastName[50] = "Mardini";
//	char *fullName = strcat(firstName,lastName);
//	cout << fullName;
	
//	char* endptr;
//	char str1[] = "00011010John";
//	long value1 = strtol(str1, &endptr, 2);
//	cout << "The converted Value is " << value1 << endl;
//	cout << "Unconverted part: " << endptr << endl;
//	
//	char str2[] = "1Czidan";
//	long value2 = strtol(str2, &endptr, 16);
//	cout << "The converted Value is " << value2 << endl;
//	cout << "Unconverted part: " << endptr << endl;
//	
//	char str3[] = "40Raziq";
//	long value3 = strtoul(str3, &endptr, 10);
//	cout << "The converted Value is " << value3 << endl;
//	cout << "Unconverted part: " << endptr << endl;

	char data[3][100] = {"2257051004Gustika Dwi Mardini",
						 "2257051029Devrinatasyah,"
						 "2217051041Safira Aulia"}
	char* endptr;
	for (int i =0; i < 3; i++){
		long value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "NPM : " << value << endl;
	}
}
