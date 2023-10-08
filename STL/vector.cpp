#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);

    // Access elements using indexing
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;

    // Use range-based for loop to iterate through elements
    std::cout << "Elements in vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Get size and capacity
    std::cout << "Size of vector: " << numbers.size() << std::endl;
    std::cout << "Capacity of vector: " << numbers.capacity() << std::endl;

    // Resize the vector
    numbers.resize(5); // Resize to 5 elements
    std::cout << "After resizing to 5 elements, size: " << numbers.size() << std::endl;

    // Insert an element at a specific position
    numbers.insert(numbers.begin() + 2, 20); // Insert 20 at index 2

    // Erase an element
    numbers.erase(numbers.begin() + 1); // Erase element at index 1

    // Use pop_back to remove the last element
    numbers.pop_back();

    // Display final vector
    std::cout << "Final elements in vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
