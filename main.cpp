#include <iostream>
#include "AddressBook.h"


void mainMenu(AddressBook myAddressBook);
void printAddressBook(AddressBook myAddressBook);
void returnToMainMenu(AddressBook myAddressBook);

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
    cout << "Enter a selection: ";

    while (!(cin >> userSelection))
    {
        cout << "Invalid Input, Please enter a valid selection...\n";
        cin.clear();
        cin.ignore(123, '\n');
    }

    switch (userSelection)
        {
        case 1:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            break;
        case 2:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            break;
        case 3:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            break;
        case 4:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            printAddressBook(myAddressBook);
            break;
        case 5:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            break;
        case 6:
            cout << "[DEBUG] User Selection: " <<  userSelection << endl;
            break;
        default:
            break;
    }
}

void printAddressBook(AddressBook myAddressBook) {
    cout << endl;
    myAddressBook.printBook();
    cout << endl;
    returnToMainMenu(myAddressBook);
}

void returnToMainMenu(AddressBook myAddressBook) {
    string enterInput;

    cout << "Hit Enter to return to the Main Menu....";
    cin >> enterInput;
    while (enterInput != "\n") {
        cout << "Please hit enter to continue.....\n";
        cin.clear();
     cin.ignore();
    }
    mainMenu(myAddressBook);
}