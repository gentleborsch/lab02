#include <iostream>
#include <string>

int main() {
    std::string name;

    // Запрашиваем имя пользователя
    std::cout << "Введите ваше имя: ";
    std::cin >> name;

    // Выводим приветственное сообщение
    std::cout << "Hello world from " << name << "!" << std::endl;

    return 0;
}
