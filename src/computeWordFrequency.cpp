#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include "computeWordFrequency.h"

/**
 * @brief Computes the frequency of each word in the given text.
 *
 * This function reads words from the input text, counts their occurrences,
 * and stores the results in a vector of pairs.
 *
 * @param text The input text as a string.
 * @return A vector of pairs, each containing a word and its frequency.
 */
std::vector<std::pair<std::string, int>> computeWordFrequencyFromText(const std::string& text) {
    std::vector<std::pair<std::string, int>> frequencyVector; // Vector to store word-frequency pairs
    std::stringstream ss(text); // Stringstream to extract words
    std::string word;

    // Extract words from the text
    while (ss >> word) {
        // Find if the word is already in the vector
        auto it = std::find_if(frequencyVector.begin(), frequencyVector.end(), [&word](const auto& pair) {
            return pair.first == word; // Check if word exists
        });

        if (it != frequencyVector.end()) {
            // If found, increment the frequency
            ++it->second;
        } else {
            // If not found, add a new pair with frequency 1
            frequencyVector.emplace_back(word, 1);
        }
    }

    return frequencyVector; // Return vector of word-frequency pairs
}
