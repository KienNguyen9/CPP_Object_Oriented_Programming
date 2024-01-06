# Tính đa hình - Polymorphism

Đa hình là 1 phần khó trong OOP 
Cần hiều sâu sắc về nó 

<h3>1. Khái niệm đa hình</h3>

- Tính đa hình là một khái niệm được dùng nhiều trong lập trình, chứ không riêng trong OOP mới có
- Đa hình = nhiều hình dạng(của một sự vật, hiện tượng)

VD 1: Có 1 người đàn ông thì là: con của cha mẹ, chồng của vợ, ba của con,...

VD 2: toán tử `+` 

```C++
1 + 2 = 3;
'1' + '2' = "12"
int *p;
p + 1; // = địa chỉ sẽ dịch 4 đơn vị 
```

Trong VD 2, thì với cùng 1 kí tự `+` nhưng có nhiều chức năng tùy vào từng trường hợp 

Chính xác thì việc này có tên gọi là `operator overloading` hoặc `function overloading`, định nghĩa lại phép toán hoặc hàm.

<h4>Các ví dụ trên là khái quát về Tính Đa Hình</h4>

<h3>2. Thể hiện của sự đa hình trong OOP<h3>
<h3>Up-casting & down-casting</h3>

Ép kiểu - type casting: trong lập trình cơ bản đã được học
vậy nó có liên quan gì đến đa hình? Thực chất nó đang làm gia hỏi hình dạng của giá trị 

```c++
float x = 5.5;
cout << "x = " << (int)x; // x = 5
```

Phép chia lấy dư chỉ thực hiện được cho số thực, muốn chia thì cần phải ép kiểu

Về bản chất có thể hiểu: chúng có quan hệ gần giống kế thừa - đây chỉ là ý tưởng vì float và int ko phải class
Hiểu đơn giản vì giữa float int có sự kế thừ 
float được kế thừa từ int (phần nguyên)

Ví dụ trong OOP:
<h4>
    Những lưu ý cần nhớ:
</h4>

- Các class được kế thừa cũng có thể ép kiểu qua lại
- Cú pháp ép kiểu tương đối giống, khác ở chỗ các biến này là địa chỉ nên nhớ thêm dấu `*` phía sau tên `class` khi ép
- Up-casting thì đơn giản, còn down-casting thì phải cẩn thận vì khi down-casting thì sẽ rất hay xảy ra lỗi `run-time`, Do ép kiểu từ parent-class đến sub-class về bản chất sẽ dùng các thuộc tính đang có của parent-class, chứ không có nghĩa là ép kiểu thì sẽ nhận được thuộc tính phương thức mới của hàm con
- Điều này không an toàn, vậy khi nào thì `down-casting` an toàn? Ép kiểu 2 lần (tạo 1 đối tượng con -> tạo thêm 1 con trỏ kiểu parent-class & gán địa chỉ của đối tượng con -> ép kiểu của địa chỉ parent-class vừa tạo) 

Ví dụ:
```C++
// Ép hàm run của car về hàm run của Vehicle 
// Từ sub-class đến parent-class: up-casting
(Vehicle *)Car_1->run();

```
  

```c++
#include <iostream>
#include <string>
using namespace std;

/***
 * Parent-class
*/
class Vehicle
{
public:
    // Default - Contructor 
    Vehicle()
    {
        cout << "Created a vehicle.\n";
    }

    ~Vehicle()
    {
        cout << modelName << "was delete.\n";
    }

    Vehicle(string Name)
    {
        modelName = Name;
        cout << "Create a vehicle: " << modelName << ".\n";
    }
    // Getter-Setter: Model name
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string mn)
    {
        modelName = mn;
    }

    // Hàm run
    void run()
    {
        cout << "A vehicle is running!!!\n";
    } 
protected:
private:
    string modelName;
};

/**
 * @brief sub Class car 
 * 
 */
class Car : public Vehicle

{
public:
    Car()
    {
        cout << "Created a car\n";
    } 

    // Overiding hàm run
    void run()
    {
        cout << "A car is running!!!";
    }

};

int main()
{
    // Up-casting
    Car *car = new Car();
    car->run();
    ((Vehicle *)car)->run();

    // Down-casting
    
    return 0;
}
```
<h3>
    3. Virtual function - Hàm ảo
</h3>

Ý tưởng:

- Dựa trên up-casting(ép kiểu từ sub-class lên parent-class) 
- Muốn quản lí nhiều đối tường thì phải làm như thế nào, các đối tượng thuộc các lớp khác nhau
- Vậy ý tưởng là: đưa về cùng 1 kiều dữ liệu và cho các đối tượng vào 1 mảng 


Code mẫu:

