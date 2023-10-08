#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);
    numbers.push_back(18);
    numbers.push_back(20);
    numbers.reserve(4);
    numbers.shrink_to_fit();

    // Access elements using indexing
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] <<endl;

    // Use range-based for loop to iterate through elements
    cout << "Elements in vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Get size and capacity
    cout << "Size of vector: " << numbers.size() << endl;
    cout << "Capacity of vector: " << numbers.capacity() << endl;

    // Resize the vector
    numbers.resize(5); // Resize to 5 elements
    cout<< "After resizing to 5 elements, size: " << numbers.size() <<endl;

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
   cout <<endl;

    return 0;
}
