#include <iostream>
using namespace std;
class Student{
    private:
        int age;
        void
    protected:
        double gpa;
        bool _isMarried;
    public:
        string name, location;        
};
class Teacher : public Student{
    public:
        int id;
};
int main (){
    Student Aman, Abebe;
    Aman.name = "Aman";
    Aman.location = "Addis Ababa";
    Teacher abraham;
    abraham.gpa = 4.00;
    return 0;
    

}