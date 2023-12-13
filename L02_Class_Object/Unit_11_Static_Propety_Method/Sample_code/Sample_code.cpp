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
    // thuộc tính propety static - Dùng để đếm số lượng object
    static int numberWomen;

    // Constructor Women
    Women()
    {
        // Mỗi khi khởi tạo thì số lượng object tăng lên 1
        numberWomen++;

    }

    // Phương thức method static
    static void what()
    {
        cout  << "Women is women!\n";
    }

private:
};

// Khai báo bên ngoài, cho thuộc tính static - Dùng để đếm số lượng object
int Women::numberWomen = 0; 

int main()
{
    Women* jenny = new Women;
    // Có 2 các gọi hàm what()
    // gọi thông qua object
    jenny->what();
    //Gọi thông qua class
    Women::what();

    Women* June = new Women;

    // cách truy cập biến static - Giống y như biến toàn cục - nhưng được class quản lý - gọi qua dấu ::
    cout << Women::numberWomen;

    return 0;
}