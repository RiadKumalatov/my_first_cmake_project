#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "������� ���: ";
    std::getline(std::cin, name);
    std::cout << "������������, " << name << "!" << std::endl;
    return 0;
}
