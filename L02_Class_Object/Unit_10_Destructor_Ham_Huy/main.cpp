/**
 * @file main.cpp
 * @author Kien Nguyen (you@domain.com)
 * @brief Hàm hủy dùng để làm gì, các dùng hàm hủy
 * @version 0.1
 * @date 2023-11-06
 * 
 * @copyright Copyright (c) 2023
 */
#include <iostream>
#include <string>
#include <vector> // thư viện kiểu dư liệu vector
//Kiểu dữ liệu Bodysize
struct BodySize 
{   
    //Các kiểu nguyên thủy (primitive)
    int chieuCao;
    float weight;
    //Các kiểu dư liệu nâng cao
    int BodySize3v[3];  // kiểu mảng - array 
    std::vector<int> body3Size; // kiểu vector - một vector các số nguyên, số lượng phần tử linh động
};
/**
* Lớp woman - VD dụ destructor như sau
* Tạo ra class woman 
**/

class woman 
{
    public: 
    // 2 thuộc tính là tên và tuổi 
    std::string fullname;
    int age;
    // Tên hàm trùng với tên class
    woman()
    {
        fullname = "Unknow";
        age = 0;
    }
    //Tên hàm trung với tên class, có thêm đối số
    woman(std::string fn, int a)
    {
        std::cout<<"Create a new woman\n";
        fullname = fn;
        age = a;
    }
    // Hàm hủy
    ~woman() // Thêm "~" trước tên hàm, trùng với tên class để tạo hàm hủy
    {
        std::cout << "Deleted a woman"; 
    }
    void makeUp(){}
    void introduce(){}
    private:
};


int main()
{
    
    woman *jenny = new woman("Jenny Chu",24); 
    delete jenny;
}