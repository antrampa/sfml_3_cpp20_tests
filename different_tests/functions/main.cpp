#include <iostream>
#include <array>

std::array<int, 5> CreateMultiples(int n);

int main() {
    int n = 5;
    std::cout << "The 5 multiples of " << n << " are: \n";
    std::array<int, 5> mAr = CreateMultiples(n);
    for(const int r : mAr){
        std::cout << "\t" << r << "\n"; 
    }
    std::cout << "Done \n"; 
}

std::array<int, 5> CreateMultiples(int n) {
    std::array<int, 5> result;
    for(int i=0; i < result.size(); i++) {
        result[i] = n * (i + 1);
    }

    return result;
}
