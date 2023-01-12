#include <iostream>
#include "../Header files/vcard.h"
using namespace std;

vcard::vcard(const char* n, int m, double pr):vcard(n, m){
    price = pr;
}

vcard::vcard():memory(0){
    name = nullptr;
    price = 0;
}

vcard::~vcard(){
    delete[] name;
}

void vcard::Input(){
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

vcard::vcard(const vcard& obj):memory(obj.memory){
    name = new char[strlen(obj.name)+ 1];
    strcpy(name, obj.name);
    price = obj.price;
}

char* vcard::getName()const{
    return name;
}

const int vcard::getMemory()const{
    return memory;
}

double vcard::getPrice()const{
    return price;
}

void vcard::setName(char* n){
    name = n;
}

void vcard::setPrice(double pr){
    price = pr;
}
