#include<bits/stdc++.h>
using namespace std;
int main() {
	while(1) {
		cout<<"请选择你要输入的类型:"<<endl;
		cout<<"1:一元一次方程(ax=b)"<<endl;
		cout<<"2:一元二次方程(y=ax^2+bx+c)"<<endl;
		cout<<"3:二元一次方程组(ax+by=m/cx+dy=n)" <<endl;
		cout<<"4:三元一次方程组(a1x+b1y+c1z=o/a2x+b2y+c2z=p/a3x+b3y+c3z=q)"<<endl;
		//cout<<endl;
		double fc_3;
		cin>>fc_3;
		if(fc_3==1) {
			double a1_3,b1_3;
			cout<<"请输入a,b的值"<<endl;
			cout<<"a=";
			cin>>a1_3;
			cout<<"b=";
			cin>>b1_3;
			cout<<endl;
			cout<<"结果为:x="<<b1_3/a1_3<<endl;
		}
		if(fc_3==2) {
			double a2_3,b2_3,c2_3,s2_3,x2_3,y2_3;
			cout<<"请输入a,b,c的值"<<endl;
			cout<<"a=";
			cin>>a2_3;
			cout<<"b=";
			cin>>b2_3;
			cout<<"c=";
			cin>>c2_3;
			s2_3=(b2_3)*(b2_3)-4*(a2_3)*(c2_3);
			if(s2_3>0) {
				x2_3=(-sqrt(s2_3)-b2_3)/(2*a2_3);
				y2_3=(sqrt(s2_3)-b2_3)/(2*a2_3);
				cout<<"结果为:"<<endl;
				cout<<"x1="<<x2_3<<"     "<<"x2="<<y2_3<<endl;
			}
			if(s2_3==0) {
				x2_3=(-b2_3)/(2*a2_3);
				cout<<"结果为:"<<endl;
				cout<<"x1=x2="<<x2_3<<endl;
			}
			if(s2_3<0) {
				cout<<"结果为:"<<endl;
				cout<<"无实根"<<endl;
			}
		}
		if(fc_3==3) {
			double a3_3,b3_3,c3_3,d3_3,m3_3,n3_3,x3_3,y3_3;
			cout<<"请输入a,b,m,c,d,n的值"<<endl;
			cout<<"a=";
			cin>>a3_3;
			cout<<"b=";
			cin>>b3_3;
			cout<<"m=";
			cin>>m3_3;
			cout<<"c=";
			cin>>c3_3;
			cout<<"d=";
			cin>>d3_3;
			cout<<"n=";
			cin>>n3_3;
			cout<<endl;
			x3_3=(b3_3*n3_3-d3_3*m3_3)/(b3_3*c3_3-a3_3*d3_3);
			y3_3=(a3_3*n3_3-c3_3*m3_3)/(a3_3*d3_3-b3_3*c3_3);
			cout<<"结果为:"<<endl;
			cout<<"x="<<x3_3<<"     "<<"y="<<y3_3<<endl;
		}
		if(fc_3==4) {
			double o4_3,p4_3,q4_3,r4_3,s4_3,t4_3,u4_3,v4_3,w4_3,x4_3,y4_3,z4_3,l4_3,m4_3,n4_3,hf1_3,hf2_3;
			cout<<"请输入a1,b1,c1,o,a2,b2,c2,p,a3,b3,c3,q的值"<<endl;
			cout<<"a1=";
			cin>>o4_3;
			cout<<"b1=";
			cin>>p4_3;
			cout<<"c1=";
			cin>>q4_3;
			cout<<"o=";
			cin>>l4_3;
			cout<<"a2=";
			cin>>r4_3;
			cout<<"b2=";
			cin>>s4_3;
			cout<<"c2=";
			cin>>t4_3;
			cout<<"p=";
			cin>>m4_3;
			cout<<"a3=";
			cin>>u4_3;
			cout<<"b3=";
			cin>>v4_3;
			cout<<"c3=";
			cin>>w4_3;
			cout<<"q=";
			cin>>n4_3;
			cout<<endl;
			hf1_3=((n4_3*o4_3*r4_3-l4_3*r4_3*u4_3)*(s4_3*o4_3*u4_3-p4_3*r4_3*u4_3))-
			      ((m4_3*o4_3*u4_3-l4_3*r4_3*u4_3)*(v4_3*o4_3*r4_3-p4_3*r4_3*u4_3));
			hf2_3=((s4_3*o4_3*u4_3-p4_3*r4_3*u4_3)*(w4_3*o4_3*r4_3-q4_3*r4_3*u4_3))-
			      ((t4_3*o4_3*u4_3-q4_3*r4_3*u4_3)*(o4_3*r4_3*v4_3-p4_3*r4_3*u4_3));
			z4_3=hf1_3/hf2_3;
			y4_3=((o4_3*m4_3*u4_3-l4_3*r4_3*u4_3)-(o4_3*t4_3*u4_3-q4_3*r4_3*u4_3)*z4_3)/
			     (o4_3*u4_3*s4_3-p4_3*r4_3*u4_3);
			x4_3=(l4_3-q4_3*z4_3-p4_3*y4_3)/o4_3;
			cout<<"结果为:"<<endl;
			cout<<"x="<<x4_3<<"     "<<"y="<<y4_3<<"     "<<"z="<<z4_3<<endl;
			cout<<endl;
			cout<<endl;
		}
	}
	return 0;
}
