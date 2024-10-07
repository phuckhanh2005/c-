#include<bits/stdc++.h>
using namespace std;
class vattu{
	private:
		string mavt;
		string tenvt;
		int sl;
		float gia;
		
	public:
		void nhap(){
			fflush(stdin);
			cout<<" ma vt :"; getline(cin,mavt);
			cout<<" ten vt :";getline(cin,tenvt);
			cout<<" soluong :";cin>>sl;
			cout<<" gia : ";cin>>gia;
			
		}
		float tinhtien(){
			return sl*gia;
		}
		void in(){
			cout<<mavt<<" "<<tenvt<<" "<<sl<<" "<<gia<<endl;
		}
		bool sosanh(vattu vt2){
			return tinhtien()<vt2.tinhtien();
		}
};
int main(){
	int n;
	cout<<"nhap n vatu";
	cin>>n;
	vattu *vt[n];
	for(int i=0;i<n;i++){
		vt[i]=new vattu();
		vt[i]->nhap();
	}
		for(int i=0;i<n;i++){
		vt[i]->in();
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(vt[i]->sosanh(*vt[j])){
				swap(vt[i],vt[j]);
			}
		}
	}
		for(int i=0; i<n; i++){
		vt[i]->in();
	}		
}
