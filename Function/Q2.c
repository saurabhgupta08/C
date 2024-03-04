# include <stdio.h>

int firstn_num(int n);

void main(){
    printf("Enter a number \n");
    int n;
    scanf("%d",&n);
    int x = firstn_num(n);
    printf("Sum of first %d is %d\n",n,x);

}

int firstn_num(int n){
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        count=count+i;
    }
    return count;
}