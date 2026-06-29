#include <iostream>

#include <array>

int main(){

    std::array<int, 5> myArray = {1,2,3,4,5};

    int sum = 0; 

    for(int i = 0; i < myArray.size(); i++ ) {

        sum += myArray[i];

    }

    std::cout<< "The sum of the array is: " << sum << std::endl;

}