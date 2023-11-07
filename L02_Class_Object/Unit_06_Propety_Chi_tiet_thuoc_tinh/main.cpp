/**
 * @file main.cpp
 * @author Kien Nguyen (you@domain.com)
 * @brief VD Chi tiết về các thuộc tính, các kiểu của thuộc tính có thể có
 *          Cách khai báo, khởi tạo và truy cập
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
struct BodySize 
{   
    //Các kiểu nguyên thủy (primitive)
    int chieuCao;
    float weight;
    //Các kiểu dư liệu nâng cao
    int BodySize3v[3];  // kiểu mảng - array 
    std::vector<int> body3Size; // kiểu vector - một vector các số nguyên, số lượng phần tử linh động
};

// mặc định là ko truy cập từ bên ngoài đc
class woman 
{
    public: 
    int age;
    BodySize bodySize;
    std::string fullName;    
    woman* nextWoman; // kiểu con trỏ trong class
    void makeUp(){}
    void introduce(){}
    private:
};

/*
    LƯU Ý: Kí hiệu truy cập "->" VÀ "." dựa trên cách cấp phát vùng nhớ của đối tượng
*/
int main()
{
    // Member variables - biến - thuộc tính
    // Khai báo đối tượng jenny - cấp phát động
    // ĐÂY LÀ KHỞI TẠO THỦ CÔNG - ÍT KHI DÙNG - sẽ dùng hàm khởi tạo (nghiên cứu sau)
    woman *jenny = new woman; 
    // khởi tạo giá trị ban đầu
    jenny->fullName = "Jenny Chu"; // "->" đối tượng dạng con trỏ cấp phát động, đối tượng truy cập vào biến thành viên"
    jenny->age = 35;
    jenny->bodySize.weight = 50; // "." đây là cấp phát tĩnh bên trong class, không phải là con trỏ nên dùng dấu "."
    jenny->introduce();
    return 0;
}