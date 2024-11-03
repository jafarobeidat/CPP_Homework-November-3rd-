#include <iostream>
#include <readBook.h>
#include <computeWordFrequency.h>
#include <countUniqueWords.h>
#include <hapaxLegomenon.h>
#include <sortFrequencies.h>
#include <plotResults.h>

/**
 * @brief Main function for the Zipf's Law Analyzer.
 *
 * This function serves as the entry point for the Zipf's Law Analyzer application.
 * It performs the following tasks:
 * 1. Reads the text from a specified file.
 * 2. Computes the frequency of each word in the text.
 * 3. Counts the number of unique words.
 * 4. Counts hapax legomena (words that appear only once).
 * 5. Sorts the word frequencies.
 * 6. Plots the results of word frequencies.
 * 7. Prints the number of unique words and hapax legomena to the console.
 *
 * @return Exit status of the program (0 for success).
 */
int main()
{
    std::cout << "Welcome to this Zipf's Law Analyzer!\n Implemented by Jafar Obeidat\n";

    auto text = readBook("pg2701.txt"); // Here we read the book from the file
    auto frequencies = computeWordFrequency(text);
    auto uniqueWords = countUniqueWords(frequencies);
    int hapacCount = hapaxLegomenon(frequencies);
    sortFrequencies(frequencies);
    plotResults(frequencies);

    std::cout << "Unique words: " << uniqueWords << "\n";  
    std::cout << "Hapax Legomena: " << hapacCount << "\n";

    return 0; // Return success
}
