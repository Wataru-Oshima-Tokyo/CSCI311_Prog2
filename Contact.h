/** @file Contact.h */

#ifndef CONTACT_
#define CONTACT_

#include <iostream>
#include <fstream>
#include "string_tools.h"
using namespace std;

class Contact {
    private:
    string first_name;
    string last_name;
    int dob;
};

ifstream ContactsFile;
ContactsFile.open("contacts-1.txt");

// store contactslists data into contacts_vector
string line;
Contact mycontact;

if (ContactsFile) {
      // cout << " File is open" << endl;
   while( getline(ContactsFile, line) ) {
      // cout << line << endl;
      split(line, ',');
      cout << line;
   }
}
ContactsFile.close();

// multimap(lastname, index of contacts_vector)


#endif
