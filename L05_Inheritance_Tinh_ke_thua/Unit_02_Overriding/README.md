# Overriding 

<h3>Overriding là gì?</h3>

- Là một cơ chế quan trong của tính kế thừa ``Inheritance``
- Lớp con có thể tái định nghĩa phương thức đã được kế thừa từ lớp cha
- Nhưng có thể bổ sung và dùng lại thông tin của lớp cha 
- Khi ```Overriding``` có thể gọi lại phương thức của lớp cha và thêm những gì cần bổ sung


```c++
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

class Taxi : public Vehicle
{
public:
    // Overriding hàm run() 
    void run()
    {
        Vehicle::run(); // gọi lại phương thức của lớp cha
        std::cout << "\nIt's a taxi."; // Thêm mới 
    }
private:
};
```