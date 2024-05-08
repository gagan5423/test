#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int c,n,m,*ht,flag;
void create()
{
    int i;
    ht=(int*)malloc(m*sizeof(int));
    if(ht==NULL||m==0)
    {
        printf("hash table is not present\n");
    }
    for(i=0;i<m;i++)

        ht[i]=-1;
    
}
void display()
{
    int i;
    printf("the hash table is\n");
    for(i=0;i<m;i++)
    {
        printf("%d%d\n",i,ht[i]);
    }
}
void insert(int key)
{
    int j;
    j=key%m;
    while(ht[j]!=-1)
    {
        j=(j+1)%m;
        flag=1;


    }
    if(flag)
    {
        printf("collision is detected and it is solved using linear probing");
        flag=0;
    }
    ht[j]=key;
    display();
    c++;
}
void main()
{
    int i,key;
    printf("enter the number");
    scanf("%d",&n);
    printf("entr the memory size");
    scanf("%d",&m);
    create();
    for(i=0;i<n;i++)
    {
        if(c!=m)
        {
            printf("enter the key\n");
            scanf("%d",&key);
            insert(key);

        }
        else
            printf("the hash table is full");
        

    }
}