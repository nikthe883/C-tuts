#include <iostream>

int main(){
    // type conversion 
    //implicit = automatic
    // explicit precede value with new data type

    double x = (int)  3.14;
    std::cout << x << "\n";
    std::cout << (char) 100 << "\n";
    
    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;
    std::cout << score << "\n";
    
    return 0;
}