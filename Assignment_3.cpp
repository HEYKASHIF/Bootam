//Write a program to check whether a given number is positive or non-positive.
// #include<iostream>
// using namespace std;
// int main()
// {
//   int number;
//   printf("Enter any kind of integer bro = ");
//   scanf("%d",&number);
//   if(number<0)
//   {
//     printf("its a non-positive number.");
//   }
//   else
//   {
//     printf("its a positive number.");
//   }
//   return 0;
//
// }

//Write a program to check whether a given number is divisible by 5 or not.
// #include<iostream>
// using namespace std;
// int main()
// {
//   int number;
//   printf("Enter a number = ");
//   scanf("%d",&number);
//   if(number%5==0)
//   {
//     printf("its divisible by 5.");
//   }
//   else
//   {
//     printf("its not divisible by 5.");
//   }
//   return 0;
// }

//Write a program to check whether a given number is an even number or an odd
//number.
// #include<iostream>
// using namespace std;
// int main()
// {
//   int number;
//   printf("Enter a number sir = ");
//   scanf("%d",&number);
//   if(number%2==0)
//   {
//     printf("its an even numver.");
//   }
//   else
//   {
//     printf("its an odd number.");
//   }
//   return 0;
// }

//Write a program to check whether a given number is an even number or an odd
// number without using % operator.
// #include<iostream>
// using namespace std;
// int main()
// {
//   int number,div,mul;
//   printf("Enter a number = ");
//   scanf("%d",&number);
//   div = number/2;
//   mul = div*2;
//   if(number == mul)
//   {
//     printf("its an even number.");
//   }
//   else
//   {
//     printf("its an odd number.");
//   }
//   return 0;
// }

//Write a program to check whether a given number is a three-digit number or not.
// #include<iostream>
// using namespace std;
// int main()
// {
//   int number,count=3;
//   printf("Enter a number = ");
//   scanf("%d",&number);
//   while(number)
//   {
//     --count;
//     number=number/10;
//   }
//   if(count==0)
//   {
//     printf("its a three digit number.");
//   }
//   else
//   {
//     printf("its not a three digit number.");
//   }
//   return 0;
// }
