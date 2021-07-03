// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    {
        setlocale(LC_ALL, "Russian");
        const int m = 10;
        int a[m];
        cout << "Исходный массив: " << endl;
        for (int i = 0; i < m; i++)
        {
            a[i] = rand() % 10 + 1;// случайные числа от 1 до 10
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Преобразованный массив: " << endl;
        for (int j = 0; j < m; j++)//замена чисел
        {
            if (a[j] % 2 == 0)
                a[j] = 0;

            cout << a[j] << " ";
        }
        cout << endl;
        cout << endl;
    }
    ////////////////////////////////////////////////////////////////
    {
        string str; char s; int n = -1;
        cout << "Введите строку:" << endl;
        cin >> str;  //Ввод строки
        cout << endl << "Введенная строка:" << str << endl;
        cout << endl;
        cout << "Введите символ: ";
        cin >> s;  //Ввод символа
        cout << endl;
        for (int i = 0; i < str.length(); i++)  //Поиск символа в строке
        {
            if (str[i] == s)
            {
                n = i;
                break;
            }
        }
        if (n != -1)
            cout << "Символ " << s << " занимает " << n + 1 << " позицию" << endl;
        else
            cout << "В этой строке нет такого символа" << endl;
        cout << endl;
    }

    ////////////////////////////////////////////////////////////////////////////
    {
        int p[3][3];
        cout << "Размерность матрицы 3х3" << endl;
        cout << endl;

        for (int i = 0; i < 3; i++)// ввод двумерного массива
        {
            cout << "Введите 3 элемента для " << i << " строки" << endl;
            for (int j = 0; j < 3; j++)
            {
                cin >> p[i][j];
            }
        }
        cout << endl;
        cout << "Введенная матрица:" << endl;

        for (int i = 0; i < 3; i++) // вывод
        {
            for (int j = 0; j < 3; j++)
            {
                cout << p[i][j] << " ";
            }
            cout << endl;
        }

        int det;
        det = (p[0][0] * p[1][1] * p[2][2] + p[0][1] * p[1][2] * p[2][0]
            + p[1][0] * p[2][1] * p[0][2] - p[0][2] * p[1][1] * p[2][0]
            - p[0][1] * p[1][0] * p[2][2] - p[0][0] * p[1][2] * p[2][1]); // расчёт определителя
        cout << "Определитель матрицы: " << det;
        cout << endl;
    }
    return 0;
}
