#include <iostream> //���������� ��� ������ � ������ � �������
int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello world" << std::endl;
    char inputChar;
    std::cout << "������� ������: ";
    std::cin >> inputChar;
    return 0;
}