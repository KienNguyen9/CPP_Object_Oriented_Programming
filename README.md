# Ojbect oriented programming - Lập trình hướng đối tượng 
<details>
    <summary>
        <h2>
            Lesson 1️⃣ - Giới thiệu khái niệm cơ bản về OOP
        </h2>        
    </summary>

<h3>
    Object oriented programming là gì?
</h3>
OOP là viết tắt của Object-Oriented Programming, hay lập trình hướng đối tượng. Đây là một phương pháp lập trình dựa trên việc tổ chức dữ liệu và hành vi thành các đối tượng.

Trong C++, OOP được hỗ trợ bởi các khái niệm sau:

Lớp (Class): Một lớp là một khuôn mẫu cho các đối tượng. Nó xác định các thuộc tính và hành vi của các đối tượng đó.
Đối tượng (Object): Một đối tượng là một thể hiện của một lớp. Nó chứa dữ liệu và hành vi được xác định bởi lớp đó.
Thuộc tính (Attribute): Một thuộc tính là một biến được liên kết với một lớp hoặc đối tượng. Nó có thể được sử dụng để lưu trữ dữ liệu hoặc thông tin về đối tượng.
Hành vi (Behavior): Một hành vi là một hàm được liên kết với một lớp hoặc đối tượng. Nó xác định những gì đối tượng có thể làm.
OOP cung cấp một số lợi thế so với lập trình thủ tục truyền thống, bao gồm:

Rõ ràng và dễ hiểu: OOP giúp tổ chức mã một cách rõ ràng và dễ hiểu hơn.
Tái sử dụng: OOP cho phép bạn tái sử dụng mã và dữ liệu.
Tính bảo trì: OOP giúp mã dễ bảo trì và sửa đổi hơn.
Một số ví dụ về OOP trong C++ bao gồm:

Tạo một lớp cho các đối tượng hình chữ nhật: Lớp này có thể xác định các thuộc tính như chiều rộng, chiều cao và màu sắc. Nó cũng có thể xác định các hành vi như vẽ hình chữ nhật và tính toán diện tích.
Tạo một lớp cho các đối tượng người: Lớp này có thể xác định các thuộc tính như tên, tuổi và địa chỉ. Nó cũng có thể xác định các hành vi như nói, đi bộ và chạy.
Để bắt đầu học OOP trong C++, bạn có thể tham khảo các tài liệu sau:

- C++ Primer: Một cuốn sách giáo khoa toàn diện về C++.
- Effective C++: Một cuốn sách cung cấp các mẹo và thủ thuật để viết mã C++ hiệu quả.
- The C++ Standard Library Tutorial and Reference: Một cuốn sách tham khảo về thư viện chuẩn C++.

</details>


<details>
    <summary>
        <h2>
            Lesson 2️⃣ - Class & Object 
        </h2>        
    </summary>
        
<details>
   <summary>
        <h2>
            Unit 1 - Giới thiệu về OOP 
        </h2>        
    </summary>
# KHÁI NIỆM LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG 


## Lập trình OOP là gì?
Lập trình hướng đối tượng (OOP) là một mô hình lập trình (programming paradigm) dựa trên khái niệm "đối tượng" mà trong đó, đối tượng chứa đựng các dữ liệu, trên các trường, thường được gọi là các thuộc tính; và mã nguồn, được tổ chức thành các phương thức. 

Một cách giản lược, lập trình hướng đối tượng là một cách tổ chức mã nguồn theo mô hình các đối tượng, trong đó mỗi đối tượng là một bản sao của một mẫu đối tượng chung. Mỗi đối tượng có thể có các thuộc tính và phương thức riêng.

- Đối tượng: Đối tượng là một thực thể có thể tồn tại trong thế giới thực hoặc thế giới ảo. Mỗi đối tượng có các thuộc tính và phương thức riêng.
- Lớp: Lớp là một mô hình chung cho các đối tượng. Lớp chứa các định nghĩa về thuộc tính và phương thức của đối tượng.

### Lập trình hướng đối tượng có bốn đặc tính chính:

Đóng gói (Encapsulation): Tính đóng gói cho phép lập trình viên nhóm các dữ liệu và phương thức liên quan thành một đơn vị duy nhất. Điều này giúp bảo vệ dữ liệu khỏi bị truy cập trái phép và giúp chương trình dễ hiểu và dễ sử dụng hơn.

