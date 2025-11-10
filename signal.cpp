#include<iostream>
#include<csignal>
#include<cstdlib>
using namespace std;
void signalhandler(int signum){
    cout<<"\nInterrupt signal("<<signum<<")received.\n";
    exit(signum);
}
int main(){
    signal(SIGINT,signalhandler);
    while(1){
        cout<<"running...press ctrl+c to stop.\n";
        for(volatile int i=0;i<1000000000;++i);
    }
    return 0;
}