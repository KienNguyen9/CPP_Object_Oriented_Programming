# Access modifier trong Inheritance 

<h4>Mở đầu:</h4>

- Bài này sẽ tìm hiểu về các `chỉ định truy cập`-`access modifier` trong `sự kế thừa`-`Inheritance`
- Chỉ định truy cập đã biết là: `public`, `private` 
- Hôm nay ta sẽ tìm hiểu thêm về chỉ định mới được sinh ra trong quá trình kế thừa `inheritance` 

<h4>Nội dung chính:</h4>

- Trong `Inheritance`, ở lớp cha từ khóa `private` là phạm vi truy cập được bảo vệ: ko cho phép truy cặp từ bên ngoài và cũng không truy cặp từ lớp con.

- Vậy làm thế nào để cho các lớp con có thể sử dụng các tài nguyên ở phần được bảo về không cho truy cập từ bên ngoài? 
- Từ đây sinh ra `protected`, chỉ định truy cập này sẽ cho các lớp con sử dụng nhưng tài nguyên bên trong và bảo vệ không cho truy cập từ bên ngoài
- Chỉ định này chỉ có nghĩa khi có sự kế thừa từ các `class`, nếu không thì `private` và `protected` là y như nhau  

```C++
class Vehicle{
public:
    //Getter-Setter: modelName
    std::string getModelName()
    {
        return modelName;
    }
    void setModelName(std::string mn)
    {
        modelName = mn;
    }
    
protected: // Chỉ định truy cập này chỉ có lớp con mới truy cập được, không thể truy cập từ bên ngoài
    void run()
    {
        std::cout << "The Vehicle is running.";
    }

private:
    // The propeties 
    std::string modelName;
    int version; 
};
```

<h4>Kiểu kế thừa:</h4>

- Có 2 kiểu kế thừa `public` và `private`
- Kế thừa `public`: giữ nguyên chỉ định truy cặp của lớp cha và kế thừa cho lớp con 
- Kế thừa `private`: tất cả các kế thừa đều là `private` (trong thực tế ít khi làm như thế này)
