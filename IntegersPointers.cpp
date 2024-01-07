#include <iostream>

int main() {
    int value1, value2, value3;

    
    std::cout << "Enter three integer values:\n";
    std::cin >> value1 >> value2 >> value3;

    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    std::cout << "\nValues and Pointers:\n";
    std::cout << "Value 1: " << value1 << ", Pointer 1: " << *ptr1 << "\n";
    std::cout << "Value 2: " << value2 << ", Pointer 2: " << *ptr2 << "\n";
    std::cout << "Value 3: " << value3 << ", Pointer 3: " << *ptr3 << "\n";

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
