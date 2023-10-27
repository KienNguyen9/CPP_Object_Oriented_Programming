/**
 * @file main.cpp
 * @author Kien Nguyen (you@domain.com)
 * @brief VD Chi tiết về các thuộc tính 
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>
#include <vector> // thư viện kiểu dư liệu vector
/*
    Nhấn mạnh 
    struct và class chỉ có 1 điểm khác nhau duy nhất là :
    KHÁC "DEFAULT ACCESS MEMORY MODIFI"
    LÀ VÙNG NHỚ TRUY CẬP MẶC ĐỊNH
*/

// mặc đinh khả năng truy cập từ bên ngoài
struct bodySize 
{
    float weight;
    std::vector<int> body3Size;
};
// mặc định là ko truy cập từ bên ngoài đc
class woman 
{
    public: 
    std::string fullName;    
    void makeUp(){}
    void introduce(){}
    private:

};

int main()
{
    // Member variables - biến - thuộc tính
    // Khởi tạo đối tượng jenny
    woman *jenny = new woman; 
    jenny->introduce();
    return 0;
}