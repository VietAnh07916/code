Nội dung về các mở rộng của C++ từ các hình ảnh trên bao gồm 2 điểm chính:

**1. Cách ghi chú thích (Comment)**

* C++ hỗ trợ 2 kiểu ghi chú thích:
* Chú thích nhiều dòng: `/* chú thích */`
* Chú thích trên một dòng: `// chú thích trên một dòng`



**2. Mở rộng về `struct` và `union**`

* Trong C++, `struct` và `union` thực sự là các kiểu `class`.
* Tên của `struct` và `union` được xem trực tiếp là tên kiểu dữ liệu (tương tự như khi khai báo bằng lệnh `typedef`), cho phép khai báo biến ngắn gọn hơn so với ngôn ngữ C:
* *Cách viết chuẩn C:* `struct DIEM p;`
* *Cách viết rút gọn trong C++:* `DIEM p;`
**2. Toán tử định vị phạm vi (`::`)**

* Dùng để truy xuất một phần tử bị che bởi phạm vi hiện thời.
* Dùng trong định nghĩa hàm của các phương thức trong các lớp, để khai báo các phương thức chủ của các phương thức đang định nghĩa.
* Dùng để phân biệt các thành phần trùng tên của các lớp cơ sở.

**2. Toán tử `new` và `delete**`

* Là phương thức mới để thực hiện việc cấp phát động bộ nhớ.
* Sử dụng hai toán tử này linh hoạt hơn rất nhiều so với các hàm thư viện của C.

**3. Hàm inline**

* **Cú pháp:** `inline Kiểu Tên_hàm (các_tham_số) { //thân hàm }`
* Hàm inline phải được định nghĩa trước khi sử dụng.
* Trình biên dịch chèn trực tiếp đoạn chương trình vào chỗ hàm được gọi.
* Các hàm đệ quy không được là hàm inline.

**4. Tham số giá trị mặc định**

* Chỉ được khai báo trong prototype.
* Phải được nhóm lại vào các tham số cuối.
* Khi gọi chỉ có thể bỏ bớt từ phải sang trái và phải liên tiếp nhau.

**5. Biến tham chiếu**

* Biến tham chiếu giống như bí danh của biến khác.
* **Khai báo:** `Kiểu &Tên_biến`.
* Nếu không muốn thay đổi giá trị của tham số qua biến tham chiếu thì khai báo: `const kiểu &tên_biến`.
* Biến tham chiếu phải được khởi động khi khai báo.
