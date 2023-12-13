/**
 * @file Sample_code.cpp
 * @author Kevin Nguyen
 * @brief Code mẫu ví dụ cho từ khóa static trong class
 * @version 0.1
 * @date 2023-12-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

class Women
{
public:
    static void what()
    {
        cout  << "Women is women!\n";
    }

private:
};

int main()
{
    Women* jenny = new Women;
    // Có 2 các gọi hàm what()
    // gọi thông qua object
    jenny->what();
    //Gọi thông qua class
    Women::what();

    return 0;
}