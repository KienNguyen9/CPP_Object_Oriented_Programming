# Abstraction - Tính trừu tượng

<h3>Tính trừu tượng trong lập trình là gì?</h3>

- Trừu tượng là trình bày ngắn ngọn một việc phức tạp 
- Là khả năng ẩn đi các chi tiết của một đối tượng.
- Làm giảm đi tính phức tạp của chương trình bằng cách chỉ cung cấp cho người dùng những thông tin cần thiết để họ sử dụng chương trình 

<h3>Nội dung chính:</h3>

Trong ngôn ngữ C++, tính trừu tượng được định nghĩa là khả năng ẩn đi các chi tiết không cần thiết của một đối tượng hoặc một hệ thống. Tính trừu tượng giúp làm giảm sự phức tạp của chương trình bằng cách chỉ cung cấp cho người dùng những thông tin cần thiết để họ có thể sử dụng đối tượng hoặc hệ thống đó.

Tính trừu tượng trong C++ được thể hiện dưới hai hình thức chính là:

Trừu tượng hóa dữ liệu: Là việc ẩn đi các chi tiết về cấu trúc dữ liệu của một đối tượng. Ví dụ, một đối tượng ``Point`` có thể được định nghĩa với các thuộc tính ``x`` và ``y``. Tuy nhiên, người dùng không cần biết cách thức lưu trữ các thuộc tính này trong bộ nhớ, chỉ cần biết cách sử dụng các thuộc tính này để thao tác với đối tượng.

Trừu tượng hóa hành vi: Là việc ẩn đi các chi tiết về cách thức thực hiện một hành vi nào đó. Ví dụ, một đối tượng ``Shape`` có thể có hành vi ``draw()`` để vẽ hình. Người dùng không cần biết cách thức thực hiện hành vi này, chỉ cần biết cách gọi hàm ``draw()`` để vẽ hình.

Có nhiều cách để thực hiện tính trừu tượng trong C++. Một cách phổ biến là sử dụng các lớp trừu tượng. Một lớp trừu tượng là một lớp không thể được tạo thành một đối tượng. Các lớp trừu tượng chỉ được sử dụng để cung cấp giao diện cho các lớp con.

Ví dụ, chúng ta có thể định nghĩa một lớp trừu tượng ``Shape`` như sau:

```C++
class Shape {
public:
  virtual void draw() = 0;
};
```

Lớp ``Shape`` có một hàm trừu tượng ``draw()``. Các lớp con của ``Shape`` phải triển khai hàm này để cung cấp cách thức thực hiện hành vi vẽ hình.

Ví dụ, chúng ta có thể định nghĩa một lớp con ``Circle`` của ``Shape`` như sau:

```C++
class Circle : public Shape {
public:
  void draw() override {
    // Vẽ hình tròn
  }
};
```

Lớp ``Circle`` triển khai hàm ``draw()`` để vẽ hình tròn.

Tính trừu tượng là một trong bốn tính chất đặc trưng của lập trình hướng đối tượng. Tính trừu tượng giúp làm giảm sự phức tạp của chương trình, cải thiện khả năng tái sử dụng mã và nâng cao khả năng bảo trì chương trình.