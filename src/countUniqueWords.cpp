#include <vector>
#include <set>
#include "countUniqueWords.h"

/**
 * @brief Counts the number of unique words from the frequency data.
 *
 * This function utilizes a set to store unique words, which ensures
 * that each word is counted only once.
 *
 * @param frequencies A vector of pairs containing words and their frequencies.
 * @return The number of unique words.
 */
int countUniqueWords(const std::vector<std::pair<std::string, int>>& frequencies) {
    std::set<std::string> uniqueWords; // Set to store unique words
    for (const auto& pair : frequencies) {
        uniqueWords.insert(pair.first); // Insert words into the set
    }
    return uniqueWords.size(); // Return the size of the set, representing unique words
}
