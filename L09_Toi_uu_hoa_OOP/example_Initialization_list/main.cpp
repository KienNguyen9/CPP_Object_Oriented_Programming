/**
 * @file main.cpp
 * @author Kevin
 * @brief Ví dụ cho 
 * @version 0.1
 * @date 2024-01-17
 * 
 * @copyright Copyright (c) 2024
 * 
 */
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