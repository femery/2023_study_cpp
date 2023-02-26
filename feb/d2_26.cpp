#include <iostream>
#include <ctime>

using namespace std;

int main11(){
    time_t now = time(0);

    cout<<now<<endl;

    tm *ltm = localtime(&now);
    cout<< "year: "<< ltm->tm_year<<endl;
}