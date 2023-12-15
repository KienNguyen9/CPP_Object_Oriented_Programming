/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Abstraction - Tính trù tượng
 * Đây là ví dụ về tính trù tượng trong C++
 * 
 * @version 0.1
 * @date 2023-12-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
using namespace std;

// Với kiểu dữ liệu nào nên dùng struct hơn là class
struct bodyzise{

    int sizeOfBody[3];
    char shirtSize; // S,M,L,XL.XXL
};

// Class women
class women{
// Vùng public
public:
    // Contructor - gán các thuộc tính cho đối tượng
    women(string fn, int a, float w, float h){
        fullName = fn;
        age = a; 
        weight = w;
        height = h;
    }

    // Phương thức giới thiệu
    void introduce(){
        cout << "\nHello! "<< "My name is " << fullName << '\n' << "I'm " << age << " years old.";
    }

    // Cập hàm setter - getter để thao tác với các thuộc tính đã được đóng gói 
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }

    // Setter - Getter: weight
    void setWeight(float w)
    {
        weight = w;
    }
    float getWeight()
    {
        return weight;
    }

    //Getter-Setter: height
    void setHeight(float h)
    {
        height = h;
    }
    float getHeight()
    {
        return height;
    }

// Vùng private
private:
// Theo tính đóng gói thì, các thuộc tính của đối tượng phải được đặt vào vùng private
    string fullName;
    int age;
    float weight;
    float height;
    bodyzise bodySize;
};


// Class ví dụ cho tính trù tượng Abstraction
// Tập trung vào class này
class health_checker{
public:
    void checker(women *Women)
    {
        // 2 giá trị chiều cao, cân nặng được lấy từ 1 woman
        weight = Women->getWeight();
        height = Women->getHeight();
        // Giả sử ta có thiết bị để đo nhịp tim và huyết áp
        // Đây chỉ là mã giả
        bloodPressure = 120; // Giả sử lấy bằng hàm getBloodPressure() từ 1 class Device 
        heartBeat = 80; // tương tự cho nhịp tim 
    }

    // Hàm trả ra kết quả kiểm tra
    string getResult()
    {
        // Xuất ra chỉ số BMI
        cout << 
    }
private:
    float weight;
    float height;
    int bloodPressure;
    int heartBeat;
};

int main()
{
    women* jenny = new women("Jenny",20,45,165);
    jenny->introduce();  

    // Tạo 1 lần kiểm tra sức khỏe
    health_checker* checker = new health_checker();
    checker->checker(jenny);

    
    return 0;
}