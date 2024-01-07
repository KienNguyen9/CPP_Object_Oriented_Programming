/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Code này sẽ được vẽ lại bằng UML
 * 
 * @version 0.1
 * @date 2024-01-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>
using namespace std;

// Forward-declaration
class Vehicle;
class Engine;
class checker;
class Car;
class Person;

// Implementations - các cài đặt cụ thể
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

    // Hàm check
    bool isValid()
    {
        bool result = false;
        //...
        // Checker *checker
        // checker->check()
        // result = checker->getResult();
        return result;
    }
protected:
private:
    string modelName;
    
};

// class engine
class Engine
{

public:
    //getter-setter
    string engineName;

};

// Class check
class checker
{
    //
};

// Sub-class(lớp con)
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Created a car\n";
        ownerName = "NONE";
        //engine.init()...
        //...
        engine.engineName = "Vtech";
    } 

    // Overiding hàm run
    void run()  
    {
        cout <<"A car is running!!!\n";
    }
private:
    string ownerName;

    // Thuộc tính này gắn chặt với class Car, nên cần được khởi tạo trong hàm constructor của Car
    Engine engine; // Không cần thiết phải cấp phát động vì đối tượng chứa nó đã được CPĐ qua `new` ở hàm main
};


// Class person
class Person
{
public:
    void setVehicle(Vehicle *v)
    {   
        vehicle = v;
    }

private:
    Vehicle *vehicle;
    string fullName;    
};


int main()
{
    Vehicle *vehicle = new Car;
    Person *person = new Person;

    person->setVehicle(vehicle);

    return 0;
}