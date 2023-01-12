#pragma once

class vcard{
    char* name;
    const int memory;
    double price;
    vcard(const char* n, int m):memory(m){
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
    }
public:
    vcard();
    vcard(const char* n, int m, double pr);
    vcard(const vcard& obj);
    ~vcard();
    void Input();
    
    char* getName()const;
    const int getMemory()const;
    double getPrice()const;
    
    void setName(char* n);
    void setPrice(double pr);
};

