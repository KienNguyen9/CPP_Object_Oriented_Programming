/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ đơn giản nhất về tính kế thừa
 * Bài toán yêu cầu thiết kế nhiều loại phương tiện giao thông  
 * Chúng ta sẽ dùng tính kế thừa để thực hiện yêu cầu này
 * @version 0.1
 * @date 2023-12-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<iostream>
#include<string>

/*
* Class vehicle thể hiện cho phương tiện giao thông
* Đây là class chung của các loại phương tiện
*/ 

// Parents class
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

    //Getter-Setter: version
    int getVersion()
    {
        return version;
    }
    void setVersion(int v)
    {
        version = v;
    }

private:
    // The propeties 
    std::string modelName;
    int version;
 
};

/**
 * @brief class khác, để miêu tả xe taxi 
 */

// Child Class
class Taxi : public Vehicle
{

};

/***
 * @brief class xe tải
 * 
*/
class Struck : public Vehicle
{

};

int main()
{
    //Tạo một đối tượng Vehicle
    Vehicle* vehicle = new Vehicle;

    return 0;
}