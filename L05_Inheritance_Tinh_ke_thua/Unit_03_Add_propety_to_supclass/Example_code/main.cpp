/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ này là về thêm thuộc tính cho một lớp dẫn xuất
 * @version 0.1
 * @date 2023-12-17
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
    // Đây là phương thức của lớp cha, nhưng trong ví dụ này KHÔNG DÙNG "virtual function" mà overriding  
    // Nhưng từ khóa virtual là khuyến nghị nên dùng
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
    // Overriding - kế thừa và thêm tính năng
    // Đây là phương thức của lớp cha, nhưng trong ví dụ này KHÔNG DÙNG "virtual function" mà overriding  
    // Nhưng từ khóa virtual là khuyến nghị nên dùng
    void run()
    {
        Vehicle::run();
        std::cout << "\nIt's a taxi.";
    }

    /**
     * @brief Overloading - viết lại hàm run() có thêm tham số để set số KM
     * 
     */
    void run(int km)
    {
        kmCounter = km; 
    }

    /**
     * @brief Hàm tính tiền taxi
     * được tính bằng công thức: 10000*kmCounter
     */
    int feeCalculate()
    {
        return kmCounter*10000;
    }
private:
    /**
     * @brief Thuộc tính mới cần thêm vào để tính tiền cho các chuyến taxi
     * là một thuộc tính số nguyên
     */
    int kmCounter;

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
    Taxi_1->run(10); 
    std::cout << "\nFee = " << Taxi_1->feeCalculate() << " VND\n";
    return 0;
}