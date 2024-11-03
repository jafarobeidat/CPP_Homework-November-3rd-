// This file will include implementation of std::map<std::string, int> computeWordFrequency(const std::vector<char>& book);
// This function will take the character vector from readBook, use std::stringstream to extract words, and store each word's count in a map.
// We will use std::map to store words with their counts, making it easier to later sort and retrieve data.

#include <map>
#include <string>
#include <sstream>
#include <computeWordFrequency.h>

/**
 * @brief Computes the frequency of words in the provided text.
 *
 * This function takes a string of text, extracts words using a stringstream, 
 * and counts the occurrences of each word. The results are stored in a map,
 * where each key is a word, and the corresponding value is its frequency.
 *
 * @param text A string containing the text from which to compute word frequencies.
 * @return A map containing words as keys and their corresponding frequencies as values.
 */
std::map<std::string, int> computeWordFrequency(const std::string& text)
{
    std::map<std::string, int> frequencyMap; // Here we created a map to store the frequency of each word
    std::stringstream ss(text); // Here we created a stringstream object to store the contents of the text
    std::string word; // Here we created a string to store each word

    while (ss >> word) // Here we loop through the stringstream object to extract each word
    {
        ++frequencyMap[word]; // Here we increment the frequency of the word in the map
    }
    return frequencyMap; // Here we return the map containing the frequency of each word
}
