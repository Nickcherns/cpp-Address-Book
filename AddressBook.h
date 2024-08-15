#include <iostream>
#include "Entry.h"
#include <vector>

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

using namespace std;

class AddressBook {
    
    public:
        vector<Entry> entryList;
        
        AddressBook() {
            Entry entry1("John", "Smith", 594954595, "j.smith@gmail.com");
            entryList.push_back(entry1);
        }

        void addToBook(string firstName, string lastName, int phoneNumber, string email) {
            Entry addressBookEntry(firstName, lastName, phoneNumber, email);
            entryList.push_back(addressBookEntry);
        };

        void printBook() {
            cout << "-----------------------------------" << endl;
            for (int i = 0; i < entryList.size(); ++i) {
                cout << "First name: " << entryList[i].firstName << endl;
                cout << "Last name: " << entryList[i].lastName << endl;
                cout << "Phone Number: " << entryList[i].phoneNumber << endl;
                cout << "Email Address: " << entryList[i].emailAddress << endl;
                cout << "-----------------------------------" << endl;
            }
            

        }

};

#endif