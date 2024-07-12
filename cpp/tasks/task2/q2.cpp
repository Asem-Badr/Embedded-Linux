#include <iostream>
#include <cmath>
/*
Q2: Write a “calculator class” in a program which asks for two numbers
and a mathematical operator (represented as a char type. Depending on
the operator (+, -, *, /, ^, sqrt( ) ‘S’ ) call the appropriate function and
display the result. Use a switch statement to filter the choices.
The class should have private member functions for the operations and a
public function which is the interface with the user
*/
class Calculator
{
public:
    int num1, num2;
    char op;
    Calculator()
    {
        std::cout << "Calculator constructor" << std::endl;
    }
    ~Calculator()
    {
        std::cout << "Calculator destructor" << std::endl;
    }
    void setNum1(int num1)
    {
        this->num1 = num1;
    }
    void setNum2(int num2)
    {
        this->num2 = num2;
    }
    void setOp(char op)
    {
        this->op = op;
    }
    void print()
    {
        std::cout << num1 << " " << op << " " << num2 << " = ";
    }
    int getNum1()
    {
        return num1;
    }
    int getNum2()
    {
        return num2;
    }
    char getOp()
    {
        return op;
    }
    void calculate()
    {
        switch (op)
        {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 * num2 << std::endl;
            break;
        case '/':
            std::cout << num1 / num2 << std::endl;
            break;
        case '^':
            std::cout << std::pow(num1, num2) << std::endl;
            break;
        case 'S':
            std::cout << sqrt(num1) << std::endl;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
        }
    }
};

int main()
{
    int num1, num2;
    char op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter an operator: ";
    std::cin >> op;
    Calculator calc;
    calc.setNum1(num1);
    calc.setNum2(num2);
    calc.setOp(op);
    calc.print();
    calc.calculate();

    return 0;
}