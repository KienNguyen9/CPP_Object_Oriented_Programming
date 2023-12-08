/**
 * @file main.cpp
 * @author Kien Nguyen (you@domain.com)
 * @brief Nghiên cứu chi tiết về phương thức trong lập trình hướng đối tượng
 * @version 0.1
 * @date 2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
/* 
Phương thức (Method) là các hàm trong class nào đó
Nó có khác gì so với các hàm (funtion) bình thường không?
*/

// Class Woman
class woman
{   
    public:
    std::string fullName = "Unknow";
    int age;
    // Hàm thành viên introduce (method) 
    void introduce(bool isFull)
    {
        std::cout << "Hi! My name is " << fullName;
        if(isFull)
        {
            std::cout << "\nI'm come from Viet Nam";
        }
    }
    private:
    float weight;
};

int main()
{
    // Khai báo một object tên jenny, được cấp phát động vùng nhớ 
    woman* jenny = new woman;
    // Lời gọi hàm (function call) 
    jenny->introduce(true);
    return 0;
}