#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>

using namespace std;

//Задание 8

void MaxMotor()
{
    const int n = 3;
    const int m = 20;
    int mat_1[n][m];

    srand(time(NULL));
    for (int i = 0; i < n; i++)//заполняем матрицу
        for (int j = 0; j < m; j++)
        {
            mat_1[0][j] = rand() % 99;
            mat_1[1][j] = rand() % 4;
        }

    for (int i = 0; i < n; i++)    //выводими матрицу
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat_1[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    int max = 95;
    for (int j = 0; j < m; j++)
    {
        if (mat_1[1][j] == 3)  //отбор по 3 категории мотора
        {
            for (int j = 0; j < m; j++) //поиск max значения и вывод на экран
            {
                if (mat_1[0][j] > max)
                {
                    max = mat_1[0][j];
                    cout << max << " ";
                }
            }
        }

    }
    cout << endl;
    cout << ' ' << endl;
    cout << endl;
}

int main()
{
    MaxMotor();
}

//Задание 5
/*
void   Min()
{
    const int n = 6;
    const int m = 6;
    int mat_2[n][m];

    srand(time(NULL));
    for (int i = 0; i < n; i++)//заполняем матрицу
        for (int j = 0; j < m; j++)
            mat_2[i][j] = rand() % 10;

    for (int i = 0; i < n; i++)    //выводими матрицу
    {
        for (int j = 0; j < m; j++)
            cout << mat_2[i][j] << " ";
        cout << endl;
    }

    cout << ' ' << endl;
    for (int i = 0; i < n; i++)
    {
        int min = mat_2[i][0];
        int z = 0;
        for (int j = 0; j < m; j++)
        {
            if (mat_2[i][j] < min)
            {
                min = mat_2[i][j];
                z = j;
            }
        }

        int d = mat_2[i][i];
        mat_2[i][i] = min;
        mat_2[i][z] = d;
    }

    for (int i = 0; i < n; i++)    //выводими матрицу
    {
        for (int j = 0; j < m; j++)
            cout << mat_2[i][j] << " ";
        cout << endl;
    }

    cout << endl;
}

int main()
{
    Min();
}*/

//Задание 2 
/*
#define M 10
#define N 10

int main()
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
    int a[M][N];
    int n;
    int m;
    for (m = 0; m < M; m++) //строки. 
    {
        for (n = 0; n < N; n++) //столбцы
        {
            a[m] [n] = rand() % 10;
        }
    }
    std::cout << "Исходная матрица: " << endl;
    for (m = 0; m < M; m++) //строки. 
    {
        for (n = 0; n < N; n++) //столбцы
        {
            std::cout << a[m][n] << "";
        }
        std::cout << std::endl;
    }
    std::cout << "Результат: " << endl;
    
    for (m = 0; m < M; m++) //строки. 
    {
        for (n = 0; n < N; n++) //столбцы
        {
            int Z;
            Z = a[m][1];
            for (int i = 0; i < N; i++) {
                a[m][n] = Z * a[m][n]; //каждый элемент строки m умножаем на элемент a[m][1]
            }
            std::cout << a[m][n] << "";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}*/
