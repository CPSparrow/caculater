#include <bits/stdc++.h>
using namespace std;

void func_2(void){
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
}
void func_3(void){
	while(1) {
		cout<<"��ѡ����Ҫ���������:"<<endl;
		cout<<"1:һԪһ�η���(ax=b)"<<endl;
		cout<<"2:һԪ���η���(y=ax^2+bx+c)"<<endl;
		cout<<"3:��Ԫһ�η�����(ax+by=m/cx+dy=n)" <<endl;
		cout<<"4:��Ԫһ�η�����(a1x+b1y+c1z=o/a2x+b2y+c2z=p/a3x+b3y+c3z=q)"<<endl;
		//cout<<endl;
		double fc_3;
		cin>>fc_3;
		if(fc_3==1) {
			double a1_3,b1_3;
			cout<<"������a,b��ֵ"<<endl;
			cout<<"a=";
			cin>>a1_3;
			cout<<"b=";
			cin>>b1_3;
			cout<<endl;
			cout<<"���Ϊ:x="<<b1_3/a1_3<<endl;
		}
		if(fc_3==2) {
			double a2_3,b2_3,c2_3,s2_3,x2_3,y2_3;
			cout<<"������a,b,c��ֵ"<<endl;
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
				cout<<"���Ϊ:"<<endl;
				cout<<"x1="<<x2_3<<"     "<<"x2="<<y2_3<<endl;
			}
			if(s2_3==0) {
				x2_3=(-b2_3)/(2*a2_3);
				cout<<"���Ϊ:"<<endl;
				cout<<"x1=x2="<<x2_3<<endl;
			}
			if(s2_3<0) {
				cout<<"���Ϊ:"<<endl;
				cout<<"��ʵ��"<<endl;
			}
		}
		if(fc_3==3) {
			double a3_3,b3_3,c3_3,d3_3,m3_3,n3_3,x3_3,y3_3;
			cout<<"������a,b,m,c,d,n��ֵ"<<endl;
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
			cout<<"���Ϊ:"<<endl;
			cout<<"x="<<x3_3<<"     "<<"y="<<y3_3<<endl;
		}
		if(fc_3==4) {
			double o4_3,p4_3,q4_3,r4_3,s4_3,t4_3,u4_3,v4_3,w4_3,x4_3,y4_3,z4_3,l4_3,m4_3,n4_3,hf1_3,hf2_3;
			cout<<"������a1,b1,c1,o,a2,b2,c2,p,a3,b3,c3,q��ֵ"<<endl;
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
			cout<<"���Ϊ:"<<endl;
			cout<<"x="<<x4_3<<"     "<<"y="<<y4_3<<"     "<<"z="<<z4_3<<endl;
			cout<<endl;
			cout<<endl;
		}
	}
}
void func_4(void){
	while(1) {
		double x1_4,x2_4,x3_4,y1_4,y2_4,y3_4,a_4,b_4,c_4;
		cout<<"����������(x,y)����"<<endl;
		cout<<endl;
		cout<<"��һ�飺"<<endl;
		cout<<"x=";
		cin>>x1_4;
		cout<<"y=";
		cin>>y1_4;
		cout<<endl;
		cout<<"�ڶ��飺"<<endl;
		cout<<"x=";
		cin>>x2_4;
		cout<<"y=";
		cin>>y2_4;
		cout<<endl;
		cout<<"�����飺"<<endl;
		cout<<"x=";
		cin>>x3_4;
		cout<<"y=";
		cin>>y3_4;
		cout<<endl;
		a_4=((y1_4-y2_4)*(x2_4-x3_4)-(y2_4-y3_4)*(x1_4-x2_4))/((x1_4-x3_4)*(x1_4-x2_4)*(x2_4-x3_4));
		b_4=(y1_4-y2_4)/(x1_4-x2_4)-a_4*(x1_4+x2_4);
		c_4=y1_4-a_4*x1_4*x1_4-b_4*x1_4;
		cout<<"a="<<a_4<<"   "<<"b="<<b_4<<"   "<<"c="<<c_4<<endl;
		
		cout<<"���ԣ���Ҫ�Ķ��κ����Ľ���ʽ�ǣ�"<<"y=";
		
		if(a_4==1){
			cout<<"x^2";
		} else if(a_4==0){
			 
		} else{
			cout<<a_4<<"x^2";
		}
		
		if(b_4==1){
			cout<<"x";
		} else if(b_4==0){
			 
		} else{
			cout<<b_4<<"x";
		}
		
		if(c_4!=0){
			cout<<c_4<<endl;
		}

		cout<<endl;
		cout<<endl;
		double jx_4;
		cout<<"�㻹�������"<<endl;
		cout<<"��������1����������2"<<endl;
		cin>>jx_4;
		if(jx_4==1)continue;
		if(jx_4==2) {
			cout<<"OK,��˵����"<<endl;
			break;
		}
		if(jx_4!=1&&2) {
			cout<<"������´Σ���α����,����ȡ���˰�"<<endl;
			break;
		}
	}
}

int main(void){
	while(1){
		cout<<"��������Ҫ���еĲ���"<<endl;
		cout<<"���������1,���Ǻ�����2,���̴�3,����4"<<endl;
		int index; 
		cin>>index;
		switch(index){
			case 1:
				//func_1();
				break;
			case 2:
				func_2();
				break;
			case 3:
				func_3();
				break;
			default:
				func_4();
				break;
		}
	}
	return 0;
}

/*void func_1(void){
	
}*/


