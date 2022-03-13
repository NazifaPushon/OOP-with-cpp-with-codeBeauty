#include <iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string company;
    int age;

    Employee(string employeeName, string employeeCompany, int employeeAge){
        Name = employeeName;
        company = employeeCompany;
        age = employeeAge;
    };

    void IntroduceYourSalf(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
};

int main(){
    Employee Afsan("Afsan Nayem" , "Amar Mon" ,  15);
    Afsan.IntroduceYourSalf();

    Employee Rafsan("Rafsan Alom","Amar buker ba pase 🥰",15);
    Rafsan.IntroduceYourSalf();
}