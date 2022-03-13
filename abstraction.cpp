#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee
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
        void AskforPromotion() {
            if(age > 30){
                cout << Name << " got promoted" << endl;
            }else{
                cout << Name << " , sorry no promotion for you" << endl;
            }
        }
};

int main(){
    Employee Afsan("Afsan Nayem" , "Amar Mon" ,  34);
    Employee Rafsan("Rafsan Alom","Amar buker ba pase 🥰",15);
    
    Rafsan.AskforPromotion();
    Afsan.AskforPromotion();
}