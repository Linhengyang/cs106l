#include <iostream>
using namespace std;
struct Student
{
    /* data */
    string name;
    string state;
    int age;
};
void printStudentInfo(Student student){
    cout << student.name << " from " << student.state;
    cout << " (" << student.age << ")" << endl;
};
int main() {
    cout << "Hello world!" << endl;
    Student s;
    s.name = "Ethan";
    s.state = "CA";
    s.age = 20;
    printStudentInfo(s);
    return 0;
}