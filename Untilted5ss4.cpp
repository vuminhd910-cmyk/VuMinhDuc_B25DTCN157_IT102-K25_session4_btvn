#include <stdio.h>
int main(){
	int chi_so_cu,chi_so_moi,so_dien;
    float tien;
    printf("nhap chi so cu:");
    scanf("%d",&chi_so_cu);
    printf("nhap chi so moi:");
    scanf("%d",&chi_so_moi);
    so_dien=chi_so_moi-chi_so_cu;
    if(so_dien<0){
    printf("chi so moi lon hon chi so cu");
}
    if(so_dien<50)
        tien=so_dien*10000;
    else if(so_dien<100)
        tien=50*10000+(so_dien-50)*15000;
    else if(so_dien<150)
        tien=50*10000+50*15000+(so_dien-100)*20000;
    else if(so_dien<200)
        tien=50*10000+50*15000+50*20000+(so_dien-150)*25000;
    else if(so_dien>=200)
        tien=50*10000+50*15000+50*20000+50*25000+(so_dien-200)*30000;
    printf("So dien tieu thu:%d kwh\n",so_dien);
	printf("tien dien phai tra la:%.3f vnd",tien);


    
}

