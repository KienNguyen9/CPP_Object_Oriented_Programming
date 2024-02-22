# Tối ưu hóa mô hình hướng đối tượng

Mục đích là để: project hoạt động hiệu quả, dễ đọc & dễ bảo trì

## Initialization list

- Khi 1 hàm constructor `gán` giá trị cho các thuộc tính, các thuộc tính đó đã được `khai báo` rồi
- Với 1 số biến đặc biệt như: `constant` và `reference` và `array` thì khai báo phải khởi tạo giá trị ngay lúc đó 
- Lúc này hàm `constructor` không thể gán giá trị cho biến `const` được, cần phải có cách khác

- Cơ chế `initialization list` sẽ: `khởi tạo` đối tượng ở hàm constructor 


```C++
#include <iostream>
#include <string>

using namespace std;

class Person
{};

class Vehicle
{
public:
    Vehicle(string mn, int my, Person &o) : 
    modelName(mn), 
    manufactureYear(my), 
    owner(o), 
    frameSize{1,2,3}
    {
        //modelName = mn;
        //manufactureYear = my;
        // frameSize[0] = 1;
        // frameSize[1] = 2;
        // frameSize[2] = 3;
           
    }

    // Hàm ảo 
    virtual void run()
    {
        cout << "Vehicle is running!\n";
    }

protected:
    const string modelName;
    int manufactureYear;
    // Theo nguyên tắc thì đang phải là pointer hoặc reference
    // Kiểu reference khi khởi tạo phải gán giá trị
    Person &owner;
    // array gần giống như thế, cũng có thể gán lại ở trên theo cách thủ công và mất thời gian
    int frameSize[3] = {};

private:

};

int main()
{
    Person  Kien;
    Vehicle KienCar("Meccedes", 2024, Kien); 

    return 0;
}
```

