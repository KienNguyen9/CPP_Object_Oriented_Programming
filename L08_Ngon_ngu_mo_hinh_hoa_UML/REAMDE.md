# Ngôn ngữ mô hình hóa - Unified modling language

Là một ngôn ngữ để thiết kế các chương trình với mô hình hướng đối tượng
Không dùng chữ viết mà dùng các bản vẽ, mô hình
Nó là bản thiết kế của chương trình

<h3>
    Class diagram
</h3>

- Thể hiện các mối liên hệ giữa các class với nhau
- access modifier: `+` là `public` , `-` là `private`, `#` là protected  
- Kế thừa: kí hiệu mũi tên tam giác rỗng (generalization) từ khóa giữa `Extends` có nghĩa là mở rộng
- Bao hàm (Composition)  hay còn gọi là "A has a B" tức là cái này chứa cái kia: kí hiệu hình thoi rỗng tên là  `Aggireration 2`. Hình thoi sẽ quay vào class lớn hơn chứa cái còn lại
- Kiểu bao hàm thứ 2 là: 2 class quan hệ chặt chẽ ko thể tách rời  với kí hiệu hình thôi đặc màu đen
- Quan hệ liên kết: 2 đối tượng sẽ gọi đến nhau(1 - 2 chiều). Hai đối tượng bình đẳng nhau. kí hiệu hình mũi tên  



<h3>Ghi chú</h3>

- Khi khai báo 1 class trong 1 class khác
- Nếu class lớp chứa class còn lại đã được cấp phát động bằng toán từ `new` 
- Class nhỏ bên trong class lớp đó chỉ cần khai báo bình thường ko cần cấp phát động
- Vì Tất cả các thuộc tính của lớp được cấp phát động đều được cấp phát động
- Nếu muốn cấp phát động thì cũng được, nhưng phải nhớ thu hồi vùng nhớ ở hàm destructor của class lớn đang chứa nó (lưu ở vùng nhớ HEAP khác và liên kết với vùng nhớ của lớp lớn), ngược lại nó sẽ nằm chung trong 1 vùng nhớ HEAP
- Về bản chất cũng như nhau 

<h3>Bội số quan hệ - Multiplicity</h3>

