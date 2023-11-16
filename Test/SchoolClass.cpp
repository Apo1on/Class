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
        void SchoolClass::SetClassLetter(char* a)
        {
            if (a[1] < 'а')
            {
                if (a[1] > 'я') { ClassLetter = 'я'; }
                else { ClassLetter = a[1]; }
            }
            else { ClassLetter = 'а'; }
        };