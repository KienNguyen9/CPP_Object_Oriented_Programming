# Thuộc tính và phương thức static trong class

<h3>Nội dung chính:</h3>

- Từ khóa ```static``` nghĩa là tĩnh và không bị phụ thuộc hoặc bị thay đổi -> dù là có đối tượng hay không thì cũng trả về cùng 1 kết quả.
- Khi dùng từ khóa ```static``` thì có thể gọi hàm của 1 class mà không cần thông qua một object cụ thể nào cả
- Các hàm ```static``` thì chỉ có thể làm việc với các biến ```static``` trong class
- Các biến ```static``` nằm trong class phải được khai báo ```global``` (Tức là khai báo 2 lần). Nói cách khác biến này không khác gì 1 biến ```global``` nhưng có một class quản lí nó 