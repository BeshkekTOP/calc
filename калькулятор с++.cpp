#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");
    string act;
    cout << "Чтобы начать напишите \"go\"\nДля выхода напишите \"quit\"." << endl;
    cin >> act;
    do
    {
        
        
        string op;
        cout << "Введите операцию: ";
        cin >> op;
        if (op == "+")
        {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a + b << endl;
        }
        else if (op == "-") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a - b << endl;
        }
        else if (op == "/") {
            double a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a / b << endl;
        }
        else if (op == "*") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << a * b << endl;
        }
        else if (op == "**") {
            float a, b;
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            cout << pow(a, b) << endl;
        }
        else if (op == "coren") {
            float a;
            auto b = 0.5;
            cout << "Введите первое число: ";
            cin >> a;
            cout << pow(a, b) << endl;
        }
        else if (op == "fact") {
            int number;
            int factorial = 1;
            cin >> number;
            for (int i = 1; i <= number; ++i) {
                factorial *= i;
            }
            cout << "Факториал от числа равен: " << factorial << endl;
        }
        else if (op == "%") {
            double a;
            cout << "Введите  число: ";
            cin >> a;
            cout << "Процент от числа равен: " << a / 100 << endl;
        }
        else if (op == "quit")
        {
            break;
        }
    } while (act == "go" || act != "quit");
    
    return 0;
}
