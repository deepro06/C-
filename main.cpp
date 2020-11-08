include <iostream>
using namespace std;
//C++ homework-1 #Calculator
int main()
{
    char op;
    float num1;
    float num2;

    cout << "Enter operator :-" << endl;
    cin >> op;

    cout << "Enter two numbers:- " << endl;
    cin >> num1 >> num2;
    cout << "_____________________________________________" << endl;
    
    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " <<num1*num2;
            break;

        case '/':
            cout << num1 << "/" << num2 << " = " <<num1/num2;
            break;

        default:
            cout << "Error!! wrong operator!! ";
            break;
    }

    return 0;
}