// Требуется: разработать калькулятор со следующим функционалом
//     1. сложения двух чисел;
//     2. вычитание одного числа от другого;
//     3. умножение;
//     4. деление;
//     5. вычисления квадратного корня;
//     6. вычисления факториала для заданного числа.
#include <iostream>
#include <math.h>
int Factorial(int num){
  if(num==1){
    return 1;
  }
  return num*Factorial(num-1);
}



int main(){
  char sym;
  double A,B;
std::cout<<"1. сложения двух чисел;\n";
std::cout<<"2. вычитание одного числа от другого\n";
std::cout<<"3. умножение\n";
std::cout<<"4. деление\n";
std::cout<<"5. вычисления квадратного корня\n";
std::cout<<"6. вычисления факториала для заданного числа.\n";
  std::cin>>sym;
  if(sym=='1'){
      std::cout<<"A=";
	    std::cin>>A;
	    std::cout<<"B=";
	    std::cin>>B;
	    std::cout<<"A+B="<<A+B;
  }
  if(sym=='2'){
      std::cout<<"A=";
	    std::cin>>A;
	    std::cout<<"B=";
	    std::cin>>B;
	    std::cout<<"A-B="<<A-B;
  }
    if(sym=='3'){
      std::cout<<"A=";
	    std::cin>>A;
	    std::cout<<"B=";
	    std::cin>>B;
	    std::cout<<"A*B="<<A*B;
  }
      if(sym=='4'){
      std::cout<<"A=";
	    std::cin>>A;
	    std::cout<<"B=";
	    std::cin>>B;
	    std::cout<<"A/B="<<A/B;
  }
      if(sym=='5'){
      std::cout<<"A=";
	    std::cin>>A;
      std::cout<<"sqrt(A)="<<sqrt(A);
  }

      if(sym=='6'){
        std::cout<<"A=";
        std::cin>>A;
        std::cout<<A<<"!="<<Factorial(A);
      }
	return 0;
}

