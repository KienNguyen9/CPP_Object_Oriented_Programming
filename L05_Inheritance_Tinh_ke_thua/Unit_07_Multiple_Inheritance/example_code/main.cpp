/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về constructor trong quan hệ kế thừa 
 * @version 0.1
 * @date 2023-12-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
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
     
protected:
private:
    string modelName;
};

/***
 * Sub-class
*/
class Taxi : public Vehicle
{
public:
    
    ~Taxi()
    {
        cout << "Taxi " << getModelName() << " was deleted.\n";
    }
    /**
     * @brief Đây là cách chỉ định hàm khởi tạo lớp cha, nếu không có chỉ định này thì sẽ gọi làm default construct
     * 
     **/ 
    Taxi(string name) : Vehicle(name) 
    {
        cout << "Created a taxi.\n";
    }


private:
    int kmCounter;
};

int main()
{
    Taxi* Taxi_1 = new Taxi("Kia Sonet");
    Taxi* Taxi_2 = new Taxi("Vinfast Faldi");

    delete Taxi_1;
    delete Taxi_2;
    return 0;
}
