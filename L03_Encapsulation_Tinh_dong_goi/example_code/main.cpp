/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Example code about encapsulation - Tính đóng gòi
 * @version 0.1
 * @date 2023-12-14
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
    women(string fn, int a){
        fullName = fn;
        age = a; 
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


// Vùng private
private:
// Theo tính đóng gói thì, các thuộc tính của đối tượng phải được đặt vào vùng private
    string fullName;
    int age;
    float weight;
    bodyzise bodySize;
};

int main()
{
    women* jenny = new women("Jenny",20);
    jenny->introduce();  

    // Gọi 2 phương thức để thay đổi thuộc tính đã đóng gói
    jenny->setAge(21);
    cout <<"\nTuoi da cap nhat la: " << jenny->getAge();

    jenny->introduce();
    return 0;
}