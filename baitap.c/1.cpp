1. chú thích
   // Chú thích
   
2.Nhập/xuất
#include<iostream>  

using namespace std;  


int main(){  

	int a;  
	
	cout<<"Nhap so nguyen a : ";  
	
	cin>>a;  
	
	cout<<"So a la : "<<a<<endl;  
	
}  

3. Vị trí khai báo biến
     
#include<iostream>  

using namespace std;


//Bien toan cuc
int n =10;

int main(){
	int x = 5;//Bieh toan cuc 
	
	cout<<"In ra bien x va n"<<endl;
	cout<<"Bien x la : "<<x<<endl;
	cout<<"Bien n la : "<<n<<endl;
}  

4.Chuyển đổi kiểu dữ liệu  
#include<iostream>
using namespace std;


int main(){
	int a=5,b=10;
	float c;
	
	
	c=a*1.0/b;
	cout<<"ket qua a/b la : "<<c<<endl;
}  
5.Kiểu cấu trúc  


#include<iostream>  
#include<string>  
using namespace std;  
struct Sinhvien{  
string ten;  
int tuoi;  
float gpa;  
};  
int main(){  
Sinhvien sv1={"Nguyen van a",20,3.5};  
sv1.tuoi=21;  
cout<<"ten: "<<sv1.ten<<endl;
cout<<"Tuoi: "<<sv1.tuoi<<endl;
cout<<"GPA: "<<sv1.gpa<<endl;  

6. Toán tử phạm vi
   #include<iostream>
   using namespace std;
   int x=100;
   int main(){
   int x=10;
   cout<<"bien cuc bo x= "<<x<<endl;
   cout<<"Bien toan cuc x= "<<::x<<endl;

7.cấp phát và giải phóng bộ nhớ  
#include <iostream>
using namespace std;

int main() {
   
    int *p = new int; 
    *p = 10;

    
    int *p2 = new int(100); 

   
    delete p;
    delete p2;
    p = nullptr;
    p2 = nullptr;

    return 0;
}  

8.hàm inline  
#include <iostream>
using namespace std;


inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int res = max(10, 20); 
    
    cout << "Max: " << res << endl;
    return 0;
}  

9.Tham số giá trị mặc định  
#include <iostream>
using namespace std;


void xinChao(string ten = "Bạn") {
    cout << "Xin chào " << ten << "!\n";
}

int main() {
    xinChao("Nam"); 
    xinChao();      

    return 0;
}  
10. Biến tham chiếu  
#include <iostream>
using namespace std;


void hoanDoi(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    
    hoanDoi(a, b); 

    cout << "a = " << a << ", b = " << b << endl; 
    return 0;
}  

11.chồng hàm  
#include <iostream>
using namespace std;


int tinhTong(int a, int b) {
    return a + b;
}


int tinhTong(int a, int b, int c) {
    return a + b + c;
}


double tinhTong(double a, double b) {
    return a + b;
}

int main() {
    cout << tinhTong(5, 10) << endl;
    cout << tinhTong(5, 10, 15) << endl;    
    cout << tinhTong(2.5, 4.3) << endl;     

    return 0;
}  
12.chồng toán tử  
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) {}

    
    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        os << ps.tu << "/" << ps.mau;
        return os;
    }

   
    friend istream& operator>>(istream& is, PhanSo& ps) {
        cout << "Nhập tử số: ";   is >> ps.tu;
        cout << "Nhập mẫu số: "; is >> ps.mau;
        return is;
    }
};

int main() {
    PhanSo p;
    cin >> p;
    cout << "Phân số vừa nhập: " << p << endl;

    return 0;
}

