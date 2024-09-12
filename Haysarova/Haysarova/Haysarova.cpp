#include <iostream> //библиотека дл€ работы с вводом и выводом
int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello world" << std::endl;
    char inputChar;
    std::cout << "¬ведите символ: ";
    std::cin >> inputChar;
    return 0;
}