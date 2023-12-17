/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về chỉ định truy cập - Access modifier
 * @version 0.1
 * @date 2023-12-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
using namespace std;

// Parent class
class Vehicle
{
// Có thể truy cập thông qua đối tượng
public:
    // Getter-Setter function: Model Name
    string getModelName(){
        return modelName;
    }
    void setModelName(string mn){
        modelName = mn;
    }

// Chỉ định truy cập protected: chỉ cho phép lớp con truy cập, không thể truy cập từ bên ngoài thông qua đối tượng nào
protected:
    void run(){
        cout << "The vehicle is running.\n";
    }

// Không thể truy cập bên ngoài class này thông qua đối tượng nào
private:
    string modelName;    
};


// Sub-class: kế thừa kiểu public từ lớp Vehicle
class Taxi : public Vehicle
{
public:
    // Trong class con có thể gọi sử dụng các tài nguyên được thừa kế ở phân vùng public và protected 
    void start()
    {
        // Gọi thử thuộc tính modelName ở private của lớp cha
        // modelName = "Turtle";  // Sẽ bị lỗi inaccessible : cố tình truy cập vào vùng chỉ định bảo vệ
       
        cout << "Started. Ready to run.\n";
        // gọi hàm run() nằm ở protected: được
        run();
    }
private:
};

int main()
{
    Taxi* taxi_1 = new Taxi;
    taxi_1->start();
    return 0;
}