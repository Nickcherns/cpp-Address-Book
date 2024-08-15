#include <iostream>
#include "AddressBook.h"


int main() {
    
    AddressBook myAddressBook;
    myAddressBook.addToBook("Jill", "Smith", 95848584935, "jillysmithy@aol.com");
    myAddressBook.printBook();


}