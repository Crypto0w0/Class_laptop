#pragma once

class ram{
    char* name;
    const int memory;
    double price;
    ram(const char* n, int m):memory(m){
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
    }
public:
    ram();
    ram(const char* n, int m, double pr);
    ram(const ram& obj);
    ~ram();
    void Input();
    
    char* getName()const;
    const int getMemory()const;
    double getPrice()const;
    
    void setName(char* n);
    void setPrice(double pr);
};
