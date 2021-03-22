#ifndef MAGNOLIA_H
#define MAGNOLIA_H

#include "product.h"
#include "factory.h"

class Magnolia: public Factory {
protected:
    uint sales; // продажи
    Magnolia(const uint value): sales(value){}
    static Magnolia* singletonMagnolia_;

public:
    // методы, реализующие одиночку

    Magnolia(Magnolia &other) = delete;
    void operator=(const  Magnolia &) = delete;
    static Magnolia *GetInstance(const uint value);

    uint GetSales() {
        return sales;
    }
    void DailySales(int n) {
        sales += uint(n);
    }

    //  методы, реализующих абстрактную фабрику
    Product *CreateApple() const override {
        return new Apple();
    }
    Product *CreatePear() const override {
        return new Pear();
    }
    Product *CreatePeach() const override {
        return new Peach();
    }
    Product *CreateBanana() const override {
        return new Banana();
    }
    Product *CreateOrange() const override {
        return new Orange();
    }
};

Magnolia* Magnolia::singletonMagnolia_ = nullptr;

Magnolia* Magnolia::GetInstance(const uint value) {
    if (singletonMagnolia_ == nullptr) {
        singletonMagnolia_ = new Magnolia(value);
    }

    return singletonMagnolia_;
}

#endif // MAGNOLIA_H
