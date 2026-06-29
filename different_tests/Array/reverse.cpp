#include <iostream>

#include <array>

void printArray(const std::array<int, 10> &arr) {
    for(int i = 0; i<arr.size(); i++){
        std::cout<< "Array [" << i << "]: " << arr[i] << " \n";
    }
}

int main(){

    std::array<int, 10> myArray = {87,45,34,45,10,45,99,1,32,10};
    std::array<int, 10> myReverseArray = {};
    myReverseArray.fill(1);

    std::cout<< "The original array is: \n";
    printArray(myArray);

    int j=0;
    for(int i = myArray.size()-1; i >= 0; i-- ) {
        myReverseArray[j] = myArray[i];
        j++;
    }
    myReverseArray[0] = myArray[9];

    std::cout<< "The reversed array is: \n";
    printArray(myReverseArray);

}