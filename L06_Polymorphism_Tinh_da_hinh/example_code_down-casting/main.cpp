/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về Down-casting (KHÓ HIỂU - CẦN CHÚ Ý)
 * 
 * @version 0.1
 * @date 2024-01-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */
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
        cout << ownerName <<"'s car is running!!!";
    }
private:
    string ownerName;
};

int main()
{
    // Down-casting
    cout << "Down-casting\n";

    // CÁCH LÀM SAI - SINH RA LỖI run-time - Tạo đối tượng class cha và ép xuống lớp con với thuộc tính và phương thức mới
    //Vehicle *vehicle_1 = new Vehicle; 

    // Cách làm đề hạn chế lỗi: Up-casting trước
    
    // Bước 1: tạo 1 đối tượng con 
    Car *car_1 = new Car;

    //Bước 2: Tạo 1 con trỏ parent-class để trỏ vào đối tượng con vừa tạo
    
    // Cách viết tường mình: Vehicle *vehicle_1 = (Vehicle *)car_1; ĐÂY LÀ UP-CASTING
    Vehicle *vehicle_1 = car_1;  // dùng con trỏ parent-class để lưu đối tượng là của sub-class
    
   
    // Đây gọi là donw-casting
    //Bước 3: Ép kiểu Con trỏ vừa tạo
    ((Car *)vehicle_1)->run();

    return 0;
}


