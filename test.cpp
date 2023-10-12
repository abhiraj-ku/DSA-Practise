// #include <iostream>

// int main()
// {
//     int originalArray[] = {1, 2, 3, 4, 5};
//     int size = sizeof(originalArray) / sizeof(originalArray[0]);

//     int elementToDelete = 3; // The element to delete

//     for (int i = 0; i < size; i++)
//     {
//         if (originalArray[i] == elementToDelete)
//         {
//             originalArray[i] = -1; // Replace the element with a sentinel value
//             break;                 // You can stop searching once you find and replace the element
//         }
//     }

//     // Output the modified array
//     for (int i = 0; i < size; i++)
//     {
//         if (originalArray[i] != -1)
//         {

//             cout << originalArray[i] << " ";
//         }

//         cout << originalArray[i] << " ";
//     }

//     return 0;
// }

// vector approach with erase and remove idioms

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     std::vector<int> originalVector = {1, 2, 3, 4, 5};
//     int elementToDelete = 3; // The element to delete

//     // Use the erase-remove idiom to remove the element
//     originalVector.erase(std::remove(originalVector.begin(), originalVector.end(), elementToDelete), originalVector.end());

//     // Output the modified vector
//     for (const int &value : originalVector)
//     {
//         cout << value << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;
    int maxAttempts = 7;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;
    std::cout << "You have " << maxAttempts << " attempts to guess it." << std::endl;

    while (attempts < maxAttempts)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            std::cout << "Try a higher number." << std::endl;
        }
        else if (guess > secretNumber)
        {
            std::cout << "Try a lower number." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You've guessed the number (" << secretNumber << ") in " << attempts << " attempts!" << std::endl;
            break;
        }

        if (attempts == maxAttempts)
        {
            std::cout << "Sorry, you've run out of attempts. The secret number was " << secretNumber << "." << std::endl;
        }
    }

    return 0;
}
