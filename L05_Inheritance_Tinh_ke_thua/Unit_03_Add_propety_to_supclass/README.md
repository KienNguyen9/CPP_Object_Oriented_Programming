# Thêm thuộc tính vào lớp con 

Sau khi học ``Overriding``, kế thừa và thêm tính năng cho phương thức được kế thừa 
Thì bài này ta sẽ thêm, thuộc tính cho hàm con

<h3>Nội dung chính</h3>

Trong lập trình C++, overriding là một tính năng cho phép một lớp con cung cấp một triển khai cụ thể của phương thức đã được cung cấp bởi một trong các lớp cha của nó. Nói cách khác, overriding là việc lớp con "ghi đè" phương thức của lớp cha, thay đổi cách thức thực hiện của phương thức đó.

Để overriding được phép, phương thức trong lớp con phải có các đặc điểm sau:

-Có cùng tên và tham số với phương thức trong lớp cha
-Có cùng loại trả về (nếu phương thức trong lớp cha có kiểu trả về)
-Có cùng tính chất abstract (nếu phương thức trong lớp cha là abstract)

Overriding được sử dụng để:

-Tùy chỉnh hành vi của một phương thức đã được kế thừa từ lớp cha
-Thêm các tính năng mới cho phương thức đã được kế thừa từ lớp cha
-Thay đổi cách thức thực hiện của phương thức đã được kế thừa từ lớp cha

Ví dụ, trong đoạn mã C++ sau:
```C++
class Animal {
 public:

    /** Hàm virtual là hàm sẽ được ghi đè ở các lớp con - cho phép lớp con overriding 
     *  Nên cần phải có từ khóa virtual ở trước  
     */
    virtual void speak() {
        std::cout << "I am an animal." << std::endl;
    }
};

class Dog : public Animal {
public:
    // Overriding lại hàm speak() 
    void speak(char tone) override {
        if(tone = 'h' || 'H')
        {
            std::cout << "Woof!" << std::endl;
        }
        else 
        {
            std::cout << "WOOF WOOF!" << std::endl;
        }
    }
private: 
    // Thêm thuộc tính mới
    char tone;
};

int main() {
  Dog dog;
  dog.speak();
  return 0;
}
```

Phương thức ``speak()`` trong lớp ``Animal`` được khai báo là ``virtual``, cho phép lớp con overriding. Lớp `Dog` overriding phương thức ``speak()`` từ lớp `Animal` bằng cách thay đổi nội dung thực thi của phương thức. Khi chương trình được thực thi, phương thức `speak()` trong lớp `Dog` sẽ được gọi khi đối tượng dog được gọi phương thức `speak()`.

Overriding là một tính năng quan trọng của lập trình hướng đối tượng (OOP). Nó cho phép các lập trình viên tùy chỉnh hành vi của các phương thức đã được kế thừa từ lớp cha, giúp tăng tính linh hoạt và khả năng mở rộng của chương trình.