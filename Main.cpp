#include <iostream>
#include<cstring>
#include<sstream>

void Print(const char* arr)
{
    for (int i = 0; i < 9; i++)
            std::cout << arr[i] << ' ';
}

// Задача 1
void Delete(int a, const char* arr)
{
    for (int i = 0; i < 9; i++)
        if (arr[i] != arr[a])
            std::cout << arr[i] << ' ';

}

// Задача 2
void Delete2(char a, const char* arr)
{
    for (int i = 0; i < 9; i++)
        if (arr[i] != a)
            std::cout << arr[i] << ' ';

}

// Задача 3
std::string Replacement(std::string str, char ch, size_t pos) 
{
    str.insert(pos, 1, ch);
    return str;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    // Задача 1
    char arr[] = { "\0!%&ih$#@" };
    std::cout << "Задача 1\n";
    std::cout << "Дана строка с символами\n";
    Print(arr);
    std::cout << "Введите номер символа и он удалится\n";
    int a;
    std::cin >> a;
    Delete(a, arr);
    std::cout << "\n";

    // Задача 2
    std::cout << "Задача 2\n";
    std::cout << "Дана строка с символами\n";
    Print(arr);
    std::cout << "Введите символ и он удалится\n";
    char b;
    std::cin >> b;
    Delete2(b, arr);
    std::cout << "\n";

    // Задача 3
    std::cout << "Задача 3\n";
    std::string String = "Hello, world!";
    std::string modifiedString = Replacement(String, 'X', 1);
    std::cout << modifiedString << std::endl;

    // Задача 4
    std::cout << "Задача 4\n";
    std::cout << "Введите любой текст. Программа заменит все символы точки «.» в строке, на символы восклицательного знака «!».\n";
    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);
    for (char& c : text) 
    {
        if (c == '.') {
            c = '!';
        }
    }
    std::cout << "Измененная строка: " << text << std::endl;

    // Задача 5
    std::cout << "Задача 5\n";
    std::cout << "Введите любой текст и символ. Программа посчитает сколько раз символ встречался в строке.\n";
    std::string text1;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text1);
    std::cout << "Введите символ: ";
    char z;
    std::cin >> z;
    int count{};
    for (char c : text1)
    {
        if (c == z) {
            count++;
        }
    }
    std::cout << "Символ " << z << " встречается в тексте " << count << " раз." << std::endl;

    // Задача 6
    std::cout << "Задача 6\n";
    std::cout << "Введите любой текст. Программа Определит количество букв, количество цифр и количество остальных символов.\n";
    std::string text3;
    std::getline(std::cin, text3);
    int Letters = 0;
    int Numbers = 0;
    int OtherChars = 0;

    for (char c : text3) 
    {
        if (isalpha(c)) 
        {
            Letters++;
        }
        else if (isdigit(c)) 
        {
            Numbers++;
        }
        else {
            OtherChars++;
        }
    }
    std::cout << "Количество букв: " << Letters << std::endl;
    std::cout << "Количество цифр: " << Numbers << std::endl;
    std::cout << "Количество других символов: " << OtherChars << std::endl;
}




