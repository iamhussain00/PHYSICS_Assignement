#include<stdio.h>
#include<math.h>
int main(){


int lemda,d;

//lemda=Wavelength

//d=width of slits



    printf("Enter the value of Wavelength(nanometer) =");

for(int i=0;;i++){

     scanf("%d",&lemda);

    if(lemda>=380 && lemda<=750){
        break;
    }

    else{

     printf("\nOut of range.Please enter a valid value=");

    }

}

     printf("\nEnter value of slit width(micro meter) =");

      scanf("%d",&d);


    double m=sqrt(2);

     printf("\nRatio between slits width and wavelength must =%.6lf\n",m);






return 0;
}

