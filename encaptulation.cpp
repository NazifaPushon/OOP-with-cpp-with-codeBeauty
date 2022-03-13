#include <iostream>
using namespace std;

class Employee
{
    private: 
        string Name;
        string company;
        int age;

    public:
        Employee(string employeeName, string    employeeCompany, int employeeAge){
            Name = employeeName;
            company = employeeCompany;
            age = employeeAge;
        };

        void IntroduceYourSalf(){
            cout << "Name - " << Name << endl;
            cout << "Company - " << company << endl;
            cout << "Age - " << age << endl;
        }

        void setName (string name) {
            Name = name;
        }

        string getName (){
            return Name;
        }

        void setCompany (string employeeCompany) {
            company = employeeCompany;
        }

        string getCompany () {
            return company;
        }

        void setAge (int employeeAge){
            if(employeeAge >= 18)
            age = employeeAge;
        }

        int getAge(){
            return age;
        }
};

int main(){
    Employee Afsan("Afsan Nayem" , "Amar Mon" ,  15);
    Afsan.IntroduceYourSalf();
    Employee Rafsan("Rafsan Alom","Amar buker ba pase 🥰",15);
    cout << Rafsan.getCompany() << endl;

    Rafsan.setCompany("amar moner modhe");
    cout << Rafsan.getCompany() << endl;
    Rafsan.IntroduceYourSalf();
}