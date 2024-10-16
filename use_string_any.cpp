#include <iostream>
#include <any>
#include <vector>
#include <string>

int main() {
    // 创建一个 std::vector<std::any>，并向其中添加 std::string 元素
    std::vector<std::any> anyVector;
    anyVector.push_back(std::string("first"));
    anyVector.push_back(std::string("second"));
    anyVector.push_back(std::string("third"));
    anyVector.push_back(std::string("fourth"));

    // 从 std::vector<std::any> 中提取并打印 std::string 元素
    for (const auto& element : anyVector) {
        try {
            // 使用 std::any_cast 提取 std::string
            const std::string& value = std::any_cast<std::string>(element);
            std::cout << value << std::endl;
        } catch (const std::bad_any_cast& e) {
            std::cout << "Failed to cast std::any to std::string: " << e.what() << std::endl;
        }
    }

    return 0;
}
