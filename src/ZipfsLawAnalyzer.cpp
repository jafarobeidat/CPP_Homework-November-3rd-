#include <iostream>
#include <readBook.h>
#include <computeWordFrequency.h>
#include <countUniqueWords.h>
#include <hapaxLegomenon.h>
#include <sortFrequencies.h>
#include <plotResults.h>

/**
 * @brief Main function to analyze Zipf's Law from a text file.
 *
 * This program reads a text file, computes word frequencies, counts unique words,
 * finds hapax legomena, sorts frequencies, and plots the results.
 *
 * @return Exit status of the program.
 */
int main() {
    std::cout << "Welcome to this Zipf's Law Analyzer!\n Implemented by Jafar Obeidat\n";

    auto text = readBook("pg2701.txt"); // Read the book from the file
    auto frequencies = computeWordFrequency(text); // Compute word frequencies
    auto uniqueWordsCount = countUniqueWords(frequencies); // Count unique words
    int hapaxCount = hapaxLegomenon(frequencies); // Count hapax legomena
    auto sortedFrequencies = sortFrequencies(frequencies); // Sort frequencies
    std::map<std::string, int> sortedFrequenciesMap(sortedFrequencies.begin(), sortedFrequencies.end());
    plotResults(sortedFrequenciesMap); // Plot results

    std::cout << "Unique words: " << uniqueWordsCount << "\n";  
    std::cout << "Hapax Legomena: " << hapaxCount << "\n";

    return 0;
}
