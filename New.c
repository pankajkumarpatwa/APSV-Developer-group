//WAP in c to display your name.

//#include <stdio.h>

//int main()
//{
    //printf("Hello World!");
    //return 0;
//}


//WAP in c to initialize a number and dosplay it.

//#include <stdio.h>
//#include <conio.h>
//int main()
//{
    //int a=10;
    //printf("%d",a);
    //printf("a=%d",a);
    //getch();
//}


//WAP in c to enter any to numbers and display thein sum.

//#include <stdio.h>
//#include <conio.h>
//void main()
//{
    //variable declaration
    //int a,b sum=0;
    //input
    //print("enter any to numbers:");
    //scanf("%d%d,&a,&b");
    //process
    //sum=a+b;
    //output
    //printf("sum=%d",sum);
    //getch();
//}



//WAP in c to enter the side of a squre and display its perimeter and area.
     //program to display perimeter and area display its perimeter and area.
//#include <stdio.h>
//#include <conio.h>
//void main()
//{
    //variable declaration 
    //int side; //input variable
    //int p=0,a=0; //output variable
    //input 
    //printf("enter the side of a square");
    //scanf("%d",& side);
    //calculation
    //p=4*side;
    //a=side*side;
    //output
    //printf("perimeter%d,area=%d",p,a);
    //getch()
//}


//WAP in c to enter the length the and breath of a rectangle and display its perimeter and area.
        //program to display perimeter and area of a enter the length.
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //variable declearation.
    //input
    //printf ("enter the length and breath of a rectangle:");
    //scanf ("%d%d",&l,&b);
    //calculation
    //p=2*(l+b)
    //a=l*b;
    //output
    //printf("perimeter=%d,area=%d",p,a);
    //getch();
//}        


//WAP in c to enter principal ,rate and time to display simpal interest.

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //variable declearation
    //float p,r,t;  //input variable
    //float si=0;   //output variable
    //input
    //printf("enter principal,rate and time");
    //scanf("%f%f%f",&p,&r,&t);
    //calculation
    //si=(p*r*t)/100;
    //output
    //printf("si=f",si);
    //getch()
//}


//WAP in c to enter any tree numbers and perimeter the arithmetic operations.

     //program to perform arithmetic operations.
//#include<stdio.h>     
//#include<conio.h>
//void main()
//{
    //variable declearation
    //int a,b;  //input variables.
    //input
    //printf("enter any two numbers:");
    //scanf("%d%d",&a,&b);
    //printf("sum=%d",(a+b));
    //printf("difference=%d",(a-b));
    //printf("product=%d",(a*b));
    //printf("qnotoent=%d",(a/b));
    //printf("remindar=%d",(a%b));
    //getch();
//}



//WAP to enter any three numbers and display the sum and average.
//#include<stdio.h>     
//#include<conio.h>
//void main()
//{
    //variable declearation
    //int a,b,c;  //input variables.
    //int s=0;  //output variables.
    //float avg=0.0f;  //output variables.
    //input
    //printf("enter any two numbers");
    //scanf("%d%d%d",&a,&b,&c);
   //s=a+b+c;
    //avg=(float)s/3;
    //output
    //printf("sum=%d,average=%2f",s,avg);
    //getch();
//}



//WAP in c to enter the temperature in farenheit and display in celcius.
             //c=(5/9)*(f-32)
    //#include<stdio.h>
    //#include<conio.h>
    //void main()
    //{
        //variable declearation
        //double farenheit;  //output veriable
        //double celcius=0.0;  //output veriable
        //output
        //printf("enter the temperature in farenheit:/n");
        //scanf("%ld",& farenheit);
        //calculation
        ///celcius=(5/9)*(farenheit-32);
        //output
        //printf("temp in celcius=%ld",celcius);
        //getch();
    //}    
    
    

    //WAP in c to enter a number and display if it is an even number.
        
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int a;
    //printf("enter a no:");
    //scanf("%d",&a);
    //if(a%2==0)
    //printf("even");
    //getch();
//}    



//WAP in c to enter a number and display weather it is even or odd

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //if(a%2==0)
    //printf("even");
    //else
    //printf("odd");
    //getch();
//}


 
//#include <stdio.h>

//void checkTriangleAngle(int angle) {
    //if (angle > 0 && angle < 90) {
        //printf("The triangle is Acute\n");
    //} else if (angle == 90) {
        //printf("The triangle is Right-Angled\n");
    //} else if (angle > 90 && angle < 180) {
        //printf("The triangle is Obtuse\n");
    //} else {
        //printf("Invalid angle. Please enter a valid angle.\n");
    //}
//}

//int main() {
    //int angle;
    //printf("Enter an angle of the triangle: ");
    //scanf("%d", &angle);
    //checkTriangleAngle(angle);
    //return 0;
//}




//Switch (condtion), case- break; Sunday , Monday , Tuesday , .........n;

//#include <stdio.h>
//#include<conio.h>

