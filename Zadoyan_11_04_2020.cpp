#include <iostream>
#include <conio.h>
#include <ctime> 
#include <math.h>
using namespace std;

//Задание 6
/*        //наименьший элемент массива
int main() {
    setlocale(LC_ALL, "rus");
    int size;

    cout << "Размер:";
    cin >> size;
    srand(time(NULL));

    if (size > 0) {
        float* array = new float[size];
        int min = 0;

        for (int i = 0; i < size; i++) {
            array[i] = rand() % 41 - 20;
            if (array[min] > array[i]) min = i;
        }
        cout << "Наименьший элемент[" << min << "]=" << array[min] << endl;
        delete[] array;
    }
    else {
        cout << "Wrong size!" << endl;
    }
    return 0;
}*/

/*      //наибольший элемент массива
int main() {
    setlocale(LC_ALL, "rus");
    int size;

    cout << "Размер:";
    cin >> size;
    srand(time(NULL));

    if (size > 0) {
        float* array = new float[size];
        int max = 0;

        for (int i = 0; i < size; i++) {
            array[i] = rand() % 41 - 20;
            if (array[max] < array[i]) max = i;
        }
        cout << "Наибольший элемент[" << max << "]=" << array[max] << endl;
        delete[] array;
    }
    else {
        cout << "Wrong size!" << endl;
    }
    return 0;
}*/

//Задание 12
/*
int main()
{
    setlocale(LC_ALL, "Russian");
    float a();
    float b();
    int count = 0;
    int i, size;
    srand((unsigned)time(NULL));
    int* arr;
    cout << "Введите розмер массива: ";
    cin >> size;
    arr = new int[size];
    cout << "Массив: ";
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 9 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "Чётный: ";
           float a= arr[i] * 2;
           cout << a << " ";
           cout << endl;

        }
        else {
           cout << "Нечётный: ";
           float b= arr[i] + 3;
           cout << b << " ";
           cout << endl;
        }
    }
    delete[] arr;
    system("pause");
    return 0;
}*/

//Задание 8
/*
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int i, size;
    srand((unsigned)time(NULL));
    int* arr;
    cout << "Введите розмер массива: ";
    cin >> size;
    arr = new int[size];
    cout << "Массив: ";
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            a++;
        }
        else {
            b++;
        }
    }
    cout << endl << "Количество положительных элементов = " << a;
    cout << endl << "Количество отрицательных элементов = " << b;
    cout << endl;
    delete[] arr;
    system("pause");
    return 0;
}*/

//Задание 14 а
/*
int main() {
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int i, size;
    srand((unsigned)time(NULL));
    int* arr;
    cout << "Введите розмер массива: ";
    cin >> size;
    arr = new int[size];
    cout << "Массив: ";
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}*/