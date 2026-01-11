//! Lance the Doxygen file comment Her (in NVIM - `SPACE+d+h`)

//? Include prototype declaration part
#include <cctype>
#include <iostream>
#include <vector>

//? Function(s)/Class(es) prototype dev part
class Solution {
private:
  const std::vector<std::string> americanKeyboard = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

public:
  /**
   * @brief         Return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below
   * @details       Words[i] consists of English letters (both lowercase and uppercase).
   * @param   words {std::vector<std::string>> &}
   * @return        {std::vector<std::string>>}
   */
  std::vector<std::string> findWords(std::vector<std::string> &words) {
    std::vector<std::string> result;
    for (const std::string &word : words) {
      size_t indecator{};
      while (indecator < 3) {
        if (americanKeyboard[indecator].find(std::tolower(word[0])) != std::string::npos)
          break;
        indecator++;
      }
      bool is_americanKeyboard(true);
      for (const char &c : word)
        if (americanKeyboard[indecator].find(std::tolower(c)) == std::string::npos) {
          is_americanKeyboard = false;
          break;
        }
      if (is_americanKeyboard)
        result.push_back(word);
    }
    return result;
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
