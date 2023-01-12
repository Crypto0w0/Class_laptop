#include <iostream>
#include "../Header files/proc.h"
using namespace std;

processor::processor(const char* n, double g, double pr):processor(n, g){
    price = pr;
    
}

processor::processor(){
    name = nullptr;
    Ghz = 0;
    price = 0;
}

processor::~processor(){
    delete[] name;
}

void processor::Input(){
    char buf[20];
    cout << "Enter name: ";
    cin.getline(buf, 20);
    if (name != nullptr){
        cout << name << " delete!!!\n";
        delete[] name;
    }
    name = new char[strlen(buf)+ 1];
    strcpy(name, buf);
    
    cout << "Enter Ghz: ";
    cin >> Ghz;
    cout << "Enter price: ";
    cin >> price;
}

processor::processor(const processor& obj){
    name = new char[strlen(obj.name)+ 1];
    strcpy(name, obj.name);
    Ghz = obj.Ghz;
    price = obj.price;
}

char* processor::getName()const{
    return name;
}

const int processor::getGhz()const{
    return Ghz;
}

double processor::getPrice()const{
    return price;
}

void processor::setName(char* n){
    name = n;
}

void processor::setGhz(double g){
    Ghz = g;
}

void processor::setPrice(double pr){
    price = pr;
}

