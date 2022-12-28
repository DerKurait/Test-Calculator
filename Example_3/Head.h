#pragma once
//Подключаем библиотеки
#include <iostream>
#include <sstream>
#include <stack>
#include <cmath>

#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
using namespace System;

const double p = acos(-1);
const double e = exp(1);
//Переносим функции

class lexeme {
public:
	double value;
	char type;
};

int priority(char operation);
bool Calculate(stack <lexeme>& StackNums, stack <lexeme>& StackOpers, lexeme& obj);
double CALC(string str);//Convert to std::string

std::string& Convert_String_to_string(System::String^ s, std::string& os);
System::String^ Convert_string_to_String(std::string& os, System::String^ s);

string ATDConvert(string str, double x);



void BuildGraph(std::string str);