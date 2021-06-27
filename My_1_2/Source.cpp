#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	char c;
	cout << "Введите символ: ";
	cin >> c;
	while (c != '-' && c != '+' && c != '=' && c != '*')
	{
		cout << "Ошибка ввода! Повторите ввод: ";
		cin >> c;
	}

	string str;
	cout << "Введите строку: ";
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (c == str[i])
		{
			cout << "Символ занимает " << i + 1 << " номер в строке";
			return 0;
		}
	}


	cout << "Такой символ в строке не найден!";

	return 0;
}
