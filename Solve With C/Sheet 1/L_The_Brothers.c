#include<stdio.h>
#include<string.h>

int main(){
    char s_1[10000],f_1[10000],s_2[10000],f_2[10000];
    scanf("%s %s",&s_1,&f_1);
    scanf("%s %s",&s_2,&f_2);
    
    //strcmp() function build

    // int i=0;
    // while (1)
    // {
    //     if (f_1[i]=='\0' && f_2[i]=='\0')
    //     {
    //         printf("ARE Brothers");
    //         break;
    //     }
    //     else if (f_1[i]=='\0' && f_2[i]!='\0' || f_1[i]!='\0' && f_2[i]=='\0')
    //     {
    //         printf("NOT");
    //         break;
    //     }
        
    //     if (f_1[i]==f_2[i])
    //     {
    //         i++;
    //         continue;
    //     }
    //     else if (f_1[i]>f_2[i] || f_1[i]<f_2[i])
    //     {
    //         printf("NOT");
    //         break;
    //     }
        
    // }
    
    int flag=strcmp(f_1,f_2);

    if (flag==0)
    {
        printf("ARE Brothers");
    }
    else{
        printf("NOT");
    }
    return 0;
}