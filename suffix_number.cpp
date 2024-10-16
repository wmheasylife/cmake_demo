#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string input = "FixedString(10)";

    // 定义正则表达式以匹配括号内的数字
    std::regex pattern(R"(\((\d+)\))");

    
    if (std::regex_search(input, matches, pattern)) {
        // 提取并转换为整数
        int number = std::stoi(matches[1].str());
        std::cout << "Extracted number: " << number << std::endl;
    } else {
        std::cout << "No number found in the string." << std::endl;
    }

    return 0;
}


