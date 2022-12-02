#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std; 
int main(){
	cout<<"这是一个计算器，目前只支持两个数的运算。"<<endl<<"支持加、减、乘、除、幂、阶乘"<<endl<<"TIPS:幂的格式是a^b"<<endl; 
	int s;
	double num1=0,num2=0;
	char n;
	char arr[1000];  
	while(1){
	for (int i=0;i<1001;i++){//初始化
		arr[i]=0;
	}
	num1=0;
	num2=0;//初始化
	cin>>arr;//输入字符串
	if(arr[0]=='e'&&arr[1]=='x'&&arr[2]=='i'&&arr[3]=='t'){
		exit(0);
	}
	int len = strlen(arr);//调用字符串长度计算函数
 	for(int i=0;i<len;i++){
 		if(arr[i]=='+'){
 			n='+';
 			s=i;
 			break;
		}else if(arr[i]=='-'){
			n='-';
			s=i;
			break;
		}else if(arr[i]=='*'){
			n='*';
			s=i;
			break;
		}else if(arr[i]=='/'){
			n='/';
			s=i;
			break;
		}else if(arr[i]=='^'){
			n='^';
			s=i;
			break;
		}
	}//获取运算符号 
	int p=0;
	for(int i=0;i<s;i++){
		if(arr[i]=='.'){
			p=s-(i+1);
		}else{
			num1=num1*10+(arr[i]-'0');
		}
		
	}
	for(int i=0;i<p;i++){
		num1=num1/10;
	}
	//第一个数 
	p=0;
	for(int i=s+1;i<len;i++){
		if(arr[i]=='.'){
			p=len-(i+1);
		}else{
			num2=num2*10+(arr[i]-'0');
		}
	}
	for(int i=0;i<p;i++){
		num2=num2/10;
	}
	//第2个数
	if(n=='+'){
		cout<<num1+num2;
	}else if(n=='-'){
		cout<<num1-num2;
	}else if(n=='*'){
		cout<<num1*num2;
	}else if(n=='/'){
		cout<<num1/num2;
	}else if(n=='/'){
		cout<<fixed<<setprecision(10)<<num1/num2;
	}else if(n=='^'){
		int x=1;
		for(int j=0;j<num2;j++){
			x=x*num1;
		}
		cout<<x;
	}
	cout<<endl<<"------------"<<endl;
	
	}//算值
}
	
