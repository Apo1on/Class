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
        // стандартные значения
        SchoolClass();
        // Выводит всю информацию ввиде строки
        string ToString() const;
        // Установка номера класса
        void SetClassNumber(int a);
        // Установка количество студентов
        void SetStudentCount(int a);
        // Установка имени учителя
        void SetClassroomTeacher(string a);
        // Установка имени класса
        void SetClassLetter(char a);
        // возврат значения номера класса
        int GetClassNumber() const;
        // возврат значения буква класса
        string GetClassLetter() const;
        // возврат значения количество учеников
        int GetStudentCount() const;
        // увеличить значение учеников
        void AddToStudentCount(int a);
};