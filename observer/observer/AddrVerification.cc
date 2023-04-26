#include "AddrVerification.h"
#include <iostream>
using namespace std;

AddrVerification::AddrVerification() {}

void AddrVerification::update(Customer* customer) {
    verifyAddress(customer);
}

void AddrVerification::verifyAddress(Customer* customer) {
    cout<<"in AddrVerification updates:"<<endl;

    cout << "Verifying address for customer: " << customer->getName() << endl;
    cout << "Address: " << customer->getAddress() << endl;
    cout << "Phone number: " << customer->getPhoneNumber() << endl;
    cout << "Email: " << customer->getEmail() << endl;
    cout << "Address has been verified.\n" << endl;
}

