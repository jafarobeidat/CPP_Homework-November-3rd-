#include <vector>
#include "hapaxLegomenon.h"

/**
 * @brief Counts the number of hapax legomena in the frequency data.
 *
 * A hapax legomenon is a word that appears exactly once in the text.
 *
 * @param frequencies A vector of pairs containing words and their frequencies.
 * @return The count of hapax legomena.
 */
int hapaxLegomenon(const std::vector<std::pair<std::string, int>>& frequencies) {
    int count = 0; // Count of hapax legomena
    for (const auto& pair : frequencies) { // Iterate through the vector of frequencies
        if (pair.second == 1) { // Check if frequency of the word is 1
            ++count; // Increment count
        }
    }
    return count; // Return the count of hapax legomena
}
