#include <stdio.h>
#include <math.h>
#include "malloc.h"
#include "stdlib.h"

//Program 5
//int main(){
//    float u,t,a,b,c,B,P;
//
//    scanf("%f %f %f",&u,&a,&t);
//    printf("Value of V: %f\n",u + a*t);
//    printf("Value of S: %f\n",u*t + (0.5)*a*t*t);
//    scanf("%f %f %f",&a,&b,&c);
//    printf("Value of T: %f\n",2*a + sqrt(b) + 9*c);
//    scanf("%f %f",&B,&P);
//    printf("Value of H: %f",sqrt(B*B + P*P));
//

//}

//Program 6
//int main(){
//    //(i)
//    int a,b,c;
//    a = 1;
//    b = 2;
//    printf("%d %d\n",a,b);
//    c = a;
//    a = b;
//    b = c;
//    printf("%d %d\n",a,b);
//
//    //(ii)
//    int x,y;
//    x = 5;
//    y = 10;
//    printf("%d %d\n",x,y);
//    x = x+y;
//    y = x-y;
//    x = x-y;
//    printf("%d %d\n",x,y);



//}

//Program 7

//int main(){
//    //(i)
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    int max;
//    printf("%d\n",(a>b&&a>c)?a:(b>c)?b:c);
//
//    //(ii)
//    if (a>b){
//        if(a>c){
//            max = a;
//        }else{
//            max = c;
//        }
//    }else{
//        if (b>c){
//            max = b;
//        }else{
//            max = c;
//        }
//    }
//    printf("%d",max);
//}

//program 8
//
//int main() {
//    char letter;
//    scanf("%c", &letter);
//    switch (letter) {
//        case 'a':
//        case 'A':
//        case 'e':
//        case 'E':
//        case 'i':
//        case 'I':
//        case 'o':
//        case 'O':
//        case 'u':
//        case 'U':
//            printf("Vowel\n");
//            break;
//        default:
//            printf("Consonant\n");
//    }
//
//    //(ii)
//    int num = 0;
//    scanf("%d",&num);
//    switch(num>0){
//        case 1:
//            printf("Positive");
//            break;
//        case 0:
//            switch(num<0){
//                case 1:
//                    printf("Negative");
//                    break;
//                default:
//                    printf("Zero");
//            }
//
//    }
//}

//Program 9
//
//int main(){
//    int sum = 0 ,n = 1;
//    while(n<=10){
//        sum+=n;
//        n++;
//    }
//    printf("%d",sum);
//
//}

//Program 10
//
//int main(){
//    int num = 153;
//    float count=0;
//    int armstrong = 0;
//    int copy = num;
//    for(int i=0;num!=0;i++){
//        count++;
//        num/=10;
//    }
//    num = copy;
//    for (int j = 0;j<count;j++){
//        armstrong+=pow(num%10,count);
//        num/=10;
//    }
//    printf(copy==armstrong?"Armstrong":"Not Armstrong");
//}

//Program 11
//
//int main(){
//    int num = 345;
//    int size = 0;
//    while (num!=0){
//        size++;
//        printf("%d",num%10);
//        num/=10;
//    }
//    printf("\nSize is %d",size);
//}
//
//Program 12
//int main(){
//    int a = 0;
//    int b = 1;
//    int c = 0;
//    for (int i = 0;i<15;i++){
//        printf("%d ",a);
//        c = b;
//        b = a + b;
//        a = c;
//    }
//}
//
//Program 13
//
//int main(){
//    //(i)
//    int num = 6;
//    for (int i = 1 ;i<6;i++){
//        for (int j = 0; j<i ; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    //(ii)
//    num = 6;
//    for (int i = 1 ;i<6;i++){
//        for (int k = 0;k<num-i-1;k++){
//            printf(" ");
//        }
//        for (int j = 0; j<i ; j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//}

//Program 14
//int main(){
//    int num = 6;
//    for (int i = 1;i<=num;i++){
//        for (int j = 1;j<=6;j++){
//            printf("%d ",i*j);
//        }
//        printf("\n");
//    }
//}

