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
    if (pos <= str.length()) {
        std::string result;

        for (size_t i = 0; i < pos; ++i) {
            result += str[i];
        }
        result += ch;

        for (size_t i = pos; i < str.length(); ++i) {
            result += str[i];
        }
        return result;
    }
    return str;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    // Задача 1
    char arr[] = { "\0!@#$%^&*" };
    std::cout << "Задача 1\n";
    std::cout << "Дана строка с символами\n";
    Print(arr);
    std::cout << "\nВведите номер символа и он удалится\n";
    int a;
    std::cin >> a;
    Delete(a, arr);
    std::cout << "\n\n";

    // Задача 2
    std::cout << "Задача 2\n";
    std::cout << "Дана строка с символами\n";
    Print(arr);
    std::cout << "\nВведите символ и он удалится\n";
    char b;
    std::cin >> b;
    Delete2(b, arr);
    std::cout << "\n\n";

     Задача 3
    std::cout << "Задача 3\n";
    std::cout << "Дана строка с выражением\nHello, world!\n";
    std::string String = "Hello, world!";
    std::cout << "Введите символ и позицию программа вставит в выражение\n";
    char x;
    int y;
    std::cout << "Введите символ\n";
    std::cin >> x;
    std::cout << "Ввежите номер позиции\n";
    std::cin >> y;
    std::string modifiedString = Replacement(String, x, y);
    std::cout << modifiedString << std::endl;
    std::cout << "\n\n";

     Задача 4
    std::cout << "Задача 4\n";
    std::cout << "Введите любой текст. Программа заменит все символы точки «.» в строке, на символы восклицательного знака «!».\n";
    std::string text;
    std::cout << "Введите текст: ";
    std::cin >> text;
    std::getline(std::cin, text);
    for (int i = 0; i < text.length(); i++) 
    {
        if (text[i] == '.') 
        {
            text[i] = '!';
        }
    }
    std::cout << "Измененная строка: " << text << std::endl;
    std::cout << "\n\n";

     Задача 5
    std::cout << "Задача 5\n";
    std::cout << "Введите любой текст и символ. Программа посчитает сколько раз символ встречался в строке.\n";
    std::string text1;
    std::cout << "Введите строку: ";
    std::cin >> text1;
    std::getline(std::cin, text1);
    std::cout << "Введите символ: ";
    char z;
    std::cin >> z;
    int count{};
    for (int i = 0; i < text1.length(); i++)
    {
        if (text1[i] == z)
        {
            count++;
        }
    }
    std::cout << "Символ " << z << " встречается в тексте " << count << " раз." << std::endl;
    std::cout << "\n\n";

    // Задача 6
    std::cout << "Задача 6\n";
    std::cout << "Введите любой текст. Программа Определит количество букв, количество цифр и количество остальных символов.\n";
    std::string text3;
    std::cout << "Введите текст: ";
    std::cin >> text3;
    std::getline(std::cin, text3);
    int Letters = 0;
    int Numbers = 0;
    int OtherChars = 0;

    for (int i = 0; i < text3.length(); ++i)
    {
        if (isalpha(text3[i]))
        {
            Letters++;
        }
        else if (isdigit(text3[i]))
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




