# CLASS AND OBJECT

## Class là gì?
    Class là lớp trong lập trình OOP, hiểu đơn giản là một định nghĩa chung cho một sự vật hiện tượng nào đó 
### Bên trong class có:
        - Thuộc tính (Property): là các tính chất có trong class đó, có thể hiểu là có biến thành viên.
        - Phương thức (Method): là các hành động mà class có thể thực hiện, có thể hiểu là các hàm.
    
# Object là gì?
Object là các đối tượng được tạo ra khi đã có class của đối tượng đó, Hiểu đơn giản là: 
    - Class là kiểu dữ liệu
    - Object là biến có kiểu dữ liệu là class trên
    - Tương tự như cấu trúc struct

VD: 
```C++
class women
{
    // THUỘC TÍNH - PROPETY - menber variables
    string ten;
    int tuoi;
    int chieuCao;
    // PHƯƠNG THỨC - METHOD - member funtions
    void lamViec()
    {...}
    void trangDiem()
    {...}
}

```
# LƯU Ý khi dùng phương thức OPP 
```C++ 
// KHÔNG NÊN 
women Jenny; // cấp phát tĩnh cho object (biến) Jenny thuộc class (kiểu dữ liệu) 
// NÊN
women *Sara; // cấp phát động cho đối tượng Sara thuộc lớp women
```
Vì cấp phát tĩnh lưu ở Stack 
    - ít dung lượng
    - truy cập nhanh
Cấp phát động lưu ở Heap
    - Dung lượng lớn
    - Linh hoạt theo RAM
