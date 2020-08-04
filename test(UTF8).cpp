/*---------------------------------------
copyright 赵4老师 (CSDN) all rights reserved
函数型计算器(VC++6.0,Win32 Console)
功能：
目前提供了10多个常用数学函数:
    ⑴正弦sin
    ⑵余弦cos
    ⑶正切tan
    ⑷开平方sqrt
    ⑸反正弦arcsin
    ⑹反余弦arccos
    ⑺反正切arctan
    ⑻常用对数lg
    ⑼自然对数ln
    ⑽ｅ指数exp
    ⑾乘幂函数^
    ⑿向上取整ceil
    ⒀向下取整floor
    ⒁四舍五入取整round
用法：
如果要求2的32次幂，可以打入2^32<回车>
如果要求30度角的正切可键入tan(Pi/6)<回车>
注意不能打入：tan(30)<Enter>
如果要求1.23弧度的正弦，有几种方法都有效：
sin(1.23)<Enter>
sin 1.23 <Enter>
sin1.23  <Enter>
如果验证正余弦的平方和公式,可打入sin(1.23)^2+cos(1.23)^2 <Enter>或sin1.23^2+cos1.23^2 <Enter>
此外两函数表达式连在一起,自动理解为相乘如：sin1.23cos0.77+cos1.23sin0.77就等价于sin(1.23)*cos(0.77)+cos(1.23)*sin(0.77)
当然你还可以依据三角变换，再用sin(1.23+0.77)也即sin2验证一下。
本计算器充分考虑了运算符的优先级因此诸如：2+3*4^2 实际上相当于：2+(3*(4*4))
另外函数名前面如果是数字,那么自动认为二者相乘.
同理，如果某数的右侧是左括号，则自动认为该数与括弧项之间隐含一乘号。
如：3sin1.2^2+5cos2.1^2 相当于3*sin2(1.2)+5*cos2(2.1)
又如：4(3-2(sqrt5-1)+ln2)+lg5 相当于4*(3-2*(√5 -1)+loge(2))+log10(5)
此外，本计算器提供了圆周率 Pi键入字母时不区分大小写,以方便使用。
----------------------------------------*/
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

