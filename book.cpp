#include<iostream>
using namespace std;
class Book {
    public:
    string title;
    string author;
    float price;
    void display()
    {
        cout<<"Title:"<<title
        <<"Author:"<<author
        <<"price:rs"<<price<<endl;
    }
    };
    int main() {
        Book b1,b2;
        b1.title = "c++ programming";
        b1.author = "Bjarne stroutstrup";
        b1.price = 750.50;
        b2.title = "Data structures";
        b2.author = "Mark alen weiss";
        b1.display();
        b2.display();
        return 0;
    }

