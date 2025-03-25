#include<stdio.h>
#include<math.h>
double f(double x){
   return x*x*x-2*x-5;
}
double fc(double x1, double x2){
   return (x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
    
    
}
void f2(double x1,double x2,double x3,double x,int maxit){
    printf("enter maxiteration\n ");
    scanf("%d",&maxit);
    do{
        printf("enter the intervals x1 and x2\n");
        scanf("%lf %lf",&x1,&x2);
        if(f(x1)*f(x2)>0){
            printf("invalid interval\n");
            continue;
        }
        else{
            printf("roots lie between %lf and %lf", x1,x2);
            break;
        }
        
        
        
        
    } while(1);
    x=fc(x1,x2);
    
    for(int i=1;i<=maxit;i++){
        
        if(f(x2)*f(x)<0){
        x1=x;
        
    }
    else{
        x2=x;
    }
    
    printf("the root is %lf and iteration %d\n",x,i);
    x3=fc(x1,x2);
    if(fabs(x-x3)<0.0001){
        
        printf("the final root is %lf and iteration %d \n",x,i);
        break;
    }
    x=x3;
    
}
}
int main(){
    
   double x1,x2,x3,x;
   int maxit;
   f2(x1,x2,x3,x,maxit);
    
    
    

    
    
    
    return 0;
}
