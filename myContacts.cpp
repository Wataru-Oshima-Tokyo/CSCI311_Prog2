#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "Database.h"
#include "string_tools.h"
#include "Contact.h"
#include "ContactList.h"
using namespace std;




int main() {

   /* Type your code here. */
ifstream ContactsFile;
ContactsFile.open("contacts-1.txt");

// store contactslists data into contacts_vector
string line;
vector<string> contacts_vector;
if (ContactsFile) {
      // cout << " File is open" << endl;
   while( getline(ContactsFile, line) ) {
      // cout << line << endl;
      vector<string> temp;
      temp = split(line, ',');
      for(int i=0; i<temp.size(); i++){
         cout << temp[i] <<endl;
      }
//       cout << line;
      // contacts_vector.push_back(line);
   }
}
ContactsFile.close();

// // multimap(lastname, index of contacts_vector)




   return 0;
}
