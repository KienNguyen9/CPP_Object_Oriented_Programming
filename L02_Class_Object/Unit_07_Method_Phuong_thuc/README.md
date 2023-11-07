# Bài 7 - Phương thức trong OOP

## Sự khác nhau của hàm thành viên hay phương thức so với hàm bình thường
- Lời gọi hàm (Function call): là điểm khác biệt đầu tiên, cú pháp của lời gọi hàm thành viên là 
```C++
// Lời gọi hàm bình thường
callFunction();
// Lời gọi hàm thành viên
object_A->callFunction_A(); 
```
## Tham số mặc định của hàm thành viên - defaul parameter 
- Là viết ra một hành thành viên có tham số mặc định
- Khi ko nhập tham số lúc gọi hàm thì hàm sẽ dùng tham số mặc định để làm việc
### Lưu ý: Nếu hàm có 2 tham số trở lên thì:
- Bắt buộc phải viết tham số mặc định ở phía sau cùng
- Do cần phải phù hợp logic khi truyền hoặc không truyền tham số'

Ví dụ:
```C++
class A
{
    public:
    /*
    Hàm introduce có tham số mặc định là true nếu không được truyền tham số thực
    */
    void introduce(bool isCheck = true)
    {
        if(isCheck)
        {
            std::cout << "Xin chao!";
        }
    }
    private:
};
```
## Kiểu trả về - Data type
Kiểu void: thực hiện xong là ko trả về gì cả
kiểu int, float, string, struct, vector, class,...

### Lưu ý:
struct dùng cấp phát tĩnh, dùng để tạo kiểu dữ liệu gồm các biến và hàm đơn giản
class nên dùng cấp phát động, để tạo kiểu dữ liệu nhiều thuộc tính và phương thức phức tạp hơn

## Nạp chồng hàm
...
## Nạp chồng toán tử 
...