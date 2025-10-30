// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// Your solution must use only constant extra space.

#include <vector>
#include <iostream>
#include <string>    // Required for std::string and std::getline
#include <sstream>   // Required for std::istringstream
#include <limits>    // Required for std::numeric_limits

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int current_sum = numbers[left] + numbers[right];

            if (current_sum == target) {
                return {left + 1, right + 1};
            } else if (current_sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {}; 
    }
};

void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

int main() {
    Solution sol;
    std::vector<int> numbers;
    int target;
    std::string line;
    int num;

    // --- Input for numbers array ---
    std::cout << "Enter the numbers for the array, separated by spaces (e.g., 2 7 11 15): ";
    std::getline(std::cin, line); // Read the entire line of input

    std::istringstream iss(line); // Create a string stream from the input line
    while (iss >> num) { // Read numbers from the string stream one by one
        numbers.push_back(num);
    }

    if (numbers.size() < 2) {
        std::cout << "Error: Please enter at least two numbers for the array." << std::endl;
        return 1; // Exit with an error code
    }

    // --- Input for target number ---
    std::cout << "Enter the target number: ";
    while (!(std::cin >> target)) { // Loop until valid integer input is received
        std::cout << "Invalid input. Please enter an integer for the target: ";
        std::cin.clear(); // Clear the error flags
        // Discard invalid input up to the newline character
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    // Consume the remaining newline character after reading the target integer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::vector<int> result = sol.twoSum(numbers, target);

    std::cout << "\n--- Result ---" << std::endl;
    std::cout << "Input numbers: ";
    printVector(numbers);
    std::cout << ", Target: " << target << std::endl;
    std::cout << "Output indices: ";
    printVector(result);
    std::cout << std::endl;

    return 0;
}
