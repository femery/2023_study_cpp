#include <iostream>
#include <ctime>

using namespace std;

int main11(){
    time_t now = time(0);

    cout<<now<<endl;

    tm *ltm = localtime(&now);
    cout<< "year: "<< ltm->tm_year<<endl;
}

class Box
{
public:
    double length;
    double breadth;
    double height;
    double get();
    void set(double len,double bre,double hei);
};

double Box::get(){
    return length*breadth*height;
}

void Box::set(double len, double bre, double hei) {
    length =len;
    breadth=bre;
    height=hei;
}

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume =0.0;
    Box1.height=5.0;
    Box1.length=6.0;
    Box1.breadth=7.0;

    Box2.height=10.0;
    Box2.length=12.0;
    Box2.breadth =13.0;

    volume =Box1.height * Box1.length * Box1.breadth;
    cout<<"Box1 体积: " << volume<<endl;

    volume = Box2.length * Box2.height * Box2.breadth;
    cout<< "Box2 体积: " << volume<<endl;

    Box3.set(16.0,8.0,12.0);
    volume = Box3.get();
    cout<< "Box3 体积: " << volume <<endl;

    return 0;

}
