#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	char c;
	cout << "������� ������: ";
	cin >> c;
	while (c != '-' && c != '+' && c != '=' && c != '*')
	{
		cout << "������ �����! ��������� ����: ";
		cin >> c;
	}

	string str;
	cout << "������� ������: ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (c == str[i])
		{
			cout << "������ �������� " << i + 1 << " ����� � ������";
			return 0;
		}
	}


	cout << "����� ������ � ������ �� ������!";

	return 0;
}