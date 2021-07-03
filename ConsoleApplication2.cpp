// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    {
        setlocale(LC_ALL, "Russian");
        float a, b, c, x, v;
        cout << "Введите значение a: ";
        cin >> a;
        cout << "Введите значение b: ";
        cin >> b;
        cout << "Введите значение c: ";
        cin >> c;
        if ((b * b - 4 * a * c) >= 0)//дискриминант 
        {
            x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);//1 корень
            cout << "x1 = " << x << endl;
            v = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);//2 корень
            cout << "x2 = " << v << endl;
        }
        else
        {
            cout << "Дискриминант меньше 0, корней нет" << endl;
        }
        cout << endl;

    }
///////////////////////////////////////////////////////////////////////////////////
    {
        int a, b, c;
        cout << "Введите начало диапозона: ";
        cin >> a;
        cout << "Введите конец диапозона: ";
        cin >> b;
        c = a + rand() % (b - a + 1);// //Случайное число в диапазоне от a до b
        cout << endl;
        cout << "Случайное значение в заданном диапозоне: " << c;
        cout << endl;
        cout << endl;
    }

///////////////////////////////////////////////////////////////////////////////////
    {

        {

            int* a;
            int size;
            const int n = 10;

            cout << "Элементы массива " << endl;

            a = new int[n];
            for (int i = 0; i < n; i++) //заполнение массива
            {
                a[i] = rand() % 10 + 1;

                cout << a[i] << " ";
            }

            for (int i = 0; i < n; i++)// сортировка массива
            {
                for (int j = 0; j < n - 1; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        int b = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = b;
                    }
                }
            }

            cout << endl << "Массив в отсортированном виде: " << endl;
            for (int i = 0; i < n; i++)//вывод
            {
                cout << a[i] << " ";
            }
            cout << endl;
            return 0;
        }
    }
}