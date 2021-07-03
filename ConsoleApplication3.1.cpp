// ConsoleApplication3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 6;
    string str;
    cout << "Введите вашу строку: ";
    getline(cin, str);
    char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y' };
    cout << "Гласные буквы: ";
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i] == vowels[j])
            {
                cout << str[i] << " ";
            }
        }
    }
    cout << "\n";
    return 0;
}