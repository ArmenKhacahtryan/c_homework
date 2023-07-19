
 void print_nimbers(){
    for (int i = 0; i < 100; i++)
    {
        printf("%d",i);
    }
    printf("\n");
}
 void print_odd_numbers(){

    for (int i = 1; i < 100; i+=2)
    {       
        printf("%d",i);
    }
    printf("\n");
}

void print_digit_num(){
    int number;
    printf("greq 12 ic mec tiv");
    scanf("%d",&number);
    int sum = 0;
    while (number>0)
    {
        int digit = number %10;
        sum += digit;
        number /= 10;
    }
    printf("tveri gumar@ havasare%d\n",sum);    
}

int bigase(){
        int num1, num2, num3, num4, sum;

    printf("gri chors hat tiv \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    sum = num1 + num2 + num3 + num4;

    if (sum == 0) {
        int min = num1;
        if (num2 < min)
            min = num2;
        if (num3 < min)
            min = num3;
        if (num4 < min)
            min = num4;

        printf("amena poqr tiv@ %d\n", min);
    }
    else
    {
        printf("poqr chi stacelenq %d\n",sum);
        
    }
    
}
void check_divisiblity(){
    int num1,num2;
    printf("greq 2 hat tiv");
    scanf("%d %d",&num1,&num2);
    if (num1%num2==0 || num2%num1==0)
    {
        printf("tver@ karumen irar vra bajanven \n");
    }else{
        printf("tver@ chen karumen irar vra bajanven \n");
    }
}

void print_year(){
    int year;
    printf("greq tari");
    scanf("%d",&year);
    if (year%4==0 &&(year%100!=0||year%400==0))
    {
        printf("tarin nahanja \n");
    }else{
        printf("tarin nahanj chi \n");        
    }
}

int largest_common_divisorf (int a,int b,int c){
    
    int smallest = a;
    if (b< smallest)
    {
        smallest = b;
    }else if (c<smallest)
    {
        smallest = c;
    }
    int largest_common_divisor =1;
    for (int i = 1; i <=smallest; i++)
    {
        if (a % i==0 && b % i==0 && c % i==0)
        {
            largest_common_divisor = i;
        }
    }
    return largest_common_divisor;
}
// int man(){
//   char letter;
//     char alphas[] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
//     int isalpha = 0;
//     printf("greq taar");
//     scanf("%c",&letter);
//     for (int i = 0; i < sizeof(alphas); i++)
//     {
//         if (letter==alphas[i])
//         {
//             isalpha=1;
//         }
//     }
//     if (isalpha){
//         printf("dzaynavor");
//     }else{
//         printf("bazadzayn");
//     }
// }


// int main(){
    // char letter;
    // printf("greq tar");
    // scanf("%c",&letter);
    // if (letter=='a'||letter=='e'||letter=='i'||letter=='u'||letter=='o'||
    //     letter=='A'||letter=='E'||letter=='I'||letter=='U'||letter=='O'
    // )
    // {
    // printf("tar@ dzaynavor e");
    // }
    // else
    // {
    //     printf("tar@ dzaynavor e");
    // }
// }
int main()
{
    int allFanc;
    printf("@ntri cragir@ voro uzumes ashxati 1-7");
    scanf("%d", &allFanc);
    if (allFanc==1)
    {
        print_nimbers();
    }else if(allFanc==2)
    {
     print_odd_numbers();   
    }else if(allFanc==3)
    {
        print_digit_num();
    }else if(allFanc==4)
    {
    bigase();
    }else if(allFanc==5)
    {
        check_divisiblity();
    }else if(allFanc==6)
    {
     print_year();   
    }else if(allFanc==7)
    {
    int num1,num2,num3;
    printf("greq ereq tver@");
    scanf("%d %d %d",&num1,&num2,&num3);
    int larges = largest_common_divisorf(num1,num2,num3);
    printf("amenamec @ndhanur bajanarar@ %d \n",larges);
    }
    return 0;
}
