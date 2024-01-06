# Hàm hủy - Destructor trong Tính kế thừa 

Trong Inheritance, khi một hàm con được kế thừa thì
Hàm khởi tạo của lớp cha sẽ được gọi trước, sau đó là hàm khởi tạo của lớp con được gọi

Vậy quá trình thu hồi được diễn ra như thế nào
- Qúa trình này diễn ra ngược lại, delete từ con trước rồi đến cha 
- Bài này chỉ cần biết luồng của chương trình là được