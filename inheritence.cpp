#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskforPromotion() = 0;
};

class Employee:AbstractEmployee
{
    private: 
        
        string company;
        int age;
    protected:
        string Name;
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

class Developer :public Employee{
    public:
        Developer(string employeeName, string    employeeCompany, int employeeAge, string language) : Employee(employeeName,employeeCompany,employeeAge){
            favProgrammingLanguage = language;
        };
        string favProgrammingLanguage;
        void fixBug(){
            cout << Name << "fixed bug using " << favProgrammingLanguage << endl;
        }
};

class Teacher : public Employee{
    public:
        string subject;
        Teacher(string employeeName, string    employeeCompany, int employeeAge, string teachSub) : Employee(employeeName,employeeCompany,employeeAge){
            subject  =  teachSub;
        };
        void prepareLesson(){
            cout << Name << " is preparing " << subject << " lesson" << endl;
        }
};

int main(){
    Employee Afsan("Afsan Nayem" , "Amar Mon" ,  34);
    Employee Rafsan("Rafsan Alom","Amar buker ba pase 🥰",15);

    Developer Pushon("Nazifa Mashiat Pushon","google",14,"C++");
    Pushon.fixBug();
    Pushon.IntroduceYourSalf();
    Teacher Jheel("Araf Intiser Jheel","Amar msg seen kore nah 😒",28,"physics and chemisty");
    Jheel.prepareLesson();
};