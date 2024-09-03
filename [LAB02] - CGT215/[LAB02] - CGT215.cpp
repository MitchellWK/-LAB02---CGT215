#include <iostream>

using namespace std;
int main()
{
    std::cout << "Hello CGT 215! My name is Mitchell, and this is my Lab 02 file\n";
    std::cout << "Ax + B = 0" << endl;
    std::cout << "Solve for X" << endl;
    float A;
    float B;
    float X{};
    std::cout << "Please enter a value for A: "; cin >> A;
    std::cout << "Please enter a value for B: ";  cin >> B;
    X = -B / A;
    std::cout << "Solving for x. . ." << endl;

    std::cout << "The Answer is:" << endl;
    cout << "X=" << X << endl;

}
