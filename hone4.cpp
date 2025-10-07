#include <iostream>
#include <string> 
int main() 
{
    int user_number;
    std::cout << "Введіть число: ";
    std::cin >> user_number;
    
    std::string result = std::to_string(user_number);

    std::cout << "Число " << user_number << " у вигляді рядка: " << result << std::endl;


    return 0;}
