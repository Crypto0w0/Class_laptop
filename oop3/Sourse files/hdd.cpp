#include <iostream>
#include "../Header files/hdd.h"
using namespace std;

hdd::hdd(const char* n, int m, double pr):hdd(n, m){
    price = pr;
}

hdd::hdd():memory(0){
    name = nullptr;
    price = 0;
    
}

hdd::~hdd(){
    delete[] name;
}

void hdd::Input(){
    char buf[20];
    cout << "Enter name: ";
    cin.getline(buf, 20);
    if (name != nullptr){
        cout << name << " delete!!!\n";
        delete[] name;
    }
    name = new char[strlen(buf)+ 1];
    strcpy(name, buf);
    
    cout << "Enter price: ";
    cin >> price;
}

hdd::hdd(const hdd& obj):memory(obj.memory){
    name = new char[strlen(obj.name)+ 1];
    strcpy(name, obj.name);
    price = obj.price;
}

char* hdd::getName()const{
    return name;
}

const int hdd::getMemory()const{
    return memory;
}

double hdd::getPrice()const{
    return price;
}

void hdd::setName(char* n){
    name = n;
}

void hdd::setPrice(double pr){
    price = pr;
}
