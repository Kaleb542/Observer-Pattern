#include "Customer.h"
#include <iostream>

using namespace std;

Customer::Customer(void)
{
}

Customer::~Customer(void)
{
}

void Customer::attach( Observer *myObserver)
{
    myObs.push_back( myObserver);
}

void Customer::detach( Observer *myObserver)
{
    for (int i= 0; i< myObs.size(); i++)
    {
        if (myObs[i]== myObserver)
        {
            myObs.erase(myObs.begin()+i);
            return;
        }
    }
}

void Customer::notifyObs()
{
    // set arg to something that helps
    // tell the Observers what happened
    for (int i= 0; i< myObs.size(); i++)
    {
        myObs[i]->update(this);
    }
}

string* Customer::getState()
{
    string *state= new string;

    // set state

    return 0l;
}

void Customer::setName(string name) {
    this->name = name;
}

void Customer::setAddress(string address) {
    this->address = address;
}

void Customer::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Customer::setEmail(string email) {
    this->email = email;
}

string Customer::getName() const {
    return name;
}

string Customer::getAddress() const {
    return address;
}

string Customer::getPhoneNumber() const {
    return phoneNumber;
}

string Customer::getEmail() const {
    return email;
}