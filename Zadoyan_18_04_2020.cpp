#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <stdio.h>
#include <conio.h>
#include <clocale>

using namespace std;

//Задание 1 (Сгенерировать массив со случайными числами в диапазоне от -25 до 15)
/*
int main()
{
    setlocale(LC_ALL, "rus");
    int mas[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 41 - 25;
    }
    cout << endl << "Массив c числами oт -25 до 15: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << "  ";
    }
    cout << endl;

    return 0;
}*/


void nadroch(int n);
void ChoicesSort(int*, int); // объявление функции сортировки
void bubbleSort(int*, int);
int main()
{
    setlocale(LC_ALL, "Russian");
    nadroch(100);
    nadroch(500);
    nadroch(1000);
    nadroch(5000);
    nadroch(10000);
}

int b=0;

void ChoicesSort(int* Perestanovka, int length) // сортировка Выбором
{
    for (int j = 0; j < length; j++)
    {
        int temp = Perestanovka[0]; // временная переменная, храненящая значения перестановки
        for (int z = j + 1; z < length; z++)
        {
            if (Perestanovka[j] > Perestanovka[z])
            {
                b++;
                temp = Perestanovka[j];
                b++;
                Perestanovka[j] = Perestanovka[z];
                b++;
                Perestanovka[z] = temp;
            }
        }
    }
    cout << "Количество действий перестановки сортировки выбором: " << endl;
    cout << b << " " << endl;
}

int b_2 = 0;
void bubbleSort(int* arr, int size)  // Сортировка пузырьком
{
    int tmp;

    for (int i = 0; i < size - 1; ++i) // i - номер прохода
    {
        for (int j = 0; j < size - 1; ++j) // внутренний цикл прохода
        {
            if (arr[j + 1] < arr[j])
            {
                b_2++;
                tmp = arr[j + 1];
                b_2++;
                arr[j + 1] = arr[j];
                b_2++;
                arr[j] = tmp;
            }
        }
    }
    cout << "Количество действий перестановки сортировка пузырьком: " << endl;
    cout << b_2 << " " << endl;
}
void nadroch(int n) {
    
    int* nadroch_1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        nadroch_1[i] = rand() % 41 - 25;
       
    }
    int* mas = new int[n];
    srand(time(NULL));
    cout<<"Размер массива:" << n << " " << endl;
    
    ChoicesSort(nadroch_1, n);
    for (int i = 0; i < n; i++)
    {
        nadroch_1[i] = rand() % 41 - 25;

    }
    bubbleSort(nadroch_1, n);

}