# Hàm khởi tạo - Constructor 

Là một hàm thành viên nằm trong class 

<h3> Nội dung chính:</h3>

- Hàm khởi tạo là hàm ngầm định (Implicit) có sẵn, không tường mình (Explicit) 
- Là hàm có cùng tên với class 
- Không có kiểu trả về 
- Chúng ta có thể can thiệp vào quá trình khởi tạo của object bằng các viết tường minh hàm khởi tạo 
- MỤC ĐÍCH CHÍNH CỦA HÀM CONSTRUCTOR LÀ: khởi tạo giá trị ban đầu cho object
- Hàm khởi tọa có thể Overloading Nạp chồng


<h3>Chương trình mẫu: </h3>

```C++

/**
 * @file main.cpp
 * @author Kien Nguyen
 * @brief Code mẫu ví dụ cho constructor
 * @version 0.1
 * @date 2023-12-11
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
using namespace std;

class women
{
public:
    std::string fullName;
    int age;
    // Constructor function - cung cấp giá trị ban đầu để tránh nhưng hành động không xác định
    // Tham số cho hàm khởi tạo 
    women()
    {
        cout << "\n\nCreated a new woman.\n";
        fullName = "Unknown";
        age = 0;
    }

    women(string fn, int a)
    {
        cout << "\n\nCreated a new woman.\n";
        fullName = fn;
        age = a;
    }

    //Hàm giới thiệu 
    void introduce()
    {
        cout << "Hello!" << " My name is " << fullName;
        cout << "\nI'm " << age << " years old."; 
    }

private: 
    float weigh;

};

int main()
{
    // Cấp phát động cho đối tượng jenny  
    // Khởi tạo đối tượng mới và cấp tham số cho hàm constructor 
    women* Jenny = new women("Jenny", 25);
    Jenny->introduce();

    women* Nicky = new women("Nicky", 33);
    Nicky->introduce();

    // Với class nhỏ muốn dùng cấp phát tĩnh 
    // Với cấp phát tĩnh
    women Hanni("Hanni", 18);
    // Thay -> bằng . 
    Hanni.introduce();

    // Hàm khởi tạo mặc định
    women* somebody = new women;
    somebody->introduce(); 

    return 0;
}
```