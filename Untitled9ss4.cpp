#include <stdio.h>
int main(){
	int ngay,thang,nam,songay,hople;
	printf("nhap ngay:");
	scanf("%d",&ngay);
	printf("nhap thang:");
	scanf("%d",&thang);
	printf("nhap nam: ");
	scanf("%d",&nam);
	
	if(thang<1 || thang>12){
		hople=0;
}
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		songay = 31;
		break;
		case 2:
		if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		     songay = 29;
		else 
		     songay = 28;
		     break;
		     case 4:
			  case 6:
			   case 9:
			    case 11:
		     	songay = 30;
		     	break; 
	}
	if(ngay < 1 || ngay > songay){
		hople = 0 ; 
	}
	if(hople)
	  printf("ngay thang nam hop le\n");
	else
	  printf("ngay thang nam khong hop le\n");

	   
}

