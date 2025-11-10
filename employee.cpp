#include<iostream>
using namespace std;
class employee {
    public:
    int empID;
    string name;
    float salary;
    //member function defined inside the class
    void setemployee(int id,string n,float);
    {
    empID = id;
    string name;
    float salary;
}
    //member function declaration (to be defined outside)
    void displayemployee();
};
    //function defined outside class using scope resolution
    void employee:: displayemployee() {
        cout<<"employee ID:"<<empID
        <<"Name:"<<name
        <<",salary:rs"<<salary<<endl;
    }
    int main() {
    employee e1,e2;
    //call function defined inside class
    e1.setemployee(101,"ravi",50000.7);
    e2.setemployee(102,"priya", 62000.50);
    //call function defined outside class
    e1.displayemployee();
    e2.displayemployee();
    return 0;
}