//void main() 
//{
    //int day;
    //printf("Enter a number (1-7) for the day of the week: ");
    //scanf("%d", &day);

    //switch(day) {
        //case 1:
            //printf("Sunday\n");
            //break;
        //case 2:
            //printf("Monday\n");
            //break;
        //case 3:
            //printf("Tuesday\n");
            //break;
        //case 4:
            //printf("Wednesday\n");
            //break;
        //case 5:
            //printf("Thursday\n");
            //break;
        //case 6:
            //printf("Friday\n");
            //break;
        //case 7:
            //printf("Saturday\n");
            //break;
        //default:
            //printf("Invalid input! Please enter a number between 1 and 7.\n");
    //}
    
    //getch();
//}



//#include<stdio.h>
//#include<conio.h>
//void main() 
//{
    //char ch;
    //printf("Enter an alphabet: ");
    //scanf(" %c", &ch);
    
    //switch(ch) 
    //{
        //case 'a': case 'e': case 'i': case 'o': case 'u':
        //case 'A': case 'E': case 'I': case 'O': case 'U':
            //printf("%c is a vowel.\n", ch);
            //break;
        //default:
            //if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
            //{
                //printf("%c is a consonant.\n", ch);
            //} else 
            //{
                //printf("Invalid input! Please enter an alphabet.\n");
            //}
    //}
    
    //getch();
//}




//#include<stdio.h>
//#include<conio.h>
//void main()
 //{
    //double num1, num2;
    //char operation;
    
    //printf("Enter two numbers: ");
    //scanf("%lf %lf", &num1, &num2);
    
    //printf("Enter an arithmetic operation (+, -, *, /): ");
    //scanf(" %c", &operation);
    
    //switch(operation) 
    //{
        //case '+':
            //printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            //break;
        //case '-':
            //printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            //break;
        //case '*':
            //printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            //break;
        //case '/':
            //if (num2 != 0) 
            //{
                //printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            //} else 
            //{
                //printf("Error! Division by zero is not allowed.\n");
            //}
            //break;
        //default:
            //printf("Invalid operation! Please enter +, -, *, or /.\n");
    //}
    
    //getch();
//}




//#include<stdio.h>
//#include<conio.h>

//void main() 
//{
    //char ch;
    
    //printf("Enter a character: ");
    //scanf(" %c", &ch);
    
    //printf("The ASCII value of '%c' is %d\n", ch, ch);
    
    //getch();
//}




//operators in c.
//ARITHMETIC OPERATRS.

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int i,n;
    //printf("enter no. of terms:");
    //scanf("%d",&n);
    //for(i=1;i<=n;i++)
    //printf("%d",i*i);
    //getch();
//}



//Find the sum of the series.


//1.s=1+2+3______,+10.

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int i,s=0;
    //for(i=1;i<=20;i++)
    //s=s+i;
    //printf("sum=%d",s);
    //getch();
//}




//s=20+17+______+2.

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int i,s=0;
    //for(i=20;i>=2;i=i-3);
    //s=s+i;
    //printf("sum=%d",s);
    //getch();
//}


//Generate fibonacci series till 20 terms........
//0,1,1,2,3,5,_________n terms.

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int a,b,c, count=0;
    //a=0,b=1;
    //printf("%d%d",a,b);
    //count=2;
    //while(count<=20)
    //{
        //c=a+b;
        //printf("%d",c);
        //count++;
        //a=b;
        //b=c;
    //}
    //getch();
//}




//WAP in c to display the factors of a no.
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int i,n;
    //printf("enter a number:");
    //scanf("%d",&n);
    //for(i=1;i<=n;i++);
    //{
        //if(n%i==0)
        //printf("%d",i);
    //}
    //getch();
//}



//WAP in c to display the wheather a no is perfect or not.
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
    //int i,n,s=0;
    //printf("enter a number:");
    //scanf("%d",&n);
    //for(i=1;i<=n;i++)
    //{
        //if (n%i==0)
        //s=s+i;
    //}
        //if (n==s)
        //printf("perfect no");
        //getch();
//}        

 

//WAP in c to reverse a number.......

//#include <stdio.h>
//#include<conio.h>

//int main() 
//{
    //int n, reversed_number = 0, remainder;

    //printf("Enter an integer: ");
    //scanf("%d", &n);

    //while (n != 0) 
    //{
        //remainder = n % 10;
        ///reversed_number = reversed_number * 10 + remainder;
        //n /= 10;
    //}

    //printf("Reversed number = %d\n", reversed_number);

    //return 0;
//}



//#How to input numbers is one dimwnsional array.
 
//#include <stdio.h>
//#include <conio.h>

//void main() 
//{
    //int arr[5], i; // Declare an array of size 5

    //printf("Enter 5 numbers:\n");
    //for(i = 0; i < 5; i++) 
    //{
        //scanf("%d", &arr[i]);  // Input elements
    //}

    //printf("You entered: ");
    //for(i = 0; i < 5; i++) 
    //{
        //printf("%d ", arr[i]); // Output elements
    //}

    //getch();
//}





#include <stdio.h>

int main() {
  int num;

  // Prompt the user to enter a number
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Check if the number is even or odd using the modulo operator (%)
  if (num % 2 == 0) {
    printf("%d is an even number.\n", num);
  } else {
    printf("%d is an odd number.\n", num);
  }

  return 0; // Indicate successful execution
}