//Program 15
//
//void armstrong(int num){
//    float count=0;
//    int armstrong = 0;
//    int copy = num;
//    for(int i=0;num!=0;i++){
//        count++;
//        num/=10;
//    }
//    num = copy;
//    for (int j = 0;j<count;j++){
//        armstrong+=pow(num%10,count);
//        num/=10;
//    }
//    printf(copy==armstrong?"Armstrong":"Not Armstrong");
//}
//
//void perfect(int num){
//    int test = 0;
//    for (int i = num-1;i>0;i--){
//        if (num%i==0){
//            test+=i;
//        }
//    }
//    printf(test==num?"Perfect":"Not Perfect");
//}
//
//int prime(int num){
//    for (int i = num/2;i>1;i--){
//        if (num%i==0){
//            printf("Not Prime");
//            return 0;
//        }
//    }
//    printf("Prime");
//}
//int main(){
//    //armstrong(153);
//    //perfect(496);
//    prime(41);
//
//}

//Program 16
//int area_Circum(float r){
//    printf("%f\n",r*r*3.14);
//    printf("%f",r*2*3.14);
//}
//
//int main(){
//    area_Circum(1);
//}

//Program 17
//void swapByValue(int x,int y){
//    printf("\n%d %d",x,y);
//    x = x +y;
//    y = x-y;
//    x = x-y;
//    printf("\n%d %d",x,y);
//}
//void swapByReference(int *a,int* b){
//    printf("\n%d %d",*a,*b);
//    *a = *a + *b;
//    *b = *a - *b;
//    *a = *a - *b;
//    printf("\n%d %d",*a,*b);
//
//}
//int main(){
//    int a = 5,b = 9;
//    swapByValue(a,b);
//    int *pa = &a, *pb = &b;
//    swapByReference(pa,pb);
//
//}

//Program 18
//Update
//int main(){
//    int arr[] = {1,2,3,4,5};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    int arr1[size],index,value;
//    scanf("%d %d",&value,&index);
//    for (int i = 0;i<size;i++){
//        if (i==index){
//            arr1[i] = value;
//            continue;
//        }
//        arr1[i] = arr[i];
//    }
//    for(int i = 0;i<size;i++){
//        printf("%d ",arr1[i]);
//    }
//}

//Insert
//int main(){
//    int arr[] = {1,2,3,4,5};
//    int size = sizeof(arr)/sizeof(arr[0])+1;
//    int arr1[size];
//    int value;
//    scanf("%d",&value);
//    for (int i = 0 ;i<size;i++){
//        arr1[i] = arr[i];
//    }
//    arr1[size-1] = value;
//    for(int i = 0;i<size;i++){
//        printf("%d ",arr1[i]);
//    }
//}

//Deletion
//int main(){
//    int arr[]={1,2,3,4,5};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    int arr1[size-1];
//    int value;
//    int skip = 0;
//    //deletion by index
//    scanf("%d",&value);
//    for (int i = 0;i<size;i++){
//        if (i == value){
//            skip++;
//        }
//        arr1[i] = arr[i+skip];
//    }
//    for (int i = 0;i<4;i++){
//        printf("%d ",arr1[i]);
//    }
//}

//display
//
//int main(){
//    int arr[5] = {1,2,3,4,5};
//    for (int i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//        printf("%d ",arr[i]);
//    }
//}

//search
//
//int main(){
//    int arr[5]= {1,2,3,4,5};
//    int value;
//    scanf("%d",&value);
//    for (int i = 0; sizeof(arr)/sizeof(arr[0]);i++){
//        if (arr[i]==value){
//            printf("value %d is at index %d",value,i);
//        }
//    }
//}

//Program 19
//int sum(int arr[]){
//    int sum = 0;
//    for (int i = 0; i<=sizeof(arr)/sizeof(arr[0]);i++){
//        sum += arr[i];
//    }
//    printf("%d is the sum",sum);
//}
//
//int main(){
//    int list[] = {1,2,3};
//    sum(list);
//}

//Program 20
//int swapper(int *a,int *b){
//    printf("%d %d",*a,*b);
//    *a = *a + *b;
//    *b = *a - *b;
//    *a = *a - *b;
//    printf("\n%d %d",*a,*b);
//}
//int main(){
//    int a = 9,b=6;
//    int *pa = &a, *pb = &b;
//    swapper(pa,pb);
//}


//Program 21
//int matrixMul(int arr[2][2],int arr1[2][2]){
//    int result[2][2] = {{0,0},{0,0}};
//    int sum = 0;
//    for (int i = 0;i<2;i++){
//        for (int j = 0;j<2;j++){
//            result[i][j] = 0;
//            for (int k = 0;k<2;k++){
//                result[i][j] += arr[i][k] * arr1[k][j];
//            }
//        }
//    }
//    for(int i = 0; i<2;i++){
//        for (int j = 0;j<2;j++){
//            printf("%d ",result[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main(){
//    int matrix[2][2] = {{1,2},{3,4}};
//    int matrix1[2][2] = {{1,0},{0,1}};
//    matrixMul(matrix,matrix1);
//}

