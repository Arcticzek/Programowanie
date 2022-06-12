#include <iostream>
#include <time.h>
using namespace std;

//zadanie 4
int main()
{

	char s1[] = "wiosna";
	char s2[] = "'a','b','c','\0'";
	char s3[20];

	cout << "Podaj imie i nazwisko ";
	cin.getline(s3, 20).get();
	cout << s3;
	strcpu_s(s1, s2);
	strcat_s(s1, s2);
	
	size(s1);
	sizeof(s1) / sizeof(s1[0]); _
}