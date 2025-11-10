#include<iostream>
using namespace std;
//declare a class
class wall {
    private:
    double length;
    public:
    //default constructor to intialize variable
    wall()
    : length{5.5} {
    cout<<"creating a wall."<<endl;
    cout<<"length="<<length<<endl;

    }
};
int main()
{
    wall wall1;
    return 0;
}
