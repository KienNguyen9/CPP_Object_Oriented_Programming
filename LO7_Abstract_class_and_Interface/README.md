# MỘT SỐ CLASS đặc biệt trong OOP

<h3>1. Abstract class - lớp trừu tượng</h3>

- Là class có từ 1 `pure virtual function` trở lên (ví dụ: "virtual void run() = 0;")
- Abstract class là class không thể khởi tạo được đối tượng
- Có thể khởi tạo con trỏ, nhưng ko thể cấp phát vùng nhớ cho đối tượng qua toán tử `new` như những class khác
- Nếu sub-class không `override` lại `pure virtual function` của `abstract class` thì sub-class đó cũng sẽ trở thành `abstract class` 

<h4>Khái niệm về hàm: `pure virtual function` </h4>

- Tức là hàm thuần ảo, không được có thân hàm 
- các hàm của sub-class phải được override

Cú pháp:
```C++
virtual void run() = 0;
```

Khi class có pure virtual function thì class đó là `abstract class`

- Thì clas này không thể khỏi tạo và sử dụng như 1 class bình thường được 
- Nó có thể làm parent-class, sau đó phát triển các sub-class để sử dụng theo ý muốn
- Ví dụ dễ hiểu là: phương tiện là `abstract class`, các sub-class là xe máy, xe hơi, xe tải,... Phương tiện là một lớp trừ tượng


<h3>2. Interface class</h3>

- Được phát triển trên `abstract class`
- Khi tất cả các phương thức của `parent-class` là `pure virtual function` thì class đó sẽ trở thành `Interface`