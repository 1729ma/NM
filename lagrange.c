include<stdio.h>
void f( float x[],float y[],int n,float p){
    float term,sum=0;
    printf("enter the elements of x \n");
    for(int i=0;i<n;i++){
        scanf("%f", &x[i]);
    }
     printf("enter the elements of y \n");
    for(int i=0;i<n;i++){
        scanf("%f", &y[i]);
    }
    printf("enter the value of x= for which to find y \n");
    scanf("%f", &p);
    for(int i=0;i<n;i++){
        term=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                term=term*((p-x[j]))/(x[i]-x[j]);
            }
            
        }
        
        sum=sum+term*y[i];
    }
    
    printf("the value of required x is %f\n ", sum);
    
}


int main(){
    int n;
    printf("enter data points \n");
    scanf("%d", &n);
    float x[n],y[n],p;
    f(x,y,n,p);
    
    
    return 0;
}
