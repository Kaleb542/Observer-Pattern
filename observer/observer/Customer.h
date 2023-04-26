#pragma once
#include <stdio.h>
#include <string>
#include <vector>
#include "Observer.h"
using namespace std;

class Customer
{
public:
    Customer(void);
    void attach( Observer *myObserver);
    void detach( Observer *myObserver);
    string* getState();
    void notifyObs();
    void setName(string name);
    void setAddress(string address);
    void setPhoneNumber(string phoneNumber);
    void setEmail(string email);
    string getName() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getEmail() const;
private:
    vector<Observer*> myObs;
    string name;
    string address;
    string phoneNumber;
    string email;
public:
    ~Customer(void);
};
