// This file will implement int countUniqueWords(const std::vector<char>& book);
// This function should insert each unique word into a std::set to count unique entries.

#include "countUniqueWords.h"

/**
 * @brief Counts the number of unique words in the provided frequency map.
 *
 * This function determines the number of unique words by checking the size
 * of the frequency map. Each unique word corresponds to an entry in the map.
 *
 * @param frequencies A map containing words as keys and their corresponding frequencies as values.
 * @return The count of unique words represented by the number of entries in the frequency map.
 */
int countUniqueWords(const std::map<std::string, int>& frequencies)
{
    return frequencies.size(); // Here we return the size of the map, which represents the number of unique words
}
