#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>

using namespace std;

void loading()
{
	char a = 199, b = 219;
	cout << "\n\t\t\t\t\t\t\t\tLoading...\n";
	cout << "\t\t\t\t\t\t\t\t";
	for (int i = 0;i < 26;i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t\t\t\t\t";
	for (int i = 0; i < 26;i++)
	{
		cout << b;
		Sleep(50);
	}
}

int main()
{
	Sleep(1500);
	loading();
	cout << endl;
	fstream newfile;
	newfile.open("img.txt", ios::in);
	if (newfile.is_open())
	{
		string tp;
		while (getline(newfile, tp))
		{
			cout << "\t\t\t\t\t\t\t\t";
			cout << tp << endl;
			Sleep(20);
		}
		newfile.close();
	}
	system("Pause");
	return 0;
}