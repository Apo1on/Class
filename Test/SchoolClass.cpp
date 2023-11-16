
#include <iostream>
#include <string>
using namespace std;
class SchoolClass { 
    public:
        
        string GetFullInfo()
        {
            string Information = "Это " + to_string(ClassNumber) + to_string(ClassLetter) + " класс в котором учится " + to_string(StudentCount) + " человек";
            return Information;

        };
        string SetClassNumber(char a)
        {
            char let;
            if ('1' <= a && a <= '11')
            {
                ClassNumber = a;
            }
            else { return "Введите значение от 1 до 11"; };
              
        };
    private:
        char ClassLetter; // буква класса // запихать в прайват
        char ClassNumber; // Цифра класса  // getNumber
        int StudentCount; // Количество учеников // getNumber
        string ClassroomTeacher; // Классный руководитель
};

