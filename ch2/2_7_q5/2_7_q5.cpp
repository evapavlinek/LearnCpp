/* Doesn’t compile.The compiler will complain that it can’t find a matching add() function 
that takes 3 arguments.The forward declaration of add() only has two parameters. */ 

//#include <iostream>

//int add(int x, int y);
//
//int main()
//{
//    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
//    return 0;
//}
//
//int add(int x, int y)
//{
//    return x + y;
//}



/* Doesn’t compile. The compiler will complain that it can’t find a matching add() function that takes 3 arguments. 
The forward declaration of add() only has two parameters, and the definition of function add() that has 3 parameters 
hasn’t been seen yet. */
//#include <iostream>
//int add(int x, int y);
//
//int main()
//{
//    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
//    return 0;
//}
//
//int add(int x, int y, int z)
//{
//    return x + y + z;
//}



/* Doesn’t link. The compiler will match the forward declaration of add to the function call to add() in main(). 
However, no add() function that takes two parameters was ever implemented (we only implemented one that took 3 parameters), 
so the linker will complain. */
//#include <iostream>
//int add(int x, int y);
//
//int main()
//{
//    std::cout << "3 + 4 = " << add(3, 4) << '\n';
//    return 0;
//}
//
//int add(int x, int y, int z)
//{
//    return x + y + z;
//}



/* Compiles and links. The function call to add() matches the forward declaration, and the definition of add() also matches. */
//#include <iostream>
int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}



/* Compiles and links. This is the same as the prior case. Function declarations do not need 
to specify the names of the parameters (even though we generally prefer to include them). */
/*#include <iostream>
int add(int, int, int);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y, int z)
{
  */  return x + y + z;
}