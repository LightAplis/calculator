#include<bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std; 

int main(){
	int s;
	double num1=0,num2=0;
	char n;
	char arr[1000] = {};  //��ʼ���ַ���
	cin>>arr;//�����ַ���
	int len = strlen(arr);//�����ַ������ȼ��㺯��
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
	}//��ȡ������� 
	for(int i=0;i<s;i++){
		num1=num1*10+(arr[i]-'0');
	}
	//��һ���� 
	for(int i=s+1;i<len;i++){
		num2=num2*10+(arr[i]-'0');
	}
	//��һ����
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

}//��ֵ

