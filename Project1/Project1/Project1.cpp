// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#define PI 3.14159265358979323846


using namespace std;

int number = 1;
int multiplyXby6 = 1;
int deg = 65;
float playerSpeed;
double playerScore = 0;
float width = 8;
float height = 42;
unsigned int age = 0;
string playerName;
int squareNumber;
double num1;
double num2;
double celsius;
double fahrenheit;

double journalGrade;
double portfolioGrade;
int finalGrade;

double salary;

int main()
{
    cout << 5 + 5 << "\n";

    cout << 355.0 / 113.0 << "\n";

    cout << 503 * 92 << "\n";

    cout << number << "\n"; //1
    cout << number + 1 << "\n"; //2
    cout << number + 2 << "\n"; //3
    cout << number + 3 << "\n"; //4
    cout << number + 4 << "\n"; //5
    cout << number + 5 << "\n"; //6
    cout << number + 6 << "\n"; //7
    cout << number + 7 << "\n"; //8
    cout << number + 8 << "\n"; //9
    cout << number + 9 << "\n"; //10
    cout << "the factorial of 5 is " << 1 * 2 * 3 * 4 * 5;



    cout << ((919 * -1) - 6) / 2.56 << "\n";

    cout << "the mean is " << (15 + 25 + 3 + 20) / 4 << "\n";

    cout << 1 / 2 + 3 / 4 << "\n";

    cout << pow(73, 2) << "\n";

    cout << pow(73, 4) << "\n";

    cout << "linear intrep " << 10 + (20 - 10) * 0.35 << "\n";

    cout << 18 * 0.43 << "\n";

    cout << "65 degres = " << deg * PI / 180 << " radians" << "\n";

    double e = 1 + (1 / 1) + (1 / (1 * 2)) + (1 / (1 * 2 * 3)) + (1 / (1 * 2 * 3 * 4)) + (1 / (1 * 2 * 3 * 4 * 5));

    cout << "the required terms in series to find the first 5 digits of euler is: " << e;

    playerSpeed = 2.1f;
    cout << playerSpeed << "\n";
    playerSpeed += 10;
    cout << playerSpeed << "\n";

    playerScore += 10;
    cout << "Player score is: " << playerScore << "\n";
    cout << "width = " << width << "\n";
    cout << "height = " << height << "\n";
    cout << "area = " << width * height << "\n";

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nyou are " << age << " years old \n";

    cout << "enter your name: ";
    cin >> playerName;
    cout << "\nYour name is: " << playerName;

    cout << "\nenter a number to square: ";
    cin >> squareNumber;
    cout << "\nthe square of that number is: " << squareNumber * squareNumber << "\n";

    cout << "enter the first number to use: ";
    cin >> num1;
    cout << "\nenter the second number to use: ";
    cin >> num2;

    cout << "\nthe sum of those two numbers are " << num1 + num2 << "\n";
    cout << "the product of those two numbers are " << num1 * num2 << "\n";
    cout << "the difference of those two numbers are " << num1 - num2 << "\n";
    cout << "the quotient of those two numbers are " << num1 / num2 << "\n";

    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * (9 / 5)) + 32;
    cout << "the fahrenheit equivalent is: " << fahrenheit << "\n";

    cout << "Enter the marks you got for the reflective journal: ";
    cin >> journalGrade;
    cout << "\n";

    cout << "Enter the marks you got for the programming portfolio: ";
    cin >> portfolioGrade;
    cout << "\n";

    finalGrade = (((journalGrade / 100) * 0.7) + ((portfolioGrade / 100) * 0.3)) * 100;

    cout << "your overall grade is " << finalGrade << "\n";

    cout << "Enter your annual salary: ";
    cin >> salary;
    cout << "\n";

    double monthlySalary = salary / 12;
    double weeklySalary = monthlySalary / 4;
    double dailySalary = weeklySalary / 7;

    double salaryAfterTax = salary * 0.8;
    double monthlyAfterTax = monthlySalary * 0.8;
    double weeklyAfterTax = weeklySalary * 0.8;
    double dailyAfterTax = dailySalary * 0.8;

    cout << "your annual salary is " << salary << " and after tax it is: " << salaryAfterTax << "\n";
    cout << "your monthly salary is " << monthlySalary << " and after tax it is: " << monthlyAfterTax << "\n";
    cout << "your weekly salary is " << weeklySalary << " and after tax it is " << weeklyAfterTax << "\n";
    cout << "your daily salary is " << dailySalary << " and after tax it is " << dailyAfterTax << "\n";
}


