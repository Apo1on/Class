#pragma once
#include <iostream>
#include <string>
using namespace std;
class SchoolClass {
	public:
       
        string GetFullInfo(){}
        string SetClassNumber(char a){}
    private:
        char ClassLetter; // ����� ������ // �������� � �������
        char ClassNumber; // ����� ������  // getNumber
        int StudentCount; // ���������� �������� // getNumber
        string ClassroomTeacher; // �������� ������������
};