#include<stdio.h>
#include<math.h>
int main(){


double lemda,theta,d;

double order;

double const pie=3.1416;

printf("Enter the value of Wavelength(nanometer) =");

for(int i=0;;i++){
    scanf("%lf",&lemda);

    if(lemda>=380 && lemda<=750){
        break;
    }
    else{
    printf("\nOut of range.Please enter a valid value=");
    }

}

 printf("\nEnter the value of Angle (0-90) =");

 scanf("%lf",&theta);

 printf("\nEnter the Distace between two slits(micro meter) =");

 scanf("%lf",&d);


    double angle=theta*(pie/180);

    order=((d*(sin(angle)))/lemda)*1000;

    int m=(int)floor(order);


    printf("\n%d-th order maxima\n",m);



return 0;
}
