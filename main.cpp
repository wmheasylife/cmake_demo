#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    // 打开 CSV 文件进行写入
    std::ofstream csv_file("output.csv");

    if (!csv_file.is_open()) {
        std::cerr << "无法打开文件" << std::endl;
        return 1;
    }

    // 写入 CSV 文件表头
    csv_file << "Name, Age, Score" << std::endl;

    // 一些示例数据
    std::vector<std::tuple<std::string, int, double>> data = {
        {"Alice", 30, 90.5},
        {"Bob", 25, 85.0},
        {"Charlie", 22, 78.2}
    };

    // 逐行写入数据
    for (const auto& row : data) {
        csv_file << std::get<0>(row) << "," 
                 << std::get<1>(row) << "," 
                 << std::get<2>(row) << std::endl;
    }

    // 关闭文件
    csv_file.close();

    std::cout << "CSV 文件已生成。" << std::endl;

    return 0;
}
