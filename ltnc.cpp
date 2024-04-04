#include <iostream>
using namespace std;

class Duck {
public:
    virtual void quack(){
        cout << "Duck Quack Quack" << endl;
    }
    virtual void swim(){
        cout << "Duck Swim Swim" << endl;
    }
    virtual void display(){
        cout << "Display somthing about Duck" << endl;
    };
};

class SkyDuck : public Duck {
public:
    void fly() {
        cout << "SkyDuck Duck: Flying" << endl;
    }
};
class RedheadDuck : public Duck {
public:
    void fly() {
        cout << "Redhead Duck: Flying" << endl;
    }
};
class RubberDuck : public Duck {
public:
    // Can't fly =(((
};

int main() {
    SkyDuck mallard;
    mallard.display();
    mallard.quack();
    mallard.swim();
    mallard.fly();

    RedheadDuck redhead;
    redhead.display();
    redhead.quack();
    redhead.swim();
    redhead.fly(); 

    RubberDuck rubber;
    rubber.display();
    rubber.quack();
    rubber.swim();
    //rubber.fly(); ==> This will lead to an error becasue rubber can't fly

    return 0;
}
