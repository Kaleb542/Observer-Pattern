#include "Observer.h"
#include "Customer.h"
#include "AddrVerification.h"
#include "WelcomeLetter.h"
#include "CustomerObserver.h"
#include <iostream>

int main()
{
    Customer *customer = new Customer();
    WelcomeLetter *wl = new WelcomeLetter();
    AddrVerification *av = new AddrVerification();
	CustomerObserver *co = new CustomerObserver();
    customer->attach(wl);
    customer->attach(av);
	customer->attach(co);

    // Set properties of the customer object
    customer->setName("John Smith");
    customer->setAddress("123 Main St.");
    customer->setPhoneNumber("555-1234");
    customer->setEmail("john.smith@example.com");

    // Notify the observers of a change in the customer's state
    customer->notifyObs();

    cin.get();
}
