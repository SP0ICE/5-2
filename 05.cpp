#include <iostream>

class LogElement {
public:
    int input1;
    int input2;
    int output;

    LogElement(int in1, int in2, int out) : input1(in1), input2(in2), output(out) {}
};

int main() {
    LogElement elem(1, 0, 0);
    std::cout << "Input 1: " << elem.input1 << std::endl;
    std::cout << "Input 2: " << elem.input2 << std::endl;
    std::cout << "Output: " << elem.output << std::endl;
    return 0;
}