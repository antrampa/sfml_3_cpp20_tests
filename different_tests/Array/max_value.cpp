#include <iostream>

#include <array>

int main(){

    std::array<int, 10> myArray = {87,45,34,45,10,45,99,1,32,10};

    int sum = 0; 
    int max_value = myArray[0];

    for(int i = 0; i < myArray.size(); i++ ) {

        if(max_value < myArray[i]){
            max_value = myArray[i];
        }
    }

    std::cout<< "The Max Value of the array is: " << max_value << std::endl;

}