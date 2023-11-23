// author: Евгений Афанасьев
#include "SchoolClass.h"
#include <iostream>
#include <string>
using namespace std;
   
        string SchoolClass::GetFullInfo() const
        {
            string Information = "Это " + to_string(ClassNumber) + ClassLetter + " класс в котором учится " + to_string(StudentCount) + " человек";
            return Information;

        };
        void SchoolClass::SetClassNumber(int a)
        {
            if (a >= 1)
            {
                if (a <= 11) { ClassNumber = a; }
                else { ClassNumber = 11; }
            }
            else { ClassNumber = 1; }
        };
        void SchoolClass::SetClassLetter(char a)
        {
            
        };
        void SchoolClass::SetStudentCount(int a)
        {
            if (a >= 1)
            {
                if (a <= 41) { StudentCount = a; }
                else { StudentCount = 41; }
            }
            else { StudentCount = 1; }
        };
        void SchoolClass::SetClassroomTeacher(string a)
        {

        };
        int SchoolClass::GetClassNumber() const
        {
            return ClassNumber;
        }
        string SchoolClass::GetClassLetter() const
        {
            return ClassLetter;
        }
        int SchoolClass::GetStudentCount() const
        {
            return StudentCount;
        }