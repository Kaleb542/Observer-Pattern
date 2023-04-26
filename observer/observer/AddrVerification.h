#pragma once
#include "Observer.h"
#include "Customer.h"

class AddrVerification : public Observer {
public:
    AddrVerification();
    virtual void update(Customer* customer);
    void verifyAddress(Customer* customer);
};

