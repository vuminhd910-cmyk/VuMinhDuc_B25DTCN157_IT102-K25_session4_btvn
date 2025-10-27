#include <stdio.h>
int main(){
	      int chisocu,chisomoi,sodien;
          float tien;
    printf("nhap chi so cu:");
          scanf("%d",&chisocu);
    printf("nhap chi so moi:");
          scanf("%d",&chisomoi);
    sodien=chisomoi-chisocu;
           if(sodien<0){
    printf("chi so moi lon hon chi so cu");
}
    if(sodien<50)
              tien=sodien*10000;
    else if(sodien<100)
              tien= 50*10000+(sodien-50)*15000;
    else if(sodien<150)
              tien= 50*10000+50*15000+(sodien-100)*20000;
    else if(sodien<200)
              tien= 50*10000+50*15000+50*20000+(sodien-150)*25000;
    else if(sodien>=200)
              tien= 50*10000+50*15000+50*20000+50*25000+(so_dien-200)*30000;
                      printf("So dien tieu thu:%d kwh\n",so_dien);
	                  printf("tien dien phai tra la:%.3f vnd\n",tien);


    
}


