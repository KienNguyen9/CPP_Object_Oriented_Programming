# Chi tiết về thuộc tính trong OPP
Thuộc tính hay còn gọi là member variables

# Hoàn toàn giống như struct chỉ khác ở một điểm là:
## Mặc định truy cập vùng nhớ (default accessibility)

The two constructs are identical in C++ except that in structs the default accessibility is public, whereas in classes the default is private. 
Classes and structs are the constructs whereby you define your own types.

Hai cấu trung này giống hệt nhau trong C++. Ngoại trừ, Khả năng truy cập mặc định: 
- ở struct là public
- ở class là private
Tức là khi không cài thiết lập là public hay private thì sẽ là mặc định

## CÁC KIỂU DỮ LIỆU MÀ THUỘC TÍNH CÓ THỂ MANG
1. KIỂU DỮ LIỆU NGUYÊN THỦY (Primitive)
    - char
    - int
    - float, double
2. KIỂU DỮ LIỆU CẤU TRÚC 
    - string
    - enum (xem lại)
    - array
    - struct
    - vector
    - pointer, reference (liên kết với đối tượng khác) (làm việc với danh sách liên kết) 

## Khi khai báo một đối tượng:
    - Nếu chưa gán giá trị cho thuộc tính, cố tình sử dụng sẽ gây ra lỗi.
    - Cách tránh lỗi này, khi khai báo thì khởi tạo giá trị ban đầu
## Tên của biến thành viên
    - giống như cách đặt tên biến bình thường

## Khai báo - khởi tạo
    - Cách khai báo: kiểu dữ liệu đi cùng tên biến
    - Khi khai báo mà chưa khởi tạo dữ liệu 
        + Nếu ở global sẽ có giá trị mặc định
        + Ở local thì nếu không có khởi tạo giá trị là vô định
    
    - Luôn khai báo cấp phát động
```C++
// Khai báo cấp phát động
Wonam* hariwon = new woman;      
```