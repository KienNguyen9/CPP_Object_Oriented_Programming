/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về abstract class và pure virtual function
 * @version 0.1
 * @date 2024-01-07
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

    // Getter-Setter: Model name
    virtual string getModelName() = 0;
    virtual void setModelName(string mn) = 0;
    // Hàm run
    virtual void run() = 0;
    // {
    //     cout << "A vehicle is running!!!\n";
    // } 
protected:
     string modelName;
private:
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

    // Getter-Setter: Model name
    string getModelName()
    {
        return modelName;
    }
    void setModelName(string mn)
    {
        modelName = mn;
    }

    // Overiding hàm run
    void run() override
    {
        cout <<"A car is running!!!\n";
    }
private:
    string ownerName;
};


int main()
{
    Car *car_1 = new Car;
    return 0;
}