Trừu tượng hóa (Abstraction): Tính trừu tượng hóa cho phép lập trình viên tập trung vào các đặc tính quan trọng của một đối tượng mà không cần quan tâm đến các chi tiết triển khai cụ thể. Điều này giúp đơn giản hóa chương trình và làm cho nó dễ hiểu hơn.

Kế thừa (Inheritance): Tính kế thừa cho phép một lớp mới kế thừa các thuộc tính và phương thức từ một lớp hiện có. Điều này giúp tiết kiệm thời gian và công sức cho lập trình viên, đồng thời giúp chương trình dễ bảo trì hơn.

Đa hình (Polymorphism): Tính đa hình cho phép các đối tượng khác nhau có thể phản ứng giống nhau với cùng một lời gọi phương thức. Điều này giúp chương trình linh hoạt và dễ sử dụng hơn.

### Lập trình hướng đối tượng có nhiều ưu điểm, bao gồm:

- Tính trừu tượng: Lập trình hướng đối tượng cho phép lập trình viên tập trung vào các tính chất và hành vi của đối tượng, mà không cần phải quan tâm đến cách thức thực hiện.
- Tính tái sử dụng: Lập trình hướng đối tượng cho phép lập trình viên tái sử dụng mã nguồn đã được viết.
- Tính bảo mật: Lập trình hướng đối tượng cho phép lập trình viên bảo vệ dữ liệu khỏi truy cập trái phép.
- Tính mở rộng: Lập trình hướng đối tượng cho phép lập trình viên dễ dàng mở rộng ứng dụng.


# Ngoài ra, OOP còn có một số đặc tính khác như:

Lập trình hướng đối tượng dựa trên lớp (Class-based object-oriented programming): Đây là kiểu OOP phổ biến nhất, trong đó các đối tượng được tạo ra từ các lớp.

Lập trình hướng đối tượng dựa trên đối tượng (Object-based programming): Kiểu OOP này không sử dụng các lớp, thay vào đó, các đối tượng được tạo ra trực tiếp.

Lập trình hướng đối tượng dựa trên thành phần (Component-based object-oriented programming): Kiểu OOP này tập trung vào các thành phần có thể tái sử dụng.

OOP là một kỹ thuật lập trình mạnh mẽ được sử dụng trong nhiều lĩnh vực khác nhau, bao gồm phát triển phần mềm, thiết kế web và đồ họa máy tính.


Lập trình hướng đối tượng là một mẫu hình lập trình phổ biến được sử dụng trong nhiều ngôn ngữ lập trình, bao gồm Java, C++, Python, JavaScript,...

VD: 

| Structure programming paradigm-Funtions:| Object Oriented programming paradigm - Class & Object|
|---|---|
| 1. Vẽ ra sân bóng               |   1. Người, cầu thủ, trọng tài  |
| 2. Vẽ Người                     |   2. quả bóng |
| 3. Cập nhật vị trí              |   3. tỉ số | 
| 4. Sút bóng                     |   4. Thời tiết | 
| 5. Tỉ số                        |   Các class này sẽ tương tác với nhau để vận hành |
| ...                             |  |       
</details>


    

</details>


<details>
    <summary>
        <h2>
            Lesson 3️⃣ Nguyên tắc đóng gói - Encapsulation
        </h2>        
    </summary>

    

</details>


<details>
    <summary>
        <h2>
            Lesson 4️⃣ Nguyên tắc trừu tượng - Abstraction
        </h2>        
    </summary>

    

</details>


<details>
    <summary>
        <h2>
            Lesson 5️⃣ Tính kế thừa - Inheritance
        </h2>        
    </summary>

    

</details>


<details>
    <summary>
        <h2>
            Lesson 6️⃣ Tính đa hình - Polymorphism
        </h2>        
    </summary>

    

</details>


<details>
    <summary>
        <h2>
            Lesson 7️⃣ Class đặc biệt 
        </h2>        
    </summary>

    

</details>


<details>
    <summary>
        <h2>
            Lesson 8️⃣ Ngôn ngữ mô hình hóa UML
        </h2>        
    </summary>

    

</details>

<details>
    <summary>
        <h2>
            Lesson 9️⃣ Tối ưu hóa mô hình hướng đối tượng
        </h2>        
    </summary>

    

</details>

<details>
    <summary>
        <h2>
            Lesson 🔟 Design pattern
        </h2>        
    </summary>    

</details>

<details>
    <summary>
        <h2>
            Extra lesson - Cách tố chức 1 project 
        </h2>        
    </summary>    

</details>