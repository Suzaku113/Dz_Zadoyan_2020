#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//Задание 1
/*
void main()
{
	fstream f;
	f.open("Z1.txt", ios::out | ios::trunc);
	string s1 = "Suma sosumhol suma um";
	f << s1 << endl;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 'u' && s1[i + 1] == 'm' && s1[i - 1] != ' ')
		{
			s1.erase(i, 2);
		}
	}
	cout << s1;
	f << s1;
}*/

//Составить алгоритм, находящий, сколько раз в тексте сочетание “ум” встречается не в начале слова.

//Задание 5
/*
int cycle(string s1)
{
	int result = 0;

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 'r' && s1[i + 1] == 'a' && s1[i + 2] == 'z')
		{
			result = 1;
		}

	}
	return result;
}

void main()
{


	cout << "Enter the word (raz)" << endl;
	string s1;
	cin >> s1;

	if (cycle(s1) == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}*/

//Задание 9
/*
void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите номер дня недели" << endl;
	int cday = 0;
	cin >> cday;

	switch (cday)
	{
	case 1:
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник";
		break;
	case 3:
		cout << "Среда";
		break;
	case 4:
		cout << "Четверрг";
		break;
	case 5:
		cout << "Пятница";
		break;
	case 6:
		cout << "Субота";
		break;
	case 7:
		cout << "Воскресенье";
		break;
	default:
		cout << "Unknown";
		break;
	}
}*/

//Задание 12
/*
void main()
{
	string s1 = "This flaver is blue? It's true ";
	cout << s1 << endl;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 't' && s1[i + 1] == 'r' && s1[i + 2] == 'u' && s1[i + 3] == 'e')
		{
			s1[i] = 'f';
			s1[i + 1] = 'o';
			s1[i + 2] = 'l';
			s1[i + 3] = 's';
			s1[i + 4] = 'e';
		}
	}
	cout << s1;
}*/