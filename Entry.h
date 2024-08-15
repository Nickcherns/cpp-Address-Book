#include <iostream>

#ifndef ENTRY_H
#define ENTRY_H

using namespace std;

class Entry {
    public:

        string firstName;
        string lastName;
        int phoneNumber;
        string emailAddress;

        Entry(string name1, string name2, int number, string email) : 
            firstName{name1}, 
            lastName{name2}, 
            phoneNumber{number}, 
            emailAddress{email} { }

        void displayEntry() {
            cout << "First Name: " << firstName << endl
                 << "Last Name: " << lastName << endl
                 << "Phone Number: " << phoneNumber << endl
                 << "Email: " << emailAddress;
        }

        void addEntry(string name1, string name2, int number, string email) { 
            firstName = name1;
            lastName = name2;
            phoneNumber = number;
            emailAddress = email;
        }
};

#endif