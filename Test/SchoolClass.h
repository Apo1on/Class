// author: Евгений Афанасьев
#pragma once
#include <iostream>
#include <string>
using namespace std;
class SchoolClass {
    
    private:
    string ClassLetter; // буква класса 
    int ClassNumber; // Цифра класса 
    int StudentCount; // Количество учеников 
    string ClassroomTeacher; // Классный руководитель
	public:
        SchoolClass();
        string GetFullInfo() const;
        void SetClassNumber(int a);
        void SetStudentCount(int a);
        void SetClassroomTeacher(string a);
        void SetClassLetter(char a);
        int GetClassNumber() const;
        string GetClassLetter() const;
        int GetStudentCount() const;
};