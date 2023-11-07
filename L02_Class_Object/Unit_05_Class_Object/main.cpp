/**
 * @file main.cpp
 * @author Kien Nguyen (you@domain.com)
 * @brief Learn OPP - cLASS - OBJECT
 * @version 0.1
 * @date 2023-10-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
//Lớp women
class women
{
    public:
    std::string ten;
    int tuoi;
    void giaoTiep()
    {
        std::cout<<"Hi! My name is "<< ten <<", and I'm "<< tuoi <<" years old";
        
    }
    void makeUp()
    {}
    private:
    std::string congViec;
};
int main()
{
    // tạo đối tượng Sara cấp phát động
    women *Sara = new women;
    Sara->tuoi = 18;
    Sara->ten = "Sara Nguyen";
    Sara->giaoTiep();

    return 0;
}