```C++
#include <iostream>
#include <string>
using namespace std;

// parent-class(lớp dẫn suất)
class Vehicle
{
public:
    // Default - Contructor 
    Vehicle()
    {
        cout << "Created a vehicle.\n";
        
    }
    ~Vehicle()
    {
        cout << modelName << "was delete.\n";
    }
    Vehicle(string Name)
    {
        modelName = Name;
        cout << "Create a vehicle: " << modelName << ".\n";
    }

    // Getter-Setter: Model name
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string mn)
    {
        modelName = mn;
    }

    // Hàm run
    void run()
    {
        cout << "A vehicle is running!!!\n";
    } 
protected:
private:
    string modelName;
};


// Sub-class(lớp con)
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Created a car\n";
        ownerName = "NONE";
    } 

    // Overiding hàm run
    void run()
    {
        cout << ownerName <<"A car is running!!!\n";
    }
private:
    string ownerName;
};

// Class Truck
class Truck : public Vehicle
{
public:
    Truck()
    {
        cout << "Created a Truck\n";
    }

    void run()
    {
        cout << "A truck is running!\n";
    }
private:
    int expirationYear;
};

//Class Motobike
class Motobike : public Vehicle
{
public:
    Motobike()
    {
        cout << "Created a Truck\n";
    }

    void run()
    {
        cout << "A Motobike is running!\n";
    }
 
}; 

int main()
{
    // Có 1 đối tượng car lưu bằng con trỏ vehicle
    // Đây là up-casting: ép kiểu về parent-class

    Vehicle *car_1 = new Car;
    Vehicle *truck_1 = new Truck;
    Vehicle *motobike_1 = new Motobike;

    // Những biến trên có cùng kiểu nên có thế đưa vào mảng

    Vehicle *vehicle_list[3];
    vehicle_list[0] = car_1;
    vehicle_list[1] = truck_1;
    vehicle_list[2] = motobike_1;

    //Duyệt  mảng
    for(int i = 0; i < 3; i++)
    {
        vehicle_list[i]->run();
    } 

    return 0;
}
```

Nhưng đến đây thì lại phát sinh vấn đề, đó là các đối tượng ép kiểu thì sẽ gọi hàm của parent-class

<h4>Từ đây Virtual function được sinh ra để giải quyết vấn đề này </h4>

- Thêm từ khóa `virtual` vào trước kiểu dữ liệu ở hàm của parent-class 
- Ý nghĩa của `virtual function` là quản lí các đối tượng bằng mảng những vẫn giữ được các thông tin riêng của đối tượng
- Có thể hiểu hàm `virtual` ở parent-class là hàm mặc định, nếu ở sub-class không overiding lại thì sẽ gọi hàm virtual còn ko thì sẽ gọi hàm đã overiding ở sub-class


<h5>ghi chú thêm:</h5>
 
- Với các hàm `override` từ `virtual function`  
- có thể dùng từ khóa `override` sau các hàm overriding ở sub-class 
- Cho code dễ đọc

Code mẫu:
```C++
#include <iostream>
#include <string>
using namespace std;

// parent-class(lớp dẫn suất)
class Vehicle
{
public:
    // Default - Contructor 
    Vehicle()
    {
        cout << "Created a vehicle.\n";
        
    }
    ~Vehicle()
    {
        cout << modelName << "was delete.\n";
    }
    Vehicle(string Name)
    {
        modelName = Name;
        cout << "Create a vehicle: " << modelName << ".\n";
    }

    // Getter-Setter: Model name
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string mn)
    {
        modelName = mn;
    }

    // Hàm run
    virtual void run()
    {
        cout << "A vehicle is running!!!\n";
    } 
protected:
private:
    string modelName;
};


// Sub-class(lớp con)
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Created a car\n";
        ownerName = "NONE";
    } 

    // Overiding hàm run
    void run() override
    {
        cout <<"A car is running!!!\n";
    }
private:
    string ownerName;
};

// Class Truck
class Truck : public Vehicle
{
public:
    Truck()
    {
        cout << "Created a Truck\n";
    }

    void run() override
    {
        cout << "A truck is running!\n";
    }
private:
    int expirationYear;
};

//Class Motobike
class Motobike : public Vehicle
{
public:
    Motobike()
    {
        cout << "Created a Truck\n";
    }

    void run() override
    {
        cout << "A Motobike is running!\n";
    }
 
}; 

int main()
{
    // Có 1 đối tượng car lưu bằng con trỏ vehicle
    // Đây là up-casting: ép kiểu về parent-class

    Vehicle *car_1 = new Car;
    Vehicle *truck_1 = new Truck;
    Vehicle *motobike_1 = new Motobike;

    // Những biến trên có cùng kiểu nên có thế đưa vào mảng

    Vehicle *vehicle_list[3];
    vehicle_list[0] = car_1;
    vehicle_list[1] = truck_1;
    vehicle_list[2] = motobike_1;

    //Duyệt  mảng
    for(int i = 0; i < 3; i++)
    {
        vehicle_list[i]->run();
    } 

    return 0;
}

```










