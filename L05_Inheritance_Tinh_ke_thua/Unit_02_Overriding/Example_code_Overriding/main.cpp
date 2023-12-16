/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về Overriding
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

    // Hàm run() - thệ hiện hành động chạy 
    void run()
    {
        std::cout << "The Vehicle is running.";
    }

private:
    // The propeties 
    std::string modelName;
    int version;
 
};

/**
 * @brief class khác, để miêu tả xe taxi 
 * Taxi là lớp dẫn xuất được kế thừa từ lớp Vehicle
 */
class Taxi : public Vehicle
{
public:
    void run()
    {
        Vehicle::run();
        std::cout << "\nIt's a taxi.";
    }
private:

};

/***
 * @brief class xe tải
 * Struck là lớp dẫn xuất được kế thừa từ lớp Vehicle 
*/
class Struck : public Vehicle
{

};

int main()
{
    //Tạo một đối tượng Vehicle
    Taxi* Taxi_1 = new Taxi;
    Taxi_1->run();

    return 0;
}