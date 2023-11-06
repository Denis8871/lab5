#pragma once
#include<iostream>
#include<string>
using namespace std;

class Payment
{

	string surname; //прізвище
	string name; //ім'я
	string patronymic; //по-батькові
	double salary; // щоденний оклад
	int yearOfEnployment; // рік прийняття на роботу 
	double percentageOfAllowance = 0.03; // відсоток надбавки
	int incomeTax = 0.13; // прибутковий податок
	int numberOfWorkingDays; // кількість відпрацьованих днів за місяць
	double accruedAmount; // нарахована сума 
	double amountWitheld; // утримана сума
	double finalAmount; // додаткова змінна для запису суми на руки
public:
	Payment (string s, string n, string p, double sal, int year, int numb); // конструктор з параметрами необхідними для розрахунків
	Payment(); // конструктор за замовчуванням
	Payment(string s, string n, string p, double sal, int year, int numb, int accAm,int ammWithh,int finalAm); // конструктор який приймає всі параметри і заповнює усі поля об'єкту
	void read(); // введеня з клавіатури
	void display(); //виведення на екран
	double calculateAccuredAmount(Payment &a); //метод обчислення нарахованої суми. в якості аргументу використовується посилання на об'єкт типу Payment
	double calculateAmountWitheld(Payment &a); //метод обчислення утриманої суми. в якості аргументу використовується посилання на об'єкт типу Payment
	double calculateFinalAmount(Payment &a); //метод обчислення суми на руки. в якості аргументу використовується посилання на об'єкт типу Payment
	int calculateExperience(); //метод обчислення стажу працівника
	bool operator>(Payment &a); // перевантаження оператору порівняння >
	bool operator<(Payment &a); // перевантаження оператору порівняння <
	Payment operator=(Payment &a); // перевантаження оператору присвоєння(організація поелементного копіювання)

	

};
