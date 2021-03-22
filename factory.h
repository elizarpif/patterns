#ifndef FACTORY_H
#define FACTORY_H
#include "product.h"

class Factory
{
public:
    // Factory
    virtual Product *CreateApple() const = 0;
    virtual Product *CreatePear() const = 0;
    virtual Product *CreatePeach() const = 0;
    virtual Product *CreateBanana() const = 0;
    virtual Product *CreateOrange() const = 0;
};

#endif // FACTORY_H
