#include <iostream>
#include "DynamicList.h"   // include your class

int main() {
    DynamicList list;

    // Add some items
    std::cout << "Appending values...\n";
    for (int i = 1; i <= 10; i++) {
        list.append(i);
        std::cout << "Added " << i 
                  << " (size: " << list.getSize() << ")\n";
    }

    // Get some values
    std::cout << "\nValues in the list:\n";
    for (int i = 0; i < list.getSize(); i++) {
        std::cout << list.get(i) << " ";
    }
    std::cout << "\n";

    // Remove an element
    std::cout << "\nRemoving element at index 3...\n";
    list.removeAt(3);

    // Print again
    std::cout << "After removal:\n";
    for (int i = 0; i < list.getSize(); i++) {
        std::cout << list.get(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
