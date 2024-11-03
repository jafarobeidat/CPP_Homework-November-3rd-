#include <hapaxLegomenon.h>
#include <vector>

/**
 * @brief Counts the number of hapax legomena in a given frequency map.
 *
 * A hapax legomenon is a word that appears only once in a given context.
 *
 * @param frequencies A map containing words as keys and their corresponding frequencies as values.
 * @return The count of hapax legomena found in the frequency map.
 */
int hapaxLegomenon(const std::map<std::string, int>& frequencies)
{   
    int count = 0; // Count of hapax legomena
    for (const auto& pair : frequencies) // Loop through the map of frequencies
    {
        if (pair.second == 1) // Check if frequency of the word is 1
            ++count; // Increment count
    }
    return count; // Return the count of hapax legomena
}
