#include<iostream>
#include<math.h>
using namespace std;

double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if(b == 0){
        cout << "Error: Division by Zero." << endl;
        return NAN;
    }
    return a /b;
}


int main(){
    char operation;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two num: ";
    cin >> num1 >> num2;

    switch(operation){
        case '+':
        cout << num2 << " + " << num2 << " = " << add(num1, num2) << endl;
        break;
        case '-':
        cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
        break;
        default:
        cout << "Error: Invalid operator. " << endl;
        break;
    }
    return 0;
}