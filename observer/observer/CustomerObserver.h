#ifndef CUSTOMEROBSERVER_H
#define CUSTOMEROBSERVER_H

#include "Observer.h"
#include "Customer.h"
#include <iostream>

class CustomerObserver : public Observer
{
public:
void update(Customer *customer) {
std::cout << "New: CustomerObserver received an update from Customer: " << customer->getName() << std::endl;
std::cout << "Address: " << customer->getAddress() << std::endl;
std::cout << "Phone number: " << customer->getPhoneNumber() << std::endl;
std::cout << "Email: " << customer->getEmail() << std::endl;
}

};

#endif // CUSTOMEROBSERVER_H
