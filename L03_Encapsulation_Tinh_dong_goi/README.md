# Encapsulation - Tính đóng gói

Hướng đối tượng OOP là một mô hình lập trình, nên sẽ có các nguyên tắc thiết kế của nó
Và nó cần thỏa mản 4 nguyên tắc, đầu tiên là tính đóng gói(Encapsulation), hai là tính trừu tượng, ba là tính kế thừa, cuối cùng là tính đa hình.

<h3>Nội dung chính: </h3>

- Tính đóng gói (Encapsulation) là một nguyên tắc quan trọng, đề cập đến việc che giấu thuộc tính ```propety``` và hành vi ```method``` bên trong đối tượng, chỉ tiết lộ những gì cần thiết và quy định cách truy cập thông qua các phương thức công khai.
- Hiểu đơn giản là cái gì liên quan đế thuộc tính ```propety``` thì đặt vào vùng ```private``` 
- Muốn đọc hay sửa đổi thì dùng cặp hàm ```setter - getter```

- Như vậy, khi cần sửa đổi hoặc đọc một thuộc tính thì ta bắt buộc phải dùng một phương thức đặt ở public để truy cập và sửa đổi thuộc tính đó 
- Cặp hàm setter - getter : dùng từ khóa ```set```, ```get``` thêm tên thuộc tính phía sau để đặt tên phương thức

- Tại sao phải làm như thế cho phức tạp vấn đề? Vì đây là nguyên tắc của OOP để đảm bảo tính bảo mật của chương trình 
- Cần phải chú ý khi lựa chọn giữa ```struct``` và ```class```. Khi đối tượng có độ phức tạp về thuộc tính và phương thức thì dùng ```class``` , còn với một tập hợp các biến đơn thuần thì dùng ```struct``` 
