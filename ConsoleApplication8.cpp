// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
using namespace std;

	
    void fivechifr()
	{
		int n;
		cout << "Введите пятизначное число" << endl;
		cin >> n;
		if (n > 99999 || n < 10000) // проверка что число 5-ти значное
		{

			cout << "Введено не пятизначное число";
		}
		else
		{
			for (int i = 0; i < 5; i++)//вывод цифр
			{
				cout << n % 10 << endl;
				n /= 10;
			}
		}
		cout << endl;

	}
     void reg()
	{
		char a;// вводимая буква
		cout << "Введите букву нижнего регистра:" << endl;
		cin >> a;
		a = toupper(a);// преобразование буквы
		cout << endl << "Та же буква в верхнем регистре: " << a;
		cout << endl;
		cout << endl;
	}
	 void sred()
	 {
		 const int k = 10;
		 int sum = 0;
		 float num = 0;
		 int arr[k];// массив из 10 цифр
		 for (int i = 0; i < k; i++)//заполнения массива
		 {
			 sum = rand() % 10;
			 arr[i] = sum;
			 cout << arr[i] << " ";
			 num += arr[i];
		 }
		 num = num / k;
		 cout << endl;
		 cout << "Среднее арифметическое = " << num << endl;
	 }
	 int main()
	 {
		 setlocale(LC_ALL, "Rus");
		 fivechifr();
		 reg();
		 sred();
	 }