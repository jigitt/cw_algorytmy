#include<stdio.h>

int main()
{
float km, mile, yard, dystans_w_km, dystans_w_milach, dystans_w_yardach;

char  Wybor;
 
	printf("Podaj jednostkę którą chcesz przeliczyć:\n");
	printf("1-km, 2-mile, 3-yardy\n");
	printf("Dokonaj wyboru:");
	scanf("%c", &Wybor);
	
		if(Wybor == '1')
{
		printf("Podaj odległosc:\n");
		scanf("%f", &km);
		dystans_w_milach = km/1.609;
		dystans_w_yardach = km/1.609*1760;
		printf("Odleglosc wynosi: %f mil, %f yardow", dystans_w_milach, dystans_w_yardach);
}

else
		if(Wybor == '2')
{
		printf("Podaj odleglosc:\n");
		scanf("%f", &mile);
		dystans_w_km = mile*1.609;
		printf("Odleglosc wynosi: %f km", dystans_w_km);
}
else
{
		printf("Podaj odleglosc:\n");
		scanf("%f", &yard);
		dystans_w_milach = yard/1760;
		dystans_w_km = yard/1760*1.609;
		printf("Odleglosc wynosi: %f mil, %f km", dystans_w_milach, dystans_w_km);
}
return 0;
}

