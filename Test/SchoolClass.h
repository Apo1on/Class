#pragma once
#include <iostream>
#include <string>
using namespace std;
class SchoolClass {
	public:
       
        string GetFullInfo(){}
        string SetClassNumber(char a){}
    private:
        char ClassLetter; // буква класса // запихать в прайват
        char ClassNumber; // Цифра класса  // getNumber
        int StudentCount; // Количество учеников // getNumber
        string ClassroomTeacher; // Классный руководитель
};