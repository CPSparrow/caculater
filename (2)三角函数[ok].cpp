#include<bits/stdc++.h>
using namespace std;
int main() {
	while(1) {
		double pi_2=3.1415926535;
		double a_2,b_2,q_2,x_2;
		cout<<"��������Ҫ���еĲ���"<<endl;
		cout<<"sin��1��cos��2��tan��3"<<endl;
		cin>>a_2;
		if(a_2==1) {
			cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
			cout<<"�����1�������2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"����sin�Ƕ�"<<endl;
				cin>>x_2;
				q_2=sin(x_2*pi_2/180);
				cout<<endl;
				cout<<"����:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"�������"<<endl;
				cin>>q_2;
				x_2=asin(q_2)*180/pi_2;
				cout<<endl;
				cout<<"����:"<<x_2<<endl;
			}
		}
		if(a_2==2) {
			cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
			cout<<"�����1�������2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"����cos�Ƕ�"<<endl;
				cin>>x_2;
				q_2=cos(x_2*pi_2/180);
				cout<<endl;
				cout<<"����:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"�������"<<endl;
				cin>>q_2;
				x_2=acos(q_2)*180/pi_2;
				cout<<endl;
				cout<<"����:"<<x_2<<endl;
			}
		}
		if(a_2==3) {
			cout<<"�����Ǻ������Ƿ����Ǻ���"<<endl;
			cout<<"�����1�������2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"����tan�Ƕ�"<<endl;
				cin>>x_2;
				q_2=tan(x_2*pi_2/180);
				cout<<endl;
				cout<<"����:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"�������"<<endl;
				cin>>q_2;
				x_2=atan(q_2)*180/pi_2;
				cout<<endl;
				cout<<"����:"<<x_2<<endl;
			}
		}
		double jx_2;
		cout<<"�㻹�������"<<endl;
		cout<<"�����1,�������2"<<endl;
		cin>>jx_2;
		if(jx_2==1)continue;
		if(jx_2==2) {
			cout<<"OK,��˵����"<<endl;
			break;
		}
		if(jx_2!=1&&2) {
			cout<<"������´Σ���α����,����ȡ���˰�"<<endl;
			break;
		}
	}
	return 0;
}
