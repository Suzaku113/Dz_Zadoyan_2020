#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <stdio.h>
using namespace std;

//Задание 1е
/*
int main()
{
    setlocale(LC_ALL, "rus");
    int mas[10]{};
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        mas[i] = 5 + rand() % 15;
    }
    cout << endl << "Массив c числами oт 5 до 15: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << "  ";
    }
    cout << endl;

    return 0;
}*/

//Задание 2е
/*
int main() {
    setlocale(LC_ALL, "rus");
    int mas_2[10]{};
    srand(time(NULL));
    int sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        mas_2[i] = rand() % 30 + 1;
        cout << mas_2[i] << " ";
        if (mas_2[i] > 20) {
            sum += mas_2[i];
            count++;
        }
    }
    cout << endl << "Количество = " << count << " элементов," << " сумма = " << sum;
    return 0;
}*/

//Задание 2i
/*
int main() {
    setlocale(LC_ALL, "rus");
    int mas_3[10]{};
    srand(time(NULL));
    int sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        mas_3[i] = rand() % 30 + 1;
        cout << mas_3[i] << " ";
        if (mas_3[i] < 4) {
            sum += mas_3[i];
            count++;
        }
    }
    cout << endl << "Количество = " << count << " элементов," << " сумма = " << sum;
    return 0;
}*/

//Задание 7 средне  арифметическое всех
/*
int main() {
    setlocale(LC_ALL, "rus");
    int mas_4[10]{};
    srand(time(NULL));
    int sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        mas_4[i] = rand() % 41 - 20;
        cout << mas_4[i] << " ";
       
            sum += mas_4[i];
            count++;
        
    }
    cout << endl << "Количество = " << count << " элементов," << " Средне  арифметическое всех = " << sum /count ;
    return 0;
}*/

//Задание 7 средне  арифметическое положительных
/*
int main() {
    setlocale(LC_ALL, "rus");
    int mas_5[10]{};
    srand(time(NULL));
    int sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        mas_5[i] = rand() % 41 - 20;
        cout << mas_5[i] << " ";

        if (mas_5[i] > 0)
        {
            count++;
            sum += mas_5[i];
        }
    }
    cout << endl << "Количество = " << count << " элементов," << " Средне  арифметическое положительных = " << sum / count;
    return 0;
}*/

//Задание 7 средне  арифметическое отрицательных
/*
int main() {
    setlocale(LC_ALL, "rus");
    int mas_6[10]{};
    srand(time(NULL));
    int sum = 0, count = 0;
    for (int i = 0; i < 10; i++)
    {
        mas_6[i] = rand() % 41 - 20;
        cout << mas_6[i] << " ";

        if (mas_6[i] < 0)
        {
            count++;
            sum += mas_6[i];
        }
    }
    cout << endl << "Количество = " << count << " элементов," << " Средне  арифметическое отрицательных = " << sum / count;
    return 0;
}*/