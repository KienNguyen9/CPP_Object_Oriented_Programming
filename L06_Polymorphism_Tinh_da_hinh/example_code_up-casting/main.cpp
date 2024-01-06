/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về up-casting & down-casting
 * Hay còn gọi là ép kiểu giữa các class có kế thừa lần nhau
 * @version 0.1
 * @date 2024-01-06
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
using namespace std;


// Parent-class
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


// Sub-class
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Created a car\n";
        ownerName = "Kevin";
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
    // Up-casting
    cout << "Up-casting\n";

    // Tạo 1 đối tượng thuộc sub-class
    Car *car = new Car();
    
    // Chạy hàm của sub-class
    car->run();

    //Ép kiểu: về sub-class -> chạy hàm run()
    ((Vehicle *)car)->run();

    //Gợi ý về down-casting
    // Down-casting : Cách này không nên dùng với down-casting, vì dễ sinh ra lỗi xem ví dụ 2 để biết cách làm đúng
    cout << "\n\nDown-casting\n";
    Vehicle *vehicle_1 = new Vehicle();
    vehicle_1->run();

    // Lỗi ngay dòng lệnh này, vì khi ép kiểu xuống lớp con, có thuộc tính ownerName chưa được khởi tạo 
    //((Car *)vehicle_1)->run();

    return 0;
}

