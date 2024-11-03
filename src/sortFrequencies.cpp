#include <sortFrequencies.h>
#include <vector>
#include <algorithm> // Here we included the algorithm library to use std::sort

/**
 * @brief Sorts the frequencies of words in descending order.
 *
 * This function takes a map of word frequencies and sorts them in descending order
 * based on their frequency counts. The sorted frequencies are returned as a vector of pairs,
 * where each pair contains a word and its corresponding frequency.
 *
 * @param frequencies A map containing words and their frequency counts.
 * @return A vector of pairs sorted by frequency in descending order, 
 *         where each pair consists of a word and its frequency.
 */
std::vector<std::pair<std::string, int>> sortFrequencies(std::map<std::string, int>& frequencies) // Here we implemented the sortFrequencies function
{
    std::vector<std::pair<std::string, int>> sortedFreq(frequencies.begin(), frequencies.end()); // Here we created a vector of pairs to store the sorted frequencies

    std::sort(sortedFreq.begin(), sortedFreq.end(),
              [](const auto& a, const auto& b) {
                  return b.second < a.second; // Sort by frequency in descending order
              });

    return sortedFreq; // Return the sorted vector of pairs
}
