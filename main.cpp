#include <iostream>

int main() {
  
#include <iostream>

int main() 

{

  int n, t1 = 0, t2 = 1, nextTerm = 0 ;

  std::cout << "Enter the number of terms: " ;

  std::cin >> n ;

  std::cout << "Fibonacci Series" ;

  for (int i = 1 ; i <= n ; i++)

   {
     
    if (i == 1)

      {
        
        std::cout << " " << t1 ;
        continue;
      }

      if (i == 2)
      
   {

   std::cout << t2 << " "; 
   continue ;

    }

    nextTerm = t1 + t2 ;
    t1 = t2 ;
    t2 = nextTerm ;

    std::cout << nextTerm << " " ;
     }

     return 0 ;
}

}