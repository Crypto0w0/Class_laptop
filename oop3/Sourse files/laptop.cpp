#include "../Header files/laptop.h"
#include "vcard.cpp"
#include "hdd.cpp"
#include "proc.cpp"
#include "ram.cpp"
#include <iostream>
using namespace std;

void laptop::Input(){
    char buf[20];
    cout << "Enter name: ";
    cin.getline(buf, 20);
    if (name != nullptr){
        cout << name << " delete!!!\n";
        delete[] name;
    }
    name = new char[strlen(buf)+ 1];
    strcpy(name, buf);
    
    cout << "HDD\n";
    laptop::HDD.Input();
    cout << "Video Card\n";
    laptop::videoCard.Input();
    cout << "Processor\n";
    laptop::Processor.Input();
    cout << "RAM\n";
    laptop::RAM.Input();
    
    cout << "Enter price: ";
    cin >> price;
}

laptop::laptop(const laptop& obj):HDD(obj.HDD), videoCard(obj.videoCard), Processor(obj.Processor), RAM(obj.RAM){
}

laptop::laptop(){
    
}

laptop::~laptop(){
    delete[] name;
    laptop::HDD.~hdd();
    laptop::videoCard.~vcard();
    laptop::Processor.~processor();
    laptop::RAM.~ram();
}