const char Tab=0x9;
const int  DIGIT=1;
const int MAXLEN=16384;
char s[MAXLEN],*endss;
int pcs=15;
double round(double dVal, short iPlaces) {//iPlaces>=0
    char s[30];
    double dRetval;
 
    sprintf(s,"%.*lf",iPlaces,dVal);
    sscanf(s,"%lf",&dRetval);
    return (dRetval);
}
double fun(double x,char op[],int *iop) {
    while (op[*iop-1]<32) //本行使得函数嵌套调用时不必加括号,如 arc sin(sin(1.234)) 只需键入arc sin sin 1.234<Enter>
        switch (op[*iop-1]) {
        case  7: x=sin(x);    (*iop)--;break;
        case  8: x=cos(x);    (*iop)--;break;
        case  9: x=tan(x);    (*iop)--;break;
        case 10: x=sqrt(x);   (*iop)--;break;
        case 11: x=asin(x);   (*iop)--;break;
        case 12: x=acos(x);   (*iop)--;break;
        case 13: x=atan(x);   (*iop)--;break;
        case 14: x=log10(x);  (*iop)--;break;
        case 15: x=log(x);    (*iop)--;break;
        case 16: x=exp(x);    (*iop)--;break;
        case 17: x=ceil(x);   (*iop)--;break;
        case 18: x=floor(x);  (*iop)--;break;
        case 19: x=round(x,0);(*iop)--;break;
        }
    return x;
}
double calc(char *expr,char **addr) {
    static int deep; //递归深度
    static char *fname[]={"sin","cos","tan","sqrt","arcsin","arccos","arctan","lg","ln","exp","ceil","floor","round",NULL};
    double ST[10]={0.0}; //数字栈
    char op[10]={'+'}; //运算符栈
    char c,*rexp,*pp,*pf;
    int ist=1,iop=1,last,i;
 
    if (!deep) {
        pp=pf=expr;
        do {
            c = *pp++;
            if (c!=' '&& c!=Tab)
                *pf++ = c;
        } while (c!='\0');
    }
    pp=expr;
    if ((c=*pp)=='-'||c=='+') {
        op[0] = c;
        pp++;
    }
    last = !DIGIT;
    while ((c=*pp)!='\0') {
        if (c=='(') {//左圆括弧
            deep++;
            ST[ist++]=calc(++pp,addr);
            deep--;
            ST[ist-1]=fun(ST[ist-1],op,&iop);
            pp = *addr;
            last = DIGIT;
            if (*pp == '('||isalpha(*pp) && strnicmp(pp,"Pi",2)) {//目的是：当右圆括弧的右恻为左圆括弧或函数名字时，默认其为乘法
                op[iop++]='*';
                last = !DIGIT;
                c = op[--iop];
                goto operate ;
            }
        }
        else if (c==')') {//右圆括弧
            pp++;
            break;
        } else if (isalpha(c)) {
            if (!strnicmp(pp,"Pi",2)) {
                if (last==DIGIT) {
                    cout<< "π左侧遇）" <<endl;exit(1);
                }
                ST[ist++]=3.14159265358979323846264338328;
                ST[ist-1]=fun(ST[ist-1],op,&iop);
                pp += 2;
                last = DIGIT;
                if (!strnicmp(pp,"Pi",2)) {
                    cout<< "两个π相连" <<endl;exit(2);
                }
                if (*pp=='(') {
                    cout<< "π右侧遇（" <<endl;exit(3);
                }
            } else {
                for (i=0; (pf=fname[i])!=NULL; i++)
                    if (!strnicmp(pp,pf,strlen(pf))) break;
                if (pf!=NULL) {
                    op[iop++] = 07+i;
                    pp += strlen(pf);
                } else {
                    cout<< "陌生函数名" <<endl;exit(4);
                }
            }
        } else if (c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^') {
            char cc;
            if (last != DIGIT) {
                cout<< "运算符粘连" <<endl;exit(5);
            }
            pp++;
            if (c=='+'||c=='-') {
                do {
                    cc = op[--iop];
                    --ist;
                    switch (cc) {
                    case '+':  ST[ist-1] += ST[ist];break;
                    case '-':  ST[ist-1] -= ST[ist];break;
                    case '*':  ST[ist-1] *= ST[ist];break;
                    case '/':  ST[ist-1] /= ST[ist];break;
                    case '%':  ST[ist-1] = fmod(ST[ist-1],ST[ist]);break;
                    case '^':  ST[ist-1] = pow(ST[ist-1],ST[ist]);break;
                    }
                } while (iop);
                op[iop++] = c;
            } else if (c=='*'||c=='/'||c=='%') {
operate:        cc = op[iop-1];
                if (cc=='+'||cc=='-') {
                    op[iop++] = c;
                } else {
                    --ist;
                    op[iop-1] = c;
                    switch (cc) {
                    case '*':  ST[ist-1] *= ST[ist];break;
                    case '/':  ST[ist-1] /= ST[ist];break;
                    case '%':  ST[ist-1] = fmod(ST[ist-1],ST[ist]);break;
                    case '^':  ST[ist-1] = pow(ST[ist-1],ST[ist]);break;
                    }
                }
            } else {
                cc = op[iop-1];
                if (cc=='^') {
                    cout<< "乘幂符连用" <<endl;exit(6);
                }
                op[iop++] = c;
            }
            last = !DIGIT;
        } else {
            if (last == DIGIT) {
                cout<< "两数字粘连" <<endl;exit(7);
            }
            ST[ist++]=strtod(pp,&rexp);
            ST[ist-1]=fun(ST[ist-1],op,&iop);
            if (pp == rexp) {
                cout<< "非法字符" <<endl;exit(8);
            }
            pp = rexp;
            last = DIGIT;
            if (*pp == '('||isalpha(*pp)) {
                op[iop++]='*';
                last = !DIGIT;
                c = op[--iop];
                goto operate ;
            }
        }
    }
    *addr=pp;
    if (iop>=ist) {
        cout<< "表达式有误" <<endl;exit(9);
    }
    while (iop) {
        --ist;
        switch (op[--iop]) {
        case '+':  ST[ist-1] += ST[ist];break;
        case '-':  ST[ist-1] -= ST[ist];break;
        case '*':  ST[ist-1] *= ST[ist];break;
        case '/':  ST[ist-1] /= ST[ist];break;
        case '%':  ST[ist-1] = fmod(ST[ist-1],ST[ist]);break;
        case '^':  ST[ist-1] = pow(ST[ist-1],ST[ist]);break;
        }
    }
    return ST[0];
}
int main(int argc,char **argv) {
    int a;
 
    if (argc<2) {
        if (GetConsoleOutputCP()!=936) system("chcp 936>NUL");//中文代码页
        cout << "计算函数表达式的值。"<<endl<<"支持(),+,-,*,/,%,^,Pi,sin,cos,tan,sqrt,arcsin,arccos,arctan,lg,ln,exp,ceil,floor,round"<<endl;
        while (1) {
            cout << "请输入表达式：";
            gets(s);
            if (s[0]==0) break;//
            cout << s <<"=";
            cout << setprecision(15) << calc(s,&endss) << endl;
        }
    } else if (argc==2 && 0==strcmp(argv[1],"/?")) {
        if (GetConsoleOutputCP()!=936) system("chcp 936>NUL");//中文代码页
        cout << "计算由≥1个命令行参数给出的函数表达式的值。最后一个参数是.0～.15表示将计算结果保留小数0～15位"<<endl<<"支持(),+,-,*,/,%,^^,Pi,sin,cos,tan,sqrt,arcsin,arccos,arctan,lg,ln,exp,ceil,floor,round"<<endl;
    } else {
        strncpy(s,argv[1],MAXLEN-1);s[MAXLEN-1]=0;
        if (argc>2) {
            for (a=2;a<argc-1;a++) strncat(s,argv[a],MAXLEN-1);//将空格间隔的各参数连接到s
            if (1==sscanf(argv[a],".%d",&pcs) && 0<=pcs && pcs<=15) {//最后一个参数是.0～.15表示将计算结果保留小数0～15位
                printf("%.*lf\n",pcs,calc(s,&endss));
            } else {
                strncat(s,argv[a],MAXLEN-1);
                printf("%.15lg\n",calc(s,&endss));
            }
        } else {
            printf("%.15lg\n",calc(s,&endss));
        }
    }
    return 0;
}
