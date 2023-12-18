# Hàm khởi tạo trong sự kế thừa - Constructor in inheritance 

<h4>Nội dung chính:</h4>

- Lưu ý, hàm `constructor` không thể `overriding` được. Nhắc lại `overriding` là định nghĩa lại và có thể kế thừa (gọi lại tên chính hàm đang định nghĩa nằm ở lớp cha)
- Khi có 1 `sub-class` kế thừa của 1 `parent-class` thì hàm `constructor` cũng được kế thừa. Tức là khi khởi tạo 1 đối tượng từ `sub-class` thì sẽ có 2 hàm `constructor` được gọi (của lớp cha trước và đến lớp con).
- Trình tự của ví dụ trên được thực hiện như sau: tạo 1 đối tượng từ `sub-class`, `constructor-parent-class` được gọi để khởi tạo toàn bộ thuộc tính và phương thức của lớp cha sẽ được `sub-class` kế thừa, sau đó `constructor-sub-class` được gọi để tạo toàn bộ thuộc tính, phương thức riêng của `sub-class`
- Chú ý, chỉ có 1 đối tượng được tạo ra, mặc dù `Constructor-parent-class` đã được gọi ...
- Có thể chủ động cho hàm khởi tạo của `parent-class` bằng cú pháp ```Constructor-sub(string name) : Constructor-parent(name)```
- Đây là một vấn đề cần lưu ý trong OOP: nó tạo ra sự phức tạp khi kế thừa các hàm đặc biệt như `constructor` và `destructor`, cần phải nắm chắc kiến thức này
