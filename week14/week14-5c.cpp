#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
	if(a>=b && a>=c &&a>=d) return a;
	if(b>=a && b>=c &&b>=d) return b;
	if(c>=b && c>=a &&c>=d) return c;
	if(d>=b && d>=c &&d>=a) return d;
}
int min(int a,int b,int c,int d){
	if(a<=b && a<=c &&a<=d) return a;
	if(b<=a && b<=c &&b<=d) return b;
	if(c<=b && c<=a &&c<=d) return c;
	if(d<=b && d<=c &&d<=a) return d;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
