#include <iostream>
#include "../Header files/ram.h"
using namespace std;

ram::ram(const char* n, int m, double pr):ram(n, m){
    price = pr;
}

ram::ram():memory(0){
    name = nullptr;
    price = 0;
}

ram::~ram(){
    delete[] name;
}

void ram::Input(){
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

ram::ram(const ram& obj):memory(obj.memory){
    name = new char[strlen(obj.name)+ 1];
    strcpy(name, obj.name);
    price = obj.price;
}

char* ram::getName()const{
    return name;
}

const int ram::getMemory()const{
    return memory;
}

double ram::getPrice()const{
    return price;
}

void ram::setName(char* n){
    name = n;
}

void ram::setPrice(double pr){
    price = pr;
}
