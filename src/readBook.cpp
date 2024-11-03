#include <fstream>
#include <sstream>
#include <iostream>
#include "readBook.h"

/**
 * @brief Reads the contents of a book from a file.
 *
 * This function attempts to open a specified file and read its contents.
 * If the file is opened successfully, the contents are returned as a string.
 * If the file cannot be opened, an error message is printed to the standard error.
 *
 * @param filename The name of the file to be read.
 * @return A string containing the contents of the file, or an empty string if the file could not be opened.
 */
std::string readBook(const std::string& filename) {
    std::ifstream file(filename); // Open the file
    if (!file.is_open()) { // Check if the file was opened successfully
        std::cerr << "Could not open the file: " << filename << std::endl;
        return ""; // Return empty string if file can't be opened
    }

    std::stringstream buffer; // Create a stringstream object to store the contents of the file
    buffer << file.rdbuf(); // Read the contents of the file into the stringstream object
    return buffer.str(); // Return the contents of the file as a string
}
