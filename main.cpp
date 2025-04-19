#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    double num1;
    double num2;
    char op;
    double product;

    cout << "****************************\n";
    cout << "*Welcome to The Calculator!*\n";
    cout << "****************************\n";
    cout << "Enter your first number: ";
    cin >> num1;
    cout << '\n';
    cout << "Enter your second number: ";
    cin >> num2;
    cout << '\n';
    cout << "Enter your operater (+ - * / %): ";
    cin >> op;
    cout << '\n';

    switch(op)
    {
        case '+':
            product = num1 + num2;
            break;
        case '-':
            product = num1 - num2;
            break;
        case '*':
            product = num1 * num2;
            break;
        case '/':
            product = num1 / num2;
            break;
        case '%':
            product = (int) num1 % (int) num2;
            break;
    }

    cout << "You're number is: " << (double) product << '\n';

    return 0;
}