// author: Евгений Афанасьев
#include "SchoolClass.h"
#include <iostream>
#include <string>
using namespace std;
        // стандартные значения
        SchoolClass::SchoolClass()
        {
            ClassLetter = 'а';
            ClassNumber = 1;
            StudentCount = 21;
            ClassroomTeacher = "Имя фамилия";
        }
        // Выводит всю информацию ввиде строки
        string SchoolClass::ToString() const
        {
            string Information = "Это " + to_string(ClassNumber) + ClassLetter + " класс в котором учится " + to_string(StudentCount) + 
                " учеников. \n Их классный руководитель " + ClassroomTeacher + "\n";
            return Information;

        };
        // Установка номера класса
        void SchoolClass::SetClassNumber(int a)
        {
            if (a >= 1)
            {
                if (a <= 11) { ClassNumber = a; }
                else { ClassNumber = 11; }
            }
            else { ClassNumber = 1; }
        };
        // Установка количество студентов
        void SchoolClass::SetClassLetter(char a)
        {
            ClassLetter = a;
        };
        // Установка имени учителя
        void SchoolClass::SetStudentCount(int a)
        {
            if (a >= 1)
            {
                if (a <= 41) { StudentCount = a; }
                else { StudentCount = 41; }
            }
            else { StudentCount = 1; }
        };
        // Установка имени класса
        void SchoolClass::SetClassroomTeacher(string a)
        {
            ClassroomTeacher = a;
        };
        // возврат значения номера класса
        int SchoolClass::GetClassNumber() const
        {
            return ClassNumber;
        }
        // возврат значения буква класса
        string SchoolClass::GetClassLetter() const
        {
            return ClassLetter;
        }
        // возврат значения количество учеников
        int SchoolClass::GetStudentCount() const
        {
            return StudentCount;
        }
        // увеличить значение учеников
        void SchoolClass::AddToStudentCount(int a){
            if (StudentCount + a >= 41)
            {
                StudentCount = 41;
            }
            else
            {
                StudentCount += a;
            }
            
        };