#include<bits/stdc++.h>
using namespace std;
int main() {
	string js,a,b,c,d;
	int n,i,s=0;
	while(1) {
		cout<<"请输入你将要执行的操作"<<endl;
		cout<<"计算请按1，三角函数请按2，方程请按3."<<endl;
		cin>>js;
		if(js=="1") {
			cout<<"请输入你要进行的操作"<<endl;
			cout<<"+打1，-打2，*打3，/打4"<<endl;
			cin>>a;
			if(a=="1") {
				int yame[10001];
				cout<<"输入你相加数的个数"<<endl;
				cin>>n;
				cout<<"好，请输入你要相加的数吧"<<endl;
				for(i=1; i<=n; ++i) {
					cin>>yame[i];
					s=s+yame[i];
				}
				cout<<endl;
				cout<<"答案是:"<<s<<endl;
			}
			if(a=="2") {
				int b,c;
				cout<<"好,请输入两个数吧"<<endl;
				cout<<"(顺序是前面那个减后面那个哦)"<<endl;
				cin>>b>>c;
				cout<<endl;
				cout<<"答案是:"<<b-c<<endl;
			}
			if(a=="3") {
				int ch=1;
				int yawe[100001];
				cout<<"输入你要相乘的个数"<<endl;
				cin>>n;
				cout<<"好，请输入你要相乘的数吧"<<endl;
				for(i=1; i<=n; ++i) {
					cin>>yawe[i];
					ch=ch*yawe[i];
				}
				cout<<endl;
				cout<<"答案是:"<<ch<<endl;
			}
			if(a=="4") {
				double cu1,cu2,cu3;
				cin>>cu1>>cu2;
				cu3=cu1/cu2;
				cout<<endl;
				cout<<"答案是:"<<cu3<<endl;
			}
			cout<<endl;
			continue;
		}
		if(js=="2") {
			double pi=3.1415926535;
			double q,x;
			cout<<"请输入你要进行的操作"<<endl;
			cout<<"sin打1，cos打2，tan打3"<<endl;
			cin>>a;
			if(a=="1") {
				cout<<"正三角函数还是反三角函数"<<endl;
				cout<<"正请打1，反请打2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"输入sin角度"<<endl;
					cin>>x;
					q=sin(x*pi/180);
					cout<<endl;
					cout<<"答案是:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"输入比例"<<endl;
					cin>>q;
					x=asin(q)*180/pi;
					cout<<endl;
					cout<<"答案是:"<<x<<endl;
				}
			}
			if(a=="2") {
				cout<<"正三角函数还是反三角函数"<<endl;
				cout<<"正请打1，反请打2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"输入cos角度"<<endl;
					cin>>x;
					q=cos(x*pi/180);
					cout<<endl;
					cout<<"答案是:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"输入比例"<<endl;
					cin>>q;
					x=acos(q)*180/pi;
					cout<<endl;
					cout<<"答案是:"<<x<<endl;
				}
			}
			if(a=="3") {
				cout<<"正三角函数还是反三角函数"<<endl;
				cout<<"正请打1，反请打2"<<endl;
				cin>>b;
				if(b=="1") {
					cout<<"输入tan角度"<<endl;
					cin>>x;
					q=tan(x*pi/180);
					cout<<endl;
					cout<<"答案是:"<<q<<endl;
				}
				if(b=="2") {
					cout<<"输入比例"<<endl;
					cin>>q;
					x=atan(q)*180/pi;
					cout<<endl;
					cout<<"答案是:"<<x<<endl;
				}
			}
			cout<<endl;
			continue;
		}
		if(js=="3") {
			cout<<"请输入对应的a,b,c"<<endl;
			double l,m,n,t1,t2,u;
			cin>>l>>m>>n;
			u=m*m-4*l*n;
			if(u>=0) {
				t1=(-m-sqrt(m*m-4*l*n))/(2*l);
				t2=(-m+sqrt(m*m-4*l*n))/(2*l);
				cout<<endl;
				cout<<"答案是:"<<endl; 
				cout<<"x1="<<t1<<"  "<<";"
				<<"  "<<"x2="<<t2<<endl;
			}
			if(u<0) {
				cout<<endl;
				cout<<"答案是:"<<endl;
				cout<<"无实根"<<endl;
			}
			cout<<endl;
			continue;
		} 
		else
		cout<<endl;
		cout<<"你还玩？"<<endl;
		cout<<"没时间了"<<endl;
		cout<<"一寸光阴一寸金啊"<<endl;
		cout<<"认真点"<<endl;
		cout<<endl;
	}
	return 0;
}
