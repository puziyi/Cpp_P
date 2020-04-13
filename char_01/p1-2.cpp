#include <iostream> // header
// 4个IO对象：cin, cout, cerr, clog
int main() {
    std::cout << "Hello, World" << std::endl; // ex_1.3
    std::cout << "Enter two numbers: " << std::endl;
    // 写入endl的效果是结束当前行，并将关联的缓冲区buffer刷新
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl; //ex_1.4

    /*
     * ex_1.5
     * std::cout << "The product of ";
     * std::cout << v1;
     * std::cout << " and ";
     * std::cout << v2;
     * std::cout << " is ";
     * std::cout << v1 * v2;
     * std::cout << std::endl;
     */

    // ex_1.6: error: expected primary-expression before ‘<<’ token
    // std::cout << "The sum of ";
    // << v1;
    // << " and ";
    // << v2;
    // << " is ";
    // << v1 + v2;
    // << std::endl;

    // ex_1.8
    // std::cout << "/*";
    // std::cout << "*/";
    // std::cout << /* "/*" */;
    // std::cout << /* "*/" /* "/*" */;
    return 0;
}