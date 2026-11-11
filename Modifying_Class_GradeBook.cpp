#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name,string name2)
    : courseName(name),InstructorName(name2)
{
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}

string GradeBook::getCourseName() const
{
    return courseName;
}
void GradeBook::setInstructorName(string name2)
{
    InstructorName = name2;
}

string GradeBook::getInstructorName() const
{
    return InstructorName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout <<"This course is presented by:"<<getInstructorName()<<endl;
};
int main()
{
    GradeBook G1("math","jingliu");
    G1.displayMessage();
    return 0;
}