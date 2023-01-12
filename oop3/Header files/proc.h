#pragma once

class processor{
    char* name;
    double Ghz;
    double price;
    processor(const char* n){
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
    }
    processor(const char* n, double g):processor(n){
        Ghz = g;
    }
public:
    processor();
    processor(const char* n, double g, double pr);
    processor(const processor& obj);
    ~processor();
    void Input();
    
    char* getName()const;
    const int getGhz()const;
    double getPrice()const;
    
    void setName(char* n);
    void setGhz(double g);
    void setPrice(double pr);
};
