#include <stdio.h>
int main(){
int a,b,c,fusion;
	    printf("nhap so nguyen thu nhat:");
	           scanf("%d",&a);
	    printf("nhap so nguyen thu hai:");
	           scanf("%d",&b);
	    printf("nhap so nguyen thu ba:");
	           scanf("%d",&c);
if(a>b){
		fusion=a,a=b,fusion=b;
	}
if(a>c){
		fusion=a,a=c,fusion=c;
	}
if(b>c){
		fusion=b,b=c,fusion=c;
	}
	    printf("sap xep theo thu tu tang dan:%d,%d,%d",a,b,c);
	
}

