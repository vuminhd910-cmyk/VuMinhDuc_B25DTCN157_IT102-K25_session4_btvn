#include <stdio.h>

int main(){
	int n,e,u;
	         printf("do dai ba canh cua tam giac: ");
	        scanf("%d%d%d",&n,&e,&u);
	
	if(n+e>u && n+u>e && e+u>n){
		    printf("day la 3 canh cua tam giac");
	} else{
		    printf("khong phai 3 canh cua tam giac");
		
	}
}


