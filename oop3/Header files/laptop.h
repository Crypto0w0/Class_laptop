#pragma once
#include "vcard.h"
#include "hdd.h"
#include "proc.h"
#include "ram.h"

class laptop{
    char* name;
    vcard videoCard;
    hdd HDD;
    processor Processor;
    ram RAM;
    double price;
public:
    ~laptop();
    laptop();
    laptop(const laptop& obj);
    void Input();
};
