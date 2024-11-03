#include "gtest/gtest.h"
#include "readBook.h"
#include "computeWordFrequency.h"
#include "countUniqueWords.h"
#include "hapaxLegomenon.h"
#include "sortFrequencies.h"
#include "plotResults.h"

// Test for readBook
TEST(ReadBookTest, ReadsBookCorrectly) {
    // Adjust the filename to the correct path of the text file
    std::string filename = "C:\\Users\\ThinkBook\\OneDrive\\Desktop\\School\\Y3S1\\Computer Programming\\Session 17\\pg2701.txt"; 

    std::vector<std::string> words;

    std::string result = readBook(filename);
    bool success = !result.empty();

    EXPECT_TRUE(success);
    
    // Split the result into words and populate the words vector
    std::istringstream iss(result);
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    EXPECT_GT(words.size(), 0);  // Ensure words were read
}

// Test for computeWordFrequency
TEST(ComputeWordFrequencyTest, ComputesCorrectFrequencies) {
    std::vector<std::string> words = {"hello", "world", "hello"};
    std::map<std::string, int> frequencyMap;

    std::string text = "hello world hello";
    frequencyMap = computeWordFrequency(text);

    EXPECT_EQ(frequencyMap["hello"], 2);
    EXPECT_EQ(frequencyMap["world"], 1);
}

// Test for countUniqueWords
TEST(CountUniqueWordsTest, CountsUniqueWordsCorrectly) {
    std::map<std::string, int> frequencyMap = {{"hello", 2}, {"world", 1}};
    int uniqueWordCount = countUniqueWords(frequencyMap);

    EXPECT_EQ(uniqueWordCount, 2);  // Adjust expected value to 2
}

// Test for hapaxLegomenon
TEST(HapaxLegomenonTest, IdentifiesHapaxCorrectly) {
    std::map<std::string, int> frequencyMap = {
        {"word1", 1},
        {"word2", 2},
        {"word3", 1},
        {"word4", 3}
    };
    
    int expectedCount = 2; // Only "word1" and "word3" should be hapax legomena
    int hapaxCount = hapaxLegomenon(frequencyMap);
    
    EXPECT_EQ(hapaxCount, expectedCount);
}

// Test for sortFrequencies
TEST(SortFrequenciesTest, SortsCorrectly) {
    std::map<std::string, int> frequencyMap = {{"hello", 1}, {"world", 3}, {"test", 2}};
    std::vector<std::pair<std::string, int>> sortedFrequencies;

    sortedFrequencies = sortFrequencies(frequencyMap);

    ASSERT_EQ(sortedFrequencies.size(), 3);
    EXPECT_EQ(sortedFrequencies[0].first, "world");
    EXPECT_EQ(sortedFrequencies[1].first, "test");
    EXPECT_EQ(sortedFrequencies[2].first, "hello");
}

// Test for plotResults
TEST(PlotResultsTest, PlotsWithoutError) {
    std::map<std::string, int> frequencies = {{"word1", 5}, {"word2", 3}, {"word3", 2}};

    // Call plotResults without assigning to a bool
    plotResults(frequencies);

    // Assuming no errors occur if plotResults completes
    EXPECT_TRUE(true);
}

// Main function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
