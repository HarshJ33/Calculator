#include<stdio.h>
#include<math.h>

const double pi=3.14159265;


void simple(void){
    float x,y;
    char op;
    float ans;

    printf("Simple Mode\n\nEnter 1st no. \n");
    scanf("%f",&x);

    printf("Enter the operator: +,-,*,/\n");
    scanf(" %c",&op);

    printf("Enter 2nd no. \n");
    scanf("%f",&y);

    switch (op){
        case '+':
            ans= x+y;
            break;
        case '-':
            ans= x-y;
            break;
        case '*':
            ans= x*y;
            break;
        case '/':
            if(y!=0){
                ans=x/y;
            }
            else{
                printf("Error Code: DivisionBy0\n");
                return;
            }
            break;
        default:
            printf("Error Code: InvalidOperator\n");
            return;
    }

    printf("The answer is: %.2f.\n",ans);
}


void advncd(void){
    float x,y;
    int fxn;

    printf("Advanced Mode\n\nChoose function:\n1:sin\n2:cos\n3:tan\n4:Natural log\n5:Exponent\n6:Square root\n");
    scanf("%d",&fxn);

    switch (fxn){
        case 1:
            printf("Enter x (sin x), in rad: \n");
            scanf("%f",&x);
            printf("sin(%.2f)=%.3f\n",x,sin(x));
            break;

        case 2:
            printf("Enter x (cos x), in rad: \n");
            scanf("%f",&x);
            printf("cos(%.2f)=%.3f\n",x,cos(x));
            break;

        case 3:
            printf("Enter x (tan x), in rad: \n");
            scanf("%f",&x);
            printf("tan(%.2f)=%.3f\n",x,tan(x));
            break;

        case 4:
            printf("Enter x (logeX): \n");
            scanf("%f",&x);
            if(x>0){
                printf("log(%.2f)=%.3f\n",x,log(x));
              }
            else{
                printf("Error Code: NegativeLog\n");
            }
            break;

        case 5:
            printf("Enter x and y (x to the power y): \n");
            scanf("%f %f",&x,&y);
            printf("%.2f^%.2f is: %.4f\n",x,y,pow(x,y));
            break;

        case 6:
            printf("Enter x (sq.root(x)): \n");
            scanf("%f",&x);
            if(x>=0){
                printf("Sq. root of(%.4f)=%.2f\n",x,sqrt(x));
            }
            else{
                printf("Error Code: NegativeRoot\n");
            }
            break;

        default:
            printf("Error Code: InvalidFunction\n");
            return;

    }
}

int main(){
    
    int m;

    printf("\t\t\t\t\tSIMPLE CALCULATOR\n\n\nChoose Mode:\n 1: Simple\n 2: Advanced\n");
    scanf("%d",&m);

    switch (m){
        case 1:
            simple();
            break;
        case 2:
            advncd();
            break;
        default:
            printf("Choose correct value: Enter 1 for Simple calculations or 2 for Advanved.\n");
            return 0;        
    }
   return 0; 
}