// This file will implement the function to save frequencies and ranks to a file in the format "rank freq word"

#include <iostream>
#include "plotResults.h"

/**
 * @brief Prints the word frequencies to the standard output.
 *
 * This function takes a map of word frequencies and prints each word
 * along with its corresponding frequency to the console in the format:
 * "word: frequency".
 *
 * @param frequencies A map containing words as keys and their frequencies as values.
 */
void plotResults(const std::map<std::string, int>& frequencies) {
    for (const auto& pair : frequencies) 
    {
        std::cout << pair.first << ": " << pair.second << "\n"; // Here we print the word and its frequency
    }
}
