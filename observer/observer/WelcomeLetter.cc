#include "WelcomeLetter.h"
#include <iostream>
using namespace std;

WelcomeLetter::WelcomeLetter(void)
{
}

WelcomeLetter::~WelcomeLetter(void)
{
}

void WelcomeLetter::update( Customer *myCust)
{
   // do Welcome Letter stuff 
   // here can get more 
   // information about customer 
   // in question by using myCust
   cout<<"in welcome letter updates:"<<endl;

   cout << "Dear " << myCust->getName() << "," << endl;
   cout << "Welcome to our store! We are thrilled to have you as a customer." << endl;
   cout << "Your address is: " << myCust->getAddress() << endl;
   cout << "Your phone number is: " << myCust->getPhoneNumber() << endl;
   cout << "Your email address is: " << myCust->getEmail() << endl;
   cout << "Thank you for choosing us, and we look forward to serving you.\n" << endl;
}
