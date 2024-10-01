#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string hoten;
		string ns;
		bool gt;
		float toan,tin,triet;
	public:
		void nhap(){
			fflush(stdin);
			cout<<"hoten "<<endl;
			getline(cin,hoten);
			
			cout<<"ngaysinh "<<endl; 
			getline(cin,ns);
			cout<<"gt "<<endl;cin>>gt;
			cout<<"diem"<<endl;
			cout<<"toan "<<endl;cin>>toan;
			cout<<"tin "<<endl;cin>>tin;
			cout<<"triet"<<endl;cin>>triet;
		}	
		float dtb(){
			return (toan+tin+triet)/3;
		}
		void in(){
			cout<<hoten<<"|"<<ns<<"|"<<gt<<"|"<<toan<<"|"<<tin<<"|"<<triet<<"|"<<endl;
		}
		
};
int main(){
	int n;
	cout<<"nhap so sv"<<endl;
	cin>>n;
	int dem=0;
	sinhvien*sv[n];
	for(int i=0;i<n;i++){
		dem++;
		cout<<"sinhvienthu: "<<dem<<endl;
		sv[i] =new sinhvien();
		sv[i]->nhap();
		sv[i]->in();
		cout<<sv[i]->dtb()<<endl;
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
		if(sv[i]->dtb() > sv[j]->dtb()){
			float tem = sv[j]->dtb();
			sv[j]->dtb() == sv[i]->dtb();
		    sv[i]->dtb() == tem;
		}
	}
	for(int i=0;i<n;i++){
		cout<<sv[i]->dtb()<<" ";
	}
		       
		       
		       
		       
		       
}
