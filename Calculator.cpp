#include <iostream>

using namespace std;

int calculator(int num1, int num2, char oper)
{
    switch (oper)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    default:
        return 0;
        break;
    }
}

int main()
{
    int number1, number2, result;
    char op;
    cout << "koko" << endl;
    cout << "Hello someone, I'm calculator. Please enter two numbers, follow by operator " << endl;

    cin >> number1 >> number2 >> op;
    result = calculator(number1, number2, op);

    if (result)
    {
        cout << result << endl;
    }
    else
    {
        cout << "unauthorized operator. Please enter '+', '-', '*' or '/' thenks";
    }

    cin.ignore();
    cin.get(); 
}
