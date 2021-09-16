#include<stdio.h>
#include<stdlib.h>

struct Blood
{
    char name[30];
    char age[2];
    char city[30];
    char Blood_group[3]; 
};
struct Blood B[20];
int I=0,J=0,K=0,L=0,Exit=1;

void putdonor()
{
    printf("enter your name:");
    scanf("%s",B[I],name);
    I++;

    printf("enter your age:");
    scanf("%s",B[J].age);
    J++;

    printf("enter your city:");
    scanf("%s",B[K].city);
    K++;

    printf("enter your blood group:");
    scanf("%s",B[L].Blood_group);
    L++;
}
void getdonor()
{
    char Blood[3],city[20];
    printf("which blood group want you\n");
    scanf("%s",Blood);
    int i=0,j=0,k=0,Q=0,w=1;
    while(B[i].Blood_group!='\0')
    {
        if(k==1)
        {
            break;
        }
        w=strcmp(Blood,B[i].Blood_group);
        if(w==0)
        {
            printf("in which city you want Blood group\n");
            scanf("%s",city);
            while(B[j].city!='\0')
            {
                Q=strcmp(city,B[j].city);
                if(Q!=0)
                {
                    printf("sorry,this type of blood group is not available in your area\n");
                    break;
                }
                else
                {
                 printf("yes Blood is available,you can contact your near hospital\n");
                 k=1;
                 break;
                }
                j++;
            }
        }
        int k=1;
        break;
        i++;
    }
    if(k==0||w==1)
    {
        printf("sorry,In our hospital this type of group is not available\n");
    }

}
void menu()
{
    int choice;
    printf("\t1 Add a new entry for Donate Blood group\n");
    printf("\t2 search by blood group \n");
    printf("\t3 you want to exit");
    printf("\t your choice");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        putdonor();
        break;
        case 2:
        getdonor();
        break;
        case 3:
        Exit=0;
        printf("thank you for using this app");
        break;
        default:
        printf("\n\n\t\t you have entered wrong choice.....!!!");
        menu();
    }
}
int main()
{
    printf("\n\n\t\t blood donor database \n \n");
    while(Exit!=0)
    {
        menu();

    }
    return 0;
}
