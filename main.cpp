#include <iostream>
#include "AddressBook.h"


void mainMenu(AddressBook myAddressBook);

int main() {
    
    AddressBook myAddressBook;
    myAddressBook.addToBook("Jill", "Smith", 95848584935, "jillysmithy@aol.com");
    myAddressBook.printBook();
    cout << endl << endl << endl;

    mainMenu(myAddressBook);

}


void mainMenu(AddressBook myAddressBook) {

    int userSelection;

    cout << "\tWelcome to the Address Book" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "\t1. Add an Entry" << endl;
    cout << "\t2. Remove an Entry" << endl;
    cout << "\t3. Search for an Entry" << endl;
    cout << "\t4. Print the Address Book" << endl;
    cout << "\t5. Clear Address Book" << endl;
    cout << "\t6. Quit" << endl;
    cout << "----------------------------------------------" << endl << endl;


    while (cin >> userSelection)
    {
        switch (userSelection)
        {
        case 1:
            cout << "User Selection: " <<  userSelection << endl;
            break;
        case 2:
            cout << "User Selection: " <<  userSelection << endl;
            break;
        case 3:
            cout << "User Selection: " <<  userSelection << endl;
            break;
        case 4:
            cout << "User Selection: " <<  userSelection << endl;
            myAddressBook.printBook();
            break;
        case 5:
            cout << "User Selection: " <<  userSelection << endl;
            break;
        case 6:
            cout << "User Selection: " <<  userSelection << endl;
            break;
        default:
            break;
        }
    }
    


}