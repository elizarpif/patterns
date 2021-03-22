#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product
{
public:
    virtual ~Product(){};
    virtual string Name() const = 0;
};

// яблоко
class Apple: public Product {
public:
    string Name() const override {
        return "Apple";
    }
};

// груша
class Pear: public Product {
public:
    string Name() const override {
        return "Pear";
    }
};

// персик
class Peach: public Product {
public:
    string Name() const override {
        return "Peach";
    }
};

// банан
class Banana: public Product {
public:
    string Name() const override {
        return "Banana";
    }
};

// апельсин
class Orange: public Product {
public:
    string Name() const override {
        return "Orange";
    }
};

#endif // PRODUCT_H
