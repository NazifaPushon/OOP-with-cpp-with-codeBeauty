#include <iostream>
using namespace std;

class Employee{
    public:
    string Name;
    string company;
    int age;

    void IntroduceYourSalf(){
        cout << "Name - " << Name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
};

int main(){
    Employee Afsan;
    Afsan.Name = "Afsan Nayem";
    Afsan.company = "Amar Mon";
    Afsan.age = 15;
    Afsan.IntroduceYourSalf();

    Employee Rafsan;
    Rafsan.Name = "Rafsan Alom";
    Rafsan.company = "Amar buker ba pase 🥰";
    Rafsan.age = 15;
    Rafsan.IntroduceYourSalf();
}