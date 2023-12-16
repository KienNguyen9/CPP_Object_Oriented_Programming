/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Abstraction - Tính trù tượng
 * 
 * Đây là ví dụ về tính trù tượng trong C++
 * Trong ví dụ này cần chú ý tới class health_checker 
 * Có 2 hàm là checker() và getResult() 
 * Người dùng chỉ cần gọi hàm checker() để kiểm tra 
 * và gọi hàm getResult() để nhận kết quả 
 * Vì nó đã được TEST và bàn giao cho người code tiếp theo
 * Mà không cần biết bên trong các hàm đó được cài đặt như thế nào 
 * 
 * ĐÓ ĐƯỢC GỌI LÀ TÍNH TRỪ TƯỢNG - Nó giúp nhiều người cùng thực hiện 1 dự án 1 các đơn giản hơn - dễ bảo trì bảo dưỡng 
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
    // Getter-setter
    string getFullName()
    { 
        return fullName;
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
        bloodPressure = 130; // Giả sử lấy bằng hàm getBloodPressure() từ 1 class Device 
        heartBeat = 80; // tương tự cho nhịp tim 
    }

    // Hàm trả ra kết quả kiểm tra
    string getResult()
    {
        // Chi tiết cách viết hàm
        float bmi = weight/(height*height);
        // Xuất ra chỉ số BMI
        if(bmi >= 18.5 && bmi <= 24.9 
        && bloodPressure >= 120 && bloodPressure < 140 
        && heartBeat >= 65 && heartBeat < 100)
        {
            return "Normal";
        } 
        return "Abnormal";
    }


private:
    float weight;
    float height;
    int bloodPressure;
    int heartBeat;
};

int main()
{
    women* jenny = new women("Jenny",20,55,1.65);
    jenny->introduce();  

    // Tạo 1 lần kiểm tra sức khỏe
    health_checker* checker = new health_checker();
    checker->checker(jenny);
    cout <<"\nThe Health of " << jenny->getFullName() << " is: " <<checker->getResult();    
    return 0;
}