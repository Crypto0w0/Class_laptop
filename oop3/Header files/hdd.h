#pragma once

class hdd{
    char* name;
    const int memory;
    double price;
    hdd(const char* n, int m):memory(m){
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
    }
public:
    hdd();
    hdd(const char* n, int m, double pr);
    hdd(const hdd& obj);
    ~hdd();
    void Input();
    
    char* getName()const;
    const int getMemory()const;
    double getPrice()const;
    
    void setName(char* n);
    void setPrice(double pr);
};
