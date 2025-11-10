#include<iostream>
using namespace std;
class patient {
    public:
    int patientID;
    string name;
    string disease;
    //function defined inside the class
    void setpatient(int id,string n,string d)
    {
        patientID=id;
        name=n;
        disease=d;
    }
    //function declared inside,defined outside
    void showpatient();
};
//function defined outside the class
void patient:: showpatient() {
    cout<<"patientID:"<<patientID
    <<",Name:"<<name
    <<"Disease:"<<disease<<endl; }
    int main(){
        patient p1,p2;
        //using inside function to set details
        p1.setpatient(301,"arjun","fever");
        p2.setpatient(302,"meena","diabetes");
        //using outside function to display
        p1.showpatient();
        p2.showpatient();
        return 0;
    }






    