//Program 22
//int main(){
//    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//    int transpose[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
//    for (int i = 0;i<3;i++){
//        for (int j = 0;j<3;j++){
//            transpose[j][i] = arr[i][j];
//        }
//    }
//    for (int i = 0;i<3;i++){
//        for (int j = 0;j<3;j++){
//            printf("%d ",transpose[i][j]);
//        }
//        printf("\n");
//    }
//}


//Program 23
//
//int factorial(int num){
//    if (num==0||num==1){
//        return 1;
//    }
//    return num * factorial(num-1);
//}
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    printf("%d", factorial(n));
//}

//Program 24
//int recursiveSum(int num){
//    if (num==0){
//        return 0;
//    }
//    return (num%10) + recursiveSum(num/10);
//}
//int main(){
//    printf("%d", recursiveSum(123456));
//}

//Week 4 Q1
//
//#include <stdio.h>
//#include <malloc.h>
//
//int main(){
//    int size1,size2,inp;
//    scanf("%d %d",&size1,&size2);
//    int* arr1 = (int*)malloc(size1 * sizeof(int));
//    int* arr2 = (int*)malloc(size2 * sizeof(int));
//    for(int i = 0;i<size1;i++){
//        scanf("%d",&inp);
//        arr1[i] = inp;
//    }
//    for(int i = 0;i<size2;i++){
//        scanf("%d",&inp);
//        arr2[i] = inp;
//    }
//
//
//    for(int i = 0;i<size1;i++){
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//    for(int i = 0;i<size2;i++){
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//
//}

//Week 4 ques 2
//#include <stdio.h>
//int inArray(int arr[],int n){
//    for(int i = 0;i< sizeof(arr)/sizeof(arr[0]);i++){
//        if (arr[i] == n){
//            return 1;
//        }
//    }
//    return 0;
//}
//int main(){
//    int arr[1000];
//    int unique[1000];
//    int num,inp;
//    int total = 0;
//
//    scanf("%d",&num);
//    for (int i = 0;i<num;i++){
//        scanf("%d",&inp);
//        arr[i] = inp;
//    }
//    for (int i = 0;i<num;i++){
//        if(){
//
//        }
//
//    }
//}


