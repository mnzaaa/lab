// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

using namespace std;

int max()  //Ф-я, возвращающая наибольший из 3-х аргументов
{
    int a, b, c, max;

    cout << "Введите A: ";
    cin >> a;
    cout << endl;

    cout << "Введите B: ";
    cin >> b;
    cout << endl;

    cout << "Введите C: ";
    cin >> c;
    cout << endl;

    max = a;

    if (a < b)
        max = b;
    if (max > c)
        return max;
    if (max < c)
    {
        max = c;
        return max;
    }
}

//----------------------------------

int limit(int x)  //Ф-я ввода нижнего и верхнего предела
{
    int low_l, upp_l;
    cout << "Введите нижний предел: ";
    cin >> low_l;
    cout << endl;

    cout << "Введите верхний предел: ";
    cin >> upp_l;
    cout << endl;

    if ((x >= low_l) && (x <= upp_l))
        return 0;
    else
        return 1;
}

//----------------------------------

int chng_num()  //Ф-я, заменяющая введенное число
{
    int x;
    cout << "Введите другой число: ";
    cin >> x;
    return x;
}

//----------------------------------

int menu(int(*f_poin_c)(int), int n)  //Меню программы
{
    int oper_n = 0, z;
    cout << "Введите номер операции:\n" <<
        "1 - Введите нижний и верхний предел\n" <<
        "2 - Изменить введенную цифру\n" <<
        "3 - Выход из меню\n" <<
        "4 - Выход\n\n";
    do
    {
        cout << "?\n";
        cin >> oper_n;
        if ((oper_n < 1) || (oper_n > 4))
            cout << "Error." << endl;
        do
        {
            switch (oper_n)
            {
            case 1:
                if (f_poin_c(n) == 0)
                    break;
                else
                    oper_n = 2;
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));

        do
        {
            switch (oper_n)
            {
            case 2:
                n = chng_num();
                break;
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));

        do
        {
            switch (oper_n)
            {
            case 4:
                exit(0);
            }
            break;
        } while ((oper_n != 3) && (oper_n != 4));
    } while ((oper_n != 3) && (oper_n != 4));
    return n;
}

//----------------------------------

void insert_sort(float* arr, int n1)  //Ф-я сортировки массива вставками
{
    int key = 0;
    int x = 0;
    for (int y = 1; y < n1; y++)
    {
        key = arr[y];
        x = y - 1;
        while (x >= 0 && arr[x] > key)
        {
            arr[x + 1] = arr[x];
            x = x - 1;
            arr[x + 1] = key;
        }
    }
}

//----------------------------------

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    int (*f_poin)(int a);
    f_poin = limit;
    cout << max() << endl << endl;
    cout << "A = ";
    cin >> a;
    menu(f_poin, a);

    int n = 10;
    float* arr = new float[n];
    cout << "Array:" << endl;
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 10000;
    for (int i = 0; i < n; i++)
        cout << setw(10) << arr[i];
    cout << endl << endl;
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        insert_sort(arr, n);
        cout << setw(10) << arr[i];
    }
    cout << endl << endl;
    delete[] arr;

    return 0;
}
