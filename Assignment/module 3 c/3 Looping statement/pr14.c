//Accept 5 numbers from user and find those numbers factorials
int main()
{
    int num,factorial=1,i,temp;
    printf("Enter five number:");
    

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        temp=num;
        
    }
    for(i=1;i<=temp;i++){
        factorial*=i;
    
    }
    printf("factorial of %d is %d \n",temp,factorial);

    return 0;

}