/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về Virtual function
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
