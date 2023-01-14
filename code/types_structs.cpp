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
Student lookupStudent(){
    Student s = {"Ethan", "CA", 30};
    return s;
};
int main(){
    cout << "Hello world!" << endl;
    Student foundStudent = lookupStudent();
    cout << foundStudent.name << endl;
    pair<bool, Student> query_result; // tuple<arg1, arg2> defines a type, and init a variable
    query_result = make_pair(true, foundStudent); // assign values
    // query_result.first = true;
    // query_result.second = {"Ethan", "CA", 30};
    if (query_result.first){
        cout << query_result.second.state << endl;
        cout << query_result.second.age << endl;
    };
    tuple<int, int, int> lin_vector = {1, 3, 5}; // tuple<arg1, arg2, arg3> defines a type, and init a variable
    cout << get<0>(lin_vector) << " and " << get<1>(lin_vector) << " and " << get<2>(lin_vector) << endl;
    return 0;
}