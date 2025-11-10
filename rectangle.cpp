#include<iostream>
using namespace std;
class Rectangle {
    private:
    float length;
    float breadth;
    public:
    //constructor to intialize rectangle
    Rectangle (float l,float b){
        length=l;
        breadth=b;
    }
    //function to calculate area
    float area(){
        return length*breadth;
    }
    //function to calculate perimeter
    float perimeter(){
        return 2*length+breadth;
    }
    //function to display rectangle details
    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Area:"<<area()<<endl;
        cout<<"Perimeter:"<<perimeter()<<endl;
    }
};int main(){
    float l,b;
    cout<<"enter length of rectangle:";
    cin>>l;
    cout<<"enter breadth of rectangle:";
    cin>>b;
    //create object of rectangle
    Rectangle rect(l,b);
    //display results
    rect.display();
    return 0;
}

    

