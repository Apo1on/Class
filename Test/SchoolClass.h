// author: ������� ���������
#pragma once
#include <iostream>
#include <string>
using namespace std;
class SchoolClass {
    
    private:
    string ClassLetter; // ����� ������ // �������� � �������
    int ClassNumber; // ����� ������  // getNumber
    int StudentCount; // ���������� �������� // getNumber
    string ClassroomTeacher; // �������� ������������
	public:
        
        string GetFullInfo() const;
        void SetClassNumber(int a);
        void SetStudentCount(int a);
        void SetClassroomTeacher(string a);
        void SetClassLetter(char a);
        int GetClassNumber() const;
        string GetClassLetter() const;
        int GetStudentCount() const;
};