#include <iostream>
int main(void) {
    bool answer;
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    answer = ((0 <= value) && (value < 20)) || (value == 111);// insert your expression here
    std::cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << std::endl;
    return 0;
}
