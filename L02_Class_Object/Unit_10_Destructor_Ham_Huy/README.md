# Destructor - Hàm hủy
<h3>Nội dung chính</h3>

- Hàm hủy (tiếng Anh: destructor) là một hàm thành viên đặc biệt của một lớp, được sử dụng để hủy bỏ một đối tượng. 
- Hàm hủy sẽ được thực thi tự động khi đối tượng bị hủy, có thể là khi đối tượng bị xóa khỏi bộ nhớ hoặc khi chương trình kết thúc.

Hàm hủy có tên bắt đầu bằng ký tự ~ và không có tham số. Hàm hủy có thể được sử dụng để thực hiện các công việc sau:

- Giải phóng tài nguyên đã được cấp phát cho đối tượng, chẳng hạn như bộ nhớ động, tệp, kết nối mạng, v.v.
- Cập nhật trạng thái của đối tượng trước khi nó bị hủy, chẳng hạn như lưu trữ dữ liệu hoặc đóng kết nối mạng.
- Thực hiện các công việc dọn dẹp khác.

<h3>Chú ý thêm:</h3>

- Với cấp phát tĩnh, vùng nhớ sẽ được thu hồi khi kết thúc hàm (chương trình con hoặc main), nên ko cần phải hủy đối với cấp phát tĩnh. Nó sẽ tự gọi hàm hủy khi hết scope của function chứa nó
- Với cấp phát động thì phải gọi hàm hủy bằng, câu lệnh ```delete objectName``` . Nếu muốn thu hồi vùng nhớ

- Vậy hàm hủy được viết tường mình để làm gì? trong khi hủy thì sẽ hủy toàn bộ các dữ liệu bên trong nó?
- Hàm hủy được viết tường mình khi, trong class hiện tạo có một đối tượng cấp phát động khác nằm trong class đó. Hàm hủy sẽ không tự động hủy dữ liệu của đối tượng đó. Nên ta cần viết tường mình hàm hủy để thu hồi vùng nhớ đó.

<h3>Để thực hiện hủy:</h3>

Nếu không gọi lệnh ```delete``` thì hàm hủy sẽ không được thực hiện.
Có thể hủy chủ động bằng cú pháp sau:
```C++
delete name_Object; // Thu hồi vùng nhớ cấp phát cho name_Object
```

```c++
class Person {
public:
  Person() {
    // Thực hiện các công việc khởi tạo
  }

  ~Person() {
    // Giải phóng tài nguyên đã được cấp phát
  }

private:
  // Các thuộc tính và phương thức riêng
};

```




