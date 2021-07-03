// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

double invert(double x, double y)  //Среднее гармоническое
{
    double s;
    s = 2 / (1 / x + 1 / y);
    return s;
}

//----------------------------

void c_place(double* p1, double* p2)  //Замена
{
    double t = *p1;
    *p1 = *p2;
    *p2 = t;
}

//----------------------------

void sort(double* p1, double* p2, double* p3)  //Сортировка по местам
{
    if (*p3 < *p1)
        c_place(p3, p1);
    if (*p2 < *p1)
        c_place(p2, p1);
    if (*p3 < *p2)
        c_place(p3, p2);
}

//----------------------------

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите A: ";
    cin >> a;
    cout << endl;
    cout << "Введите B: ";
    cin >> b;
    cout << endl;
    cout <<"Среднее гармоническое: " << invert(a, b);
    cout << endl;

    double x, y, z;
    cout << "Введите X: ";
    cin >> x;
    cout << endl;
    cout << "Введите Y: ";
    cin >> y;
    cout << endl;
    cout << "Введите Z: ";
    cin >> z;
    cout << endl;
    sort(&x, &y, &z);
    cout << x << " " << y << " " << z;
    return 0;
}
