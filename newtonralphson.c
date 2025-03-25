#include<stdio.h>
#include<math.h>
double f(double x){
    
    return x*x*x-3*x-5;
}
double dif(double x){
    return 3*x*x-3;
}
void f2(double x1,double x2,double x0,double x,int maxit){
    printf("enter maxiteration\n");
    scanf("%d",&maxit);
    do{
        printf("enter boundary points x1 x2\n");
        scanf("%lf %lf", &x1,&x2);          //find interval
        if(f(x1)*f(x2)>0){
            
            printf("invalid interval\n");
            continue;
        }
        else{
            printf("roots lies between %lf and %lf \n ",x1,x2);
            break;
        }
        
        
        
    }while(1);
    
    //finding x0
    if(fabs(x1)<fabs(x2)){
        x0=x1;
    }
    else{
        x0=x2;
    }
    for(int i=1;i<=maxit;i++){
        
        x=x0-(f(x0))/dif(x0);
        
        if(fabs(x-x0)<0.00001){
            printf("the final root is %lf and iteration %d\n", x,i);
        }
        
         printf("the  root is %lf and iteration %d\n", x,i);
         x0=x;
    }
    
}


int main(){
    double x1,x2,x0,x;
    int maxit;
    f2(x1,x2,x0,x,maxit);
    
    
    
    
    
    
    return 0;
}
