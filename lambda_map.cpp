#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    };



    auto printMap = [](const auto& map) {
        for (const auto& [key, value] : map) {
            std::cout << key << ": " << value << std::endl;
        }
    };

    // 调用 lambda 并传递 map
    printMap(myMap);

    return 0;
}
