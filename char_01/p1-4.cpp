#include <iostream>
// int main(){
    // int sum = 0, val = 1;
    // while (val <= 10) {
    //     sum += val;
    //     ++val;
    // }
    // std::cout << "Sum of 1 to 10 is " << sum << std::endl;
    // return 0;
// }

// int main(){
//     int sum = 0;
//    for (int val = 1; val <= 10; ++val){
//         sum += val;
//     }
//     std::cout << "Sum of 1 to 10 is " << sum << std::endl;
//     return 0;
// }

// int main(){
//     int sum = 0, value = 0;
//     while (std::cin >> value){
//         sum += value;
//     }
//     std::cout << "Sum is " << sum << std::endl;
//     return 0;
// }

int main(){
    int currVal = 0, val = 0;
    if (std::cin >> currVal){
        int cnt = 1;
        while (std::cin >> val){
            if (val == currVal){
                ++cnt;
            } else {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}

// ex_1.9
// int main(){
//     int sum = 0;
//     // while loop
//     int val = 50;
//     while (val <= 100) {
//         sum += val;
//         ++val;
//     }
//     // for loop
//     for (int val = 50; val <= 100; ++val){
//         sum += val;
//     }
//     std::cout << "Sum of 50 to 100 is " << sum << std::endl;
//     return 0;
// }

// // ex_1.10
// int main(){
//     // while loop
//     int val = 10;
//     while (val >= 0) {
//         std::cout <<  val << std::endl;
//         --val;
//     }
//     // for loop
//     for (int val = 10; val >= 0; --val){
//         std::cout <<  val << std::endl;
//     }
//     return 0;
// }

// // ex_1.11 + ex_1.19
// int main(){
//     std::cout << "Enter two numbers: " << std::endl;
//     int begin = 0, end = 0, sum = 0, val = 0;
//     std::cin >> begin;
//     std::cin >> end;

//     if (begin < end) {
//         val = begin;
//     } else {
//         val = end;
//         end = begin;
//         begin = val;
//     }
//     // while loop
//     while (val <= end) {
//         sum += val;
//         ++val;
//     }
//     // for loop
//     for (val; val <= end; ++val){
//         sum += val;
//     }
//     std::cout << "Sum of " << begin <<" to " << end << " is " << sum << std::endl;
//     return 0;
// }

// ex_1.12
// int main(){
//     int sum = 0;
//    for (int i = -100; i <= 100; ++i){
//         sum += i;
//     }
//     std::cout << "Sum of -100 to 100 is " << sum << std::endl; // sum = 0
//     return 0;
// }