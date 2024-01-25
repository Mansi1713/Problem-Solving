#include<stdio.h>
int Multiply(int iNo1,int ino2,int ino3)
{
    int imul=0;
    
     if(iNo1==0)
    {
         imul=ino2*ino3; 
         return imul; 
    }   
    else if((ino2==0)&&(ino3==0))
    {
        return iNo1;
    }
    else if(ino2==0)
    {
         imul=iNo1*ino3; 
         return imul; 
    }   
    else if((iNo1==0)&&(ino3==0))
    {
        return ino2;
    }
    else if(ino3==0)
    {
         imul=iNo1*ino2; 
         return imul; 
    }   
    else if((iNo1==0)&&(ino2==0))
    {
        return ino3;
    }
    else
    {
       imul=iNo1*ino2*ino3;
         return imul;
    }
  
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;
    printf("Please enter three numbers");
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);
    iret=Multiply(ivalue1,ivalue2,ivalue3);
    printf("Multiplication is %d",iret);
    return 0;
}