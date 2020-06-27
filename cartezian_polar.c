#include<stdio.h>
#include<math.h>

//Write a computer program for conversion between Cartesian and polar coordinates. 
//Program should ask user if s/he is going to convert Cartesian to polar (user enters ‘c’), polar to Cartesian (user enters (‘p’), or exit (user enters ‘e’). 

int main(){
	
	char conversion;
	 int x,y;
	 float r;
	 float teta;
	
	printf("If you are going to convert Cartesian to polar (user enters c),\npolar to Cartesian (user enters (p),\nor exit (user enters e):");
	scanf(" %c",&conversion);
	
	switch(conversion){
		
		case 'c':
		  printf("Enter cartezian coordinates(x,y)\nx:");
		  scanf("%d",&x);
		  printf("y:");
		  scanf("%d",&y);
		  
		  float r=sqrt(pow(x,2.0)+pow(y,2.0));
		  
		  if(x!=0){
		  	float teta=tanh(y/(x*1.0));
		  	printf("x=(%.2f)cos(%.2f)\n",r,teta);
		  	printf("y=(%.2f)sin(%.2f)\n",r,teta);
		  }
		  else{
		  	if(y>0){
		  		float teta=90.0;
		  		printf("x=(%.2f)cos(%.2f)\n",r,teta);
		  		printf("y=(%.2f)sin(%.2f)\n",r,teta);
			  }
			  else if(y<0){
			  	float teta=270.0;
			  	printf("x=(%.2f)cos(%.2f)\n",r,teta);
		  		printf("y=(%.2f)sin(%.2f)\n",r,teta);
			  }
		  }
		  
		  break;
		  
		case 'p':
			
			printf("Enter polar coordinates(r,teta)\nr:");
			scanf("%f",&r);
			printf("Angle:");
			scanf("%f",&teta);
			
			printf("x=(%.2f)cos(%.2f)\n",r*1.0,teta*1.0);
		  	printf("y=(%.2f)sin(%.2f)\n",r*1.0,teta*1.0);
			
		case'e':
			exit(1);
			
	    default:
	    	break;
		
	}
	
	return 0;
}
