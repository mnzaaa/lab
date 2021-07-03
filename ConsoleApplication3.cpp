// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>


using namespace std;

int main()

    {
        setlocale(LC_ALL, "Russian");
        int* a, * a1;
        int n, c = 0, j = 0;
        cout << "Введите размер массива: ";
        cin >> n;
        a = new int[n];
        cout << "Сгенерированный массив: ";
        for (int i = 0; i < n; i++)// ввод массива
        {
            a[i] = rand() % 9 - 2;
            cout << a[i] << " ";
            if (a[i] >= 0)
            {
                c++;//Подсчет размера массива-копии

            }
        }
        a1 = new int[c];
        for (int i = 0; i < n; i++)// //Заполнение массива-копии положительными числами
        {
            if (a[i] >= 0)
            {
                a1[j] = a[i];
                j++;
            }
        }
        cout << endl << "Положительные элементы массива" << endl;
        for (int i = 0; i < j; i++)
        {
            cout << a1[i] << " ";
        }
        cout << endl;

        delete[] a;
        delete[] a1;

        cout << endl;
        cout << endl;

    }

