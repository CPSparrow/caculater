#include<bits/stdc++.h>
using namespace std;
int main() {
	while(1) {
		double pi_2=3.1415926535;
		double a_2,b_2,q_2,x_2;
		cout<<"请输入你要进行的操作"<<endl;
		cout<<"sin打1，cos打2，tan打3"<<endl;
		cin>>a_2;
		if(a_2==1) {
			cout<<"正三角函数还是反三角函数"<<endl;
			cout<<"正请打1，反请打2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"输入sin角度"<<endl;
				cin>>x_2;
				q_2=sin(x_2*pi_2/180);
				cout<<endl;
				cout<<"答案是:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"输入比例"<<endl;
				cin>>q_2;
				x_2=asin(q_2)*180/pi_2;
				cout<<endl;
				cout<<"答案是:"<<x_2<<endl;
			}
		}
		if(a_2==2) {
			cout<<"正三角函数还是反三角函数"<<endl;
			cout<<"正请打1，反请打2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"输入cos角度"<<endl;
				cin>>x_2;
				q_2=cos(x_2*pi_2/180);
				cout<<endl;
				cout<<"答案是:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"输入比例"<<endl;
				cin>>q_2;
				x_2=acos(q_2)*180/pi_2;
				cout<<endl;
				cout<<"答案是:"<<x_2<<endl;
			}
		}
		if(a_2==3) {
			cout<<"正三角函数还是反三角函数"<<endl;
			cout<<"正请打1，反请打2"<<endl;
			cin>>b_2;
			if(b_2==1) {
				cout<<"输入tan角度"<<endl;
				cin>>x_2;
				q_2=tan(x_2*pi_2/180);
				cout<<endl;
				cout<<"答案是:"<<q_2<<endl;
			}
			if(b_2==2) {
				cout<<"输入比例"<<endl;
				cin>>q_2;
				x_2=atan(q_2)*180/pi_2;
				cout<<endl;
				cout<<"答案是:"<<x_2<<endl;
			}
		}
		double jx_2;
		cout<<"你还想继续吗？"<<endl;
		cout<<"想请打1,不想请打2"<<endl;
		cin>>jx_2;
		if(jx_2==1)continue;
		if(jx_2==2) {
			cout<<"OK,你说了算"<<endl;
			break;
		}
		if(jx_2!=1&&2) {
			cout<<"认真点下次，这次别怪我,把你取消了啊"<<endl;
			break;
		}
	}
	return 0;
}
