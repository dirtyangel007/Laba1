#include <iostream>
#include <string>
#include <cctype>  // Для std::toupper и std::tolower

// Функция для преобразования строки в верхний регистр
std::string toUpperCase(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        input[i] = std::toupper(input[i]);
    }
    return input;
}

// Функция для преобразования строки в нижний регистр
std::string toLowerCase(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        input[i] = std::tolower(input[i]);
    }
    return input;
}

int main()
{
    std::string userInput;

    // Запрашиваем у пользователя ввод строки
    std::cout << "Vvedite stroky: ";
    std::getline(std::cin, userInput);

    // Преобразуем в верхний регистр
    std::string upper = toUpperCase(userInput);
    std::cout << "Verhniy registr: " << upper << std::endl;

    // Преобразуем в нижний регистр
    std::string lower = toLowerCase(userInput);
    std::cout << "Nigniy registr: " << lower << std::endl;

    return 0;
}
//comment 
