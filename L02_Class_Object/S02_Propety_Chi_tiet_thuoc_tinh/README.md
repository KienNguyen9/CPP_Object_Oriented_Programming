# Chi tiết về thuộc tính trong OPP

Thuộc tính hay còn gọi là member variables
Hoàn toàn giống như struct chỉ khác ở một điểm là:
## Mặc định truy cập vùng nhớ 
- ở struct là public
- ở class là private
Tức là khi không cài thiết lập là public hay private thì sẽ là mặc định

## CÁC KIỂU DỮ LIỆU MÀ THUỘC TÍNH CÓ THỂ MANG
1. KIỂU DỮ LIỆU NGUYÊN THỦY 
    - int
    - float
2. KIỂU DỮ LIỆU CẤU TRÚC 
    - struct
    - vector
    - pointer, reference 

## Khi khai báo một đối tượng:
    - Nếu chưa gán giá trị cho thuộc tính, cố tình sử dụng sẽ gây ra lỗi.
    - Cách tránh lỗi này, khi khai báo thì khởi tạo giá trị ban đầu