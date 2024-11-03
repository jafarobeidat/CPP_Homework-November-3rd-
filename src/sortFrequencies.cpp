#include <vector>
#include <algorithm>
#include "sortFrequencies.h"

/**
 * @brief Sorts the word-frequency pairs in descending order of frequency.
 *
 * This function creates a copy of the frequency data and sorts it using
 * the standard sort algorithm.
 *
 * @param frequencies A vector of pairs containing words and their frequencies.
 * @return A sorted vector of pairs in descending order of frequency.
 */
std::vector<std::pair<std::string, int>> sortFrequencies(const std::vector<std::pair<std::string, int>>& frequencies) {
    std::vector<std::pair<std::string, int>> sortedFreq = frequencies; // Create a copy of frequencies

    std::sort(sortedFreq.begin(), sortedFreq.end(),
              [](const auto& a, const auto& b) {
                  return b.second < a.second; // Sort in descending order of frequency
              });

    return sortedFreq; // Return the sorted vector
}
