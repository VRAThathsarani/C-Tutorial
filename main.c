#include <stdio.h>
#include <stdlib.h>

int main()
{

  float basic_pay;
  float gross_salary;
  int CA;
  int EA;
  int JobNo;
  int LNo;
  float NS;

  printf("Enter Executive's job number:\n");
  scanf("%d",&JobNo);
  printf("\nEnter your level number:\n");
  scanf("%d",&LNo);

  gross_salary = basic_pay + basic_pay*0.25 + CA + EA;

  if ((LNo==1)||(LNo==2)||(LNo==3)||(LNo==4))
  {
      printf("\nEnter your Basic Salary:\n");
      scanf("%f",&basic_pay);
      if (LNo==1)
      {
          gross_salary = basic_pay + basic_pay*0.25 + 1000 + 500;
          printf("\nGross Salary:\n%.2f",gross_salary);
      }
      else if (LNo==2)
      {
          gross_salary = basic_pay + basic_pay*0.25 + 750 + 200;
          printf("\nGross Salary:\n%.2f",gross_salary);
      }
      else if (LNo==3)
      {
          gross_salary = basic_pay + basic_pay*0.25 + 550 + 100;
          printf("\nGross Salary:\n%.2f",gross_salary);
      }
      else if (LNo==4)
      {
          gross_salary = basic_pay + basic_pay*0.25 + 250 + 0;
          printf("\nGross Salary:\n%.2f",gross_salary);
      }

       if (gross_salary<2000)
      {
          printf("\nNet Salary:\n%f",gross_salary);
      }
      else if ((gross_salary>=2000)&&(gross_salary<4000))
      {
          NS = gross_salary - gross_salary*0.03;
          printf("\nNet Salary:\n%.2f",NS);
      }
      else if ((gross_salary>=4000)&&(gross_salary<6000))
      {
          NS = gross_salary - gross_salary*0.05;
          printf("\nNet Salary:\n%.2f",NS);
      }
      else if (gross_salary>=6000)
      {
          NS = gross_salary - gross_salary*0.08;
          printf("\nNet Salary:\n%.2f",NS);
      }
  }
  else
  {
      printf("\nYour Level Number is incorrect.\n");
  }


    return 0;
}


//Q7
int main ()
{
    float x;

    printf("Enter the value of X:\n");
    scanf("%f",&x);

    if (x>0)
    {
        printf("Y=1");
    }
    else if (x==0)
    {
        printf("Y=0");
    }
    else if (x<0)
    {
        printf("Y=-1");
    }

    return 0;
}


//Q8

int main()
{
    float a;
    float b;
    float c;
    float x,p;
    float x1,x2,x3,x4;


    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the value of c:\n");
    scanf("%f",&c);

    p=(sqrt((b*b)- (4*a*c)));

    x1 = ((-b+p)/2*a);
    x2 = ((-b-p)/2*a);
    x4 = sqrt ((-c)/a);

    if ((a==0)&&(b==0))
    {
        printf("\nNo Solution.\n");
    }
    else if (a==0)
    {
        x3=-(c/b);

        if(x3==0)
        {
            printf("There is one solution.\nx=0");
        }
        else
        {
            printf("\nThere is only one root.\n%.2f",x3);
        }
    }
    else if (a!=0 && b==0)
    {
        if ((a<0 && b<0) || (a>0 && b>0))
        {
            printf("\nThere are no real roots.\n");
        }
        else
        {
            printf("\nThere is a root.\n%f\n",x4);
        }
    }
    else if ((b*b)-(4*a*c)<0)
    {
        printf("\nThere are no roots.\n");
    }
    else
    {
        printf("\nThere are two real roots.\n%.2f\n%.2f\n",x1,x2);
    }
    return 0;
}

// Q9

int main()
{
    int x,y,z;
    int x1,y1,z1;

    printf("Enter the three integer values(x):");
    scanf("%d",&x);
    printf("Enter the three integer values(y):");
    scanf("%d",&y);
    printf("Enter the three integer values(z):");
    scanf("%d",&z);

    x1 = x*x;
    y1 = y*y;
    z1 = z*z;

    if (x>y && x>z)
    {
        if (x1 == y1 + z1)
        {
            printf("%d=%d+%d\nThey are the sides of the right_angled triangle\n",x1,y1,z1);
        }
        else
        {
            printf("They are not the sides of the right angled triangle\n");
        }

    }
    else if (y>x && y>z)
    {
        if (y1 == x1 + z1)
        {
            printf("y=x+z: %d=%d+%d\nThey are the sides of the right_angled triangle\n\n",y1,x1,z1);
        }
        else
        {
            printf("They are not the sides of the right angled triangle\n");
        }

    }
    else if (z>x && z>y)
    {

        if (z1 == x1 + y1)
        {
            printf("%d=%d+%d\nThey are the sides of the right_angled triangle\n",z1,x1,y1);
        }
        else
        {
            printf("They are not the sides of the right angled triangle\n");
        }

    }
    else
    {
         printf("They are not the sides of the right angled triangle\n");
    }
 return 0;

}

//Q10

int main ()
{
    char name[25];
    float mass;
    float height;
    float BMI;

    printf("Enter the name of the citizen:");
    scanf("%s",&name);
    printf("Enter the citizen's mass in kg:");
    scanf("%f",&mass);
    printf("Enter the citizen's height in kg:");
    scanf("%f",&height);

    BMI = mass/(height*height);

    printf("\nBMI=%.2f\n",BMI);

    if (BMI<18.5)
    {
        printf("Risk of developing problem such as  nutritional deficiency and osteoporosis.\n");
    }
    else if (BMI>=18.5 && BMI<23)
    {
        printf("Low Risk(healthy range)\n");
    }
    else if (BMI>=23 && BMI<27.5)
    {
        printf("Moderate risk of developing heart disease, high blood pleasure,stroke,diabetes.\n");
    }
    else
    {
        printf(" risk of developing heart disease, high blood pleasure,stroke,diabetes.\n");
    }

    return 0;
}


