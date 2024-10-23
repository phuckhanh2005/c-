#include<iostream>
#include<math.h>
using namespace std;
class sophuc{
	private:
		int thuc,ao;
	public:
	sophuc(){}	
	sophuc(int thuc ,int ao){
		this->ao=0;
		this->thuc=0;
	}		
	void nhap(){
		cin>>thuc;
		cin>>ao;
	}
	void in(){
		cout<<thuc<<" + "<<ao<<"i = 0"<<endl;
	}
	double tinh(){
		return sqrt(pow(thuc,2)+pow(ao,2));
	}
	sophuc operator+(sophuc sp2){
		sophuc tong;
	tong.thuc=this->thuc+sp2.thuc;
		tong.ao=this->ao+sp2.ao;
	}
		sophuc operator-(sophuc sp2){
		sophuc hieu;
		hieu.thuc=this->thuc-sp2.thuc;
		hieu.ao=this->ao+sp2.ao;
	}
	sophuc operator*(sophuc sp2){
		sophuc tich;
		tich.thuc=(this->thuc*sp2.thuc)+(this->ao*sp2.ao);
		tich.ao=(this->thuc*sp2.ao)+(this->ao*sp2.thuc);
	}
	sophuc operator/(sophuc ps2){
		sophuc thuong;
		
	}
};
int main(){
	sophuc s1(1,2),s2(2,2);
	sophuc tong;
	tong=s1+s2;
	tong.in();
	return 0;
	
}