//
//int main(){
//    int size1,size2;
//    int arr1[] = {};
//    int arr2[] = {};
//    int input;
//    scanf("%d",&size1);
//    for(int i = 0;i<size1;i++){
//        scanf("%d",&input);
//        arr1[i] = input;
//    }
//    scanf("%d",&size2);
//    for(int i = 0;i<size2;i++){
//        scanf("%d",&input);
//        arr2[i] = input;
//    }
//    for(int i = 0;i<size1;i++){
//        printf("%d",arr1[i]);
//    }
//}
#include <stdio.h>
#include <malloc.h>
//
//int main(){
//    int size1,size2;
//    int arr1[20];
//    int arr2[20];
//    int input;
//    int smallest = 1000;
//    int prev = 0 ;
//    scanf("%d",&size1);
//    for(int i = 0;i<size1;i++){
//        scanf("%d",&input);
//        arr1[i] = input;
//        if (input<smallest){
//            smallest = input;
//        }
//        if (input>smallest){
//            prev = input;
//        }
//
//    }
//    scanf("%d",&size2);
//    for(int i = 0;i<size2;i++){
//        scanf("%d",&input);
//        arr2[i] = input;
//        //printf("%d",input == smallest);
//        if (input == smallest){
//            smallest = prev;
//            prev = 0;
//        }
//    }
//    printf("%d",smallest);
//}
//
//int main(){
//    int salary;
//    double bonusPer;
//    scanf("%d",&salary);
//    if (salary<=25000) {
//        bonusPer = 0.2;
//    }else if(salary<=50000){
//        bonusPer = 0.15;
//    }else if(salary<=100000){
//        bonusPer = 0.1;
//    }else{
//        bonusPer = 0.05;
//    }
//    double bonus = salary*bonusPer;
//    printf("%.2f %.2f",bonus,salary + bonus);
//}
//
//int main(){
//    int num1,num2;
//    char operator;
//    scanf("%d%d\n",&num1,&num2);
//    scanf("%c",&operator);
//    switch (operator){
//        case '+':
//            printf("%d",num1+num2);
//            break;
//        case '-':
//            printf("%d",num1-num2);
//            break;
//        case '*':
//            printf("%d",num1*num2);
//            break;
//        case '/':
//            printf("%d",num1/num2);
//            break;
//        case '%':
//            printf("%d",num1%num2);
//            break;
//        default:
//            printf("Operator out of budget");
//    }
//
//}
//
//int main(){
//    int balance = 50000;
//    int pin = 1234;
//    int accountNum;
//    int oper;
//    int pinCheck;
//    int amount = 0;
//    char more;
//    printf("Enter Account num:");
//    scanf("%d",&accountNum);
//    printf("Enter Balance\n");
//    scanf("\n%d",&balance);
//
//    while(1){
//
//
//        printf("Enter Pin:");
//        scanf("%d",&pinCheck);
//        if (pin != pinCheck){
//            printf("Wrong Pin\n");
//            continue;
//        }
//
//
//        printf("Welcome User\n1.Deposit\n2.Withdraw\n3.Check Balance\n");
//        scanf("%d",&oper);
//
//        switch (oper){
//            case 1:
//                printf("Enter amount to deposit");
//                scanf("%d",&amount);
//                balance+=amount;
//                printf("%d is the balance\n",balance);
//                break;
//            case 2:
//                printf("Enter amount to Withdraw");
//                scanf("%d",&amount);
//                balance-=amount;
//                printf("%d is the balance\n",balance);
//                break;
//            case 3:
//                printf("%d is the balance\n",balance);
//                break;
//            default:
//                printf("No such Command\n");
//        }
//
//
//        printf("Continue ? (y/n)\n");
//        scanf("\n%c",&more);
//        if (more=='n'||more=='N') {
//            break;
//        }
//    }
//    printf("Thanks for using our services");
//}
//
//int main() {
//    int a,b;
//    char c;
//    char *p = "haha\0jkl";
//    printf("%s\n",p);
//    for (int i = 0;i<=8;i++){
//        printf("%c",p[i]);
//    }
//}
//
//int main(){
//    char *tens[] = {{"Twenty"},{"Thirty"},{"Forty"},{"Fifty"},{"Sixty"},{"Seventy"},{"Eighty"},{"Ninety"}};
//    char *ones[] = {{"One"},{"Two"},{"Three"},{"Four"},{"Fife"},{"Six"},{"Seven"},{"Eight"},{"Nine"},{"Ten"}};
//    char **digits[] = {{{"Oenty"},{"Twenty"},{"Thirty"},{"Forty"},{"Fifty"},{"Sixty"},{"Seventy"},{"Eighty"},{"Ninety"}},{{"One"},{"Two"},{"Three"},{"Four"},{"Fife"},{"Six"},{"Seven"},{"Eight"},{"Nine"},{"Ten"}}};
//    int num = 24;
//    //printf("Enter Number\n");
//    //scanf("%s",&number);
////    for (int i = 0 ;i<7;i++){
////        printf("%s ",tens[i]);
////    }
//    printf("%d",scanf("%d",&num));
//
//
//}
//
//int main(){
//    char ps[100];
//    char c;
//    char s[10];
//    int strlen = 0;
//    scanf("%s",ps);
//    scanf(" %c",&c);
//    scanf("%s",s);
//    for (int i = 0;;i++){
//        if (ps[i]=='\0'){
//            break;
//        }
//        strlen++;
//    }
//    for (int i = 0;i<strlen;i++){
//        if (ps[i]==c){
//            printf("%s",s);
//            continue;
//        }
//        printf("%c",ps[i]);
//    }
//
//}
//
//int max(int arr[],int size){
//
//    int max = arr[0];
//    for (int i = 0;i<size;i++){
//        if (max<arr[i]){
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//int inArray(int arr[],int num){
//    for(int i = 0;i<sizeof(arr)/4;i++){
//        if(arr[i] == num){
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int* removeArray(int arr[],int num){
//    int skip = 0;
//    for (int i = 0;i<sizeof(arr)/4;i++){
//        if (arr[i] == num){
//            skip++;
//        }
//        arr[i] = arr[i+skip];
//    }
//    return arr;
//}
//int main(){
//    int size1,size2;
//    scanf("%d",&size1);
//    int arr1[size1];
//    int input;
//    int loop = size1;
//    for(int i = 0;i<size1;i++){
//        scanf("%d",&input);
//        arr1[i] = input;
//    }
//
//    scanf("%d",&size2);
//
//    int arr2[size2];
//    for(int i = 0;i<size2;i++){
//        scanf("%d",&input);
//        arr2[i] = input;
//    }
//    while(loop>0){
//        int maxVal = max(arr1,size1);
//        if (inArray(arr2,maxVal)){
//            removeArray(arr1,maxVal);
//            loop--;
//        }else{
//            printf("%d",maxVal);
//            return 0;
//        }
//
//
//    }
//    printf("0");
//    return 0;
//
//
//}
//
//int reverse(char string[],int index){
//    if (index==0){
//        printf("%c",string[index]);
//        return 0;
//    }
//    printf("%c",string[index]);
//    return reverse(string,index-1);
//
//}
//int main(){
//    char s[100] ;
//    scanf("%[^\n]%*c",s);
//    int len = 0;
//    for(int i = 0;;i++){
//        if (s[i]!='\0'){
//            len++;
//        }else{
//            break;
//        }
//    }
//    reverse(s,len-1);
//}
//
//int collatz(int num){
//    if (num==1){
//        return 1;
//    }
//    if (num%2==0){
//        num/=2;
//    }else{
//        num = num*3 +1;
//    }
//    printf("%d ",num);
//    return collatz(num);
//}
//int main(){
//    collatz(7);
//}
//
//int blockProduct(int arr[],int size){
//    if (size==4){
//        return (arr[0]*arr[3] - arr[1]*arr[2]);
//    }
//    return blockProduct(arr,size/4);
//}
//
//int main(){
//    int num;
//    scanf("%d",&num);
//    int arr[num/4][4];
//    int input;
//    for (int i = 0 ;i<num/4;i++){
//        for (int j = 0;j<4;j++){
//            scanf("%d",&input);
//            arr[i][j] = input;
//        }
//    }
//    printf("%d",blockProduct(arr,num));
//}
//int pass1(int pass,int confirmPass){
//    return (pass==confirmPass);
//}
//int pass2(int pass,int confirmPass){
//    printf("%d ",confirmPass==pass);
//}
//void pass3(int pass,int confirmPass){
//    printf("%d",pass == confirmPass);
//}
//int main(){
//    int a,b;
//    scanf("%d %d",&a,&b);
//    printf("%d ", pass1(a,b));
//    pass2(a,b);
//    pass3(a,b);
//
//}
//
//int prime(int num) {
//    if (num==2){
//        return 1;
//    }
//        if (num % (num - 1) == 0) {
//            return 0;
//        } else {
//            return prime(num - 1);
//        }
//}
//int oldPrime(int num){
//    for(int i = num-1;i>1;i--){
//        if (num%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//
//
//int main() {
//    int num1,num2;
//    scanf("%d %d",&num1,&num2);
//    for (int i = num1;i<=num2;i++){
//        printf("%d %s\n",i,prime(i)?"Prime":"Not prime");
//    }
//}

//int gcdRecursion(int a,int b){
//    if (a%b==0){
//        return b;
//    }
//    return gcdRecursion(b,a%b);
//}
//
//int main() {
//    int a, b;
//    for (int i = 0; i < 3; i++) {
//        scanf("%d %d ", &a, &b);\
//        printf("%d\n", gcdRecursion(a, b));
//    }
//}
//
//int max(int a,int b){
//    return a>b?a:b;
//}
//int maxArray(int arr[],int n){
//    int maxVal;
//    if (n==0){
//        return -1;
//    }
//    if (n==1){
//        return arr[0];
//    }
//    maxVal = maxArray(arr+1,n-1);
//    return max(arr[0],maxVal);
//}
//int main(){
//    int arr[] = {5,2,3,4};
//    printf("%d", maxArray(arr,4));
//}
//
//int max(int n){
//    int maxVal=-1;
//    int num;
//    if (n==0){
//        return maxVal;
//    }
//    scanf("%d",&num);
//    maxVal = (maxVal<num?num:maxVal);
//    return max(n-1);
//}
//int main(){
//    int n = 5;
//    max(n);
//}
//
//int main(){
//    int n = 5;
//    switch(n){
//        case 5:
//            printf("5");
//        case 1:
//            printf("print");
//            break;
//        case 3:
//            printf("Hello");
//    }
//}
//
//int fun(){
//    static int a = 10;
//    a++;
//    printf("%d\n",a);
//}
//
//int main(){
//    int a = 10;
//    int *p;
//    p = &a;
//    printf("%d\n",a);
//    printf("%d\n",*p);
//    printf("%p\n",p);
//    fun();
//    fun();
//    fun();
//}
//
//int main() {
//    int a = 10;
//    int b = 40;
//    int *p1 = &a;
//    int *p2 = &b;
//}

//int main(){
//    int x = 10,y = 3,z;
//    for(z = 0;z<x;){
//        z = z++ +y;
//        printf("%d\n",z);
//    }
//}
//
//int main(){
//    int size;
//    scanf("%d",&size);
//    int arr[size];
//
//    for(int i = 0;i<size;i++){
//        scanf("%d",&arr[i]);
//    }
//    printf("%d\n",size/2);
//    for(int j = 0 ;j<size/2;j++){
//        arr[j] = arr[j] + arr[size-j-1];
//        arr[size-j-1] = arr[j] - arr[size-j-1];
//        arr[j] = arr[j] - arr[size-j-1];
//    }
//
//    for(int k = 0;k<size;k++){
//        printf("%d ",arr[k]);
//    }
//
//}
//int duplicate(int arr[] , int index,int val){
//    for(int i = 0;i<5;i++){
//        if (i ==index){
//            continue;
//        }
//        if (arr[i] == val){
//            return 1;
//        }
//    }
//    return 0;
//}
//int main(){
//    int count = 0;
//    int arr[]={1,2,3,4,1};
//    for(int i = 0;i<5;i++){
//        if (duplicate(arr,i,arr[i])){
//            printf("Yes");
//            count++;
//            break;
//        }
//    }
//    if (!count){
//        printf("N0");
//    }
//}

//read from user ages of all the students atleast 12 in float array. Find min max and avg age
//void max(float arr[]){
//    float max = arr[0];
//    int size = sizeof(arr)/sizeof(arr[0]);
//    for(int i = 0;i<12;i++){
//        if(arr[i]>max){
//            max = arr[i];
//        }
//    }
//    printf("Max is %f\n",max);
//}
//void min(float arr[]){
//    float min = arr[0];
//    for(int i = 0;i<12;i++){
//        if(arr[i]<min){
//            min = arr[i];
//        }
//    }
//    printf("Min is %f\n",min);
//}
//void avg(float arr[]){
//    float average = 0;
//    int size = sizeof(arr)/sizeof(arr[0]);
//    for(int i = 0;i<12;i++){
//        average += arr[i];
//    }
//    printf("Average is %f\n",average/12);
//}
//int main(){
//    float ages[] = {18.0,17.0,16.0,15.2,14.3,12.3,17.9,13.6,12.5,14.8,16.4,19.7};
//    max(ages);
//    min(ages);
//    avg(ages);
//}

//Take number and shift all smaller number to left and larger to right
//int main(){
//    int arr[] = {11,2,1,6,5,7,8,3};
//    int arr1[8];
//    int num = 6;
//    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
//        if(arr[i]<num){
//            printf("%d ",arr[i]);
//        }
//    }
//    printf("%d ",num);
//    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
//        if(arr[i]>num){
//            printf("%d ",arr[i]);
//        }
//    }
//}

//write a program to sort an array in increasing order
//void sortArray(int arr[], int size){
//    int temp;
//    for(int i = 0;i<size;i++){
//        for(int j = i+1;j<size;j++){
//            if(arr[i]>arr[j]){
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for(int i = 0;i<size;i++){
//        printf("%d ",arr[i]);
//    }
//}
//int main(){
//    int num[6] = {2,1,4,6,3,5};
//    sortArray(num,6);
//}

//second largest
//
//void secondLargest(int arr[],int size){
//    int largest = arr[0];
//    int second = arr[0];
//    for(int i = 0;i<size;i++){
//        if(arr[i]>largest){
//            second = largest;
//            largest = arr[i];
//        }
//        if (second<arr[i]&&arr[i]<largest){
//            second = arr[i];
//        }
//    }
//    printf("%d",second);
//}
//int main(){
//    int num[] = {7,4,3,5,6,9,8,10};
//    int size = 8;
//    secondLargest(num,size);
//}

//copy arr

void copy(int arr[],int size){
    int copyArray[size];
    for(int i = 0;i<size;i++){
        copyArray[i] = arr[i];
    }
    for(int i = 0;i<size;i++){
        printf("%d ",copyArray[i]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    copy(arr,size);
}