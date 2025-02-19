#include <iostream>

int main() {
    double width, height, area;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;
    area = width * height;
    std::cout << "The area of the rectangle is: " << area << std::endl;
    return 0;
}

