#include<bits/stdc++.h>
using namespace std;
int main() {
	string js,a,b,c,d;
	int n,i,s=0;
	while(1) {
		cout<<"�������㽫Ҫִ�еĲ���"<<endl;
		cout<<"�����밴1�����Ǻ����밴2�������밴3."<<endl;
		cin>>js;
		if(js=="1") {
			cout<<"��������Ҫ���еĲ���"<<endl;
			cout<<"+��1��-��2��*��3��/��4"<<endl;
			cin>>a;
			if(a=="1") {
				int yame[10001];
				cout<<"������������ĸ���"<<endl;
				cin>>n;
				cout<<"�ã���������Ҫ��ӵ�����"<<endl;
				for(i=1; i<=n; ++i) {
					cin>>yame[i];
					s=s+yame[i];
				}
				cout<<endl;
				cout<<"����:"<<s<<endl;
			}
			if(a=="2") {
				int b,c;
				cout<<"��,��������������"<<endl;
				cout<<"(˳����ǰ���Ǹ��������Ǹ�Ŷ)"<<endl;
				cin>>b>>c;
				cout<<endl;
				cout<<"����:"<<b-c<<endl;
			}
			if(a=="3") {
				int ch=1;
				int yawe[100001];
				cout<<"������Ҫ��˵ĸ���"<<endl;
				cin>>n;
				cout<<"�ã���������Ҫ��˵�����"<<endl;
				for(i=1; i<=n; ++i) {
					cin>>yawe[i];
					ch=ch*yawe[i];
				}
				cout<<endl;
				cout<<"����:"<<ch<<endl;
			}
			if(a=="4") {
				double cu1,cu2,cu3;
				cin>>cu1>>cu2;
				cu3=cu1/cu2;
				cout<<endl;
				cout<<"����:"<<cu3<<endl;
			}
			cout<<endl;
			continue;
		}
		if(js=="2") {
			double pi=3.1415926535;
			double q,x;
			cout<<"��������Ҫ���еĲ���"<<endl;
			cout<<"sin��1��cos��2��tan��3"<<endl;
			cin>>a;
			if(a=="1") {
				cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
				cout<<"�����1�������2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"����sin�Ƕ�"<<endl;
					cin>>x;
					q=sin(x*pi/180);
					cout<<endl;
					cout<<"����:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"�������"<<endl;
					cin>>q;
					x=asin(q)*180/pi;
					cout<<endl;
					cout<<"����:"<<x<<endl;
				}
			}
			if(a=="2") {
				cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
				cout<<"�����1�������2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"����cos�Ƕ�"<<endl;
					cin>>x;
					q=cos(x*pi/180);
					cout<<endl;
					cout<<"����:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"�������"<<endl;
					cin>>q;
					x=acos(q)*180/pi;
					cout<<endl;
					cout<<"����:"<<x<<endl;
				}
			}
			if(a=="3") {
				cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
				cout<<"�����1�������2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"����tan�Ƕ�"<<endl;
					cin>>x;
					q=tan(x*pi/180);
					cout<<endl;
					cout<<"����:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"�������"<<endl;
					cin>>q;
					x=atan(q)*180/pi;
					cout<<endl;
					cout<<"����:"<<x<<endl;
				}
			}
			cout<<endl;
			continue;
		}
		if(js=="3") {
			cout<<"�������Ӧ��a,b,c"<<endl;
			double l,m,n,t1,t2,u;
			cin>>l>>m>>n;
			u=m*m-4*l*n;
			if(u>=0) {
				t1=(-m-sqrt(m*m-4*l*n))/(2*l);
				t2=(-m+sqrt(m*m-4*l*n))/(2*l);
				cout<<endl;
				cout<<"����:"<<endl; 
				cout<<"x1="<<t1<<"  "<<";"
				<<"  "<<"x2="<<t2<<endl;
			}
			if(u<0) {
				cout<<endl;
				cout<<"����:"<<endl;
				cout<<"��ʵ��"<<endl;
			}
			cout<<endl;
			continue;
		} 
		else
		cout<<endl;
		cout<<"�㻹�棿"<<endl;
		cout<<"ûʱ����"<<endl;
		cout<<"һ�����һ���"<<endl;
		cout<<"�����"<<endl;
		cout<<endl;
	}
	return 0;
}
