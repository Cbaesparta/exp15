
## EXPERIMENT 15

## AIM:
To study and implement recursion.

## THEORY:
 A recursive function solves a particular problem by calling a copy of itself and solving smaller subproblems of the original problems. Many more recursive calls can be generated as and when required. It is essential to know that we should provide a certain case in order to terminate this recursion process. So we can say that every time the function calls itself with a simpler version of the original problem.

### Key Components of Recursion:

- **Base Case:**
  - The condition that terminates the recursion.
  - Prevents infinite recursion by stopping further recursive calls.
  
- **Recursive Case:**
  - The part of the function that makes a call to itself.
  - Solves a smaller or simpler instance of the problem.

### How Recursion Works:
- **Function Call:**
  - When the function calls itself, it pauses execution.
  
- **Recursive Call:**
  - The function makes a new call with modified arguments (typically smaller or simpler).
  
- **Resume Execution:**
  - Once the base case is met, paused calls resume from where they left off.
  - The function then returns the result back through the call stack.

## Memory allotment
When any function is called from main(), the memory is allocated to it on the stack. A recursive function calls itself, the memory for a called function is allocated on top of memory allocated to the calling function and a different copy of local variables is created for each function call.
  
## FACTORIAL USING RECURSION:

```
//Name: Sai Sankar Jena
//Prn: 230701231
//Class: EnTC B-2
# include <iostream>
using namespace std;
// Creating a function
int fact (int n){
    if (n<=1){
        // Terminating statement (base condition)
        return 1;
    }
    else {
        return (n*fact(n-1));    // Recursion
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= fact(n);      // Function calling
    cout<<n<<"!="<<X;
    return 0;
}
```

## OUTPUT:
```
PS C:\Users\CL301_13\Desktop\23070123112> cd "c:\Users\CL301_13\Desktop\23070123112\" ; if ($?) { g++ REC1.cpp -o REC1 } ; if ($?) { .\REC1 }
Enter a number: 5
5! = 120
```

## SUM OF INTEGERS USING RECURSION:

```
//Name: Sai Sankar Jena
//Prn: 230701231
//Class: EnTC B-2
# include <iostream>
using namespace std;
// Creating a function
int add (int n){
    if (n<=1){
        // Terminating statement (base condition)
        return 1;
    }
    else {
        return (n+add(n-1));    // Recursion
    }
}
int main (){
    int X,n;
    cout<< "Enter number : ";
    cin>>n;
    X= add(n);      // Function calling
    cout<<X;
    return 0;
}
```

## OUTPUT:
```
PS C:\Users\CL301_13\Desktop\23070123112> cd "c:\Users\CL301_13\Desktop\23070123112\" ; if ($?) { g++ rec2.cpp -o rec2 } ; if ($?) { .\rec2 }
Enter a number: 6
6 = 21
```

## REVERSING A STRING USING A RECURSION:

```
//Name: Sai Sankar Jena
//Prn: 230701231
//Class: EnTC B-2
# include <iostream>
#include <string.h>
using namespace std;
// Creating function
void reverse(char *str){
    if (*str)                      //Base codition
    {
        reverse(str+1);            //Recursion
        cout<<("%c",*str);

    }
}
int main (){
    char a[50];
    cout<<" Enter a string : ";
    cin>>a;
    reverse(a);                   // Function calling
    return 0 ;
}
```

## OUTPUT:
```
PS C:\Users\CL301_13\Desktop\23070123112> cd "c:\Users\CL301_13\Desktop\23070123112\" ; if ($?) { g++ rev3.cpp -o rev3 } ; if ($?) { .\rev3 }
enter a stringsai
ias
```



## REVERSING AN INTEGER USING RECURSION:

```
//Name: Sai Sankar Jena
//Prn: 230701231
//Class: EnTC B-2
# include <iostream>
using namespace std;
// Creating function
void print_reverse(int i){
    if (i>0)                      //Base codition
    {         
        cout<<(i%10);
        print_reverse(i/10);     //Recursion

    }
}
int main (){
    int i;
    cout<<" Enter the number : ";
    cin>>i;
    print_reverse(i);                   // Function calling
    return 0 ;
}
```

## OUTPUT:
```
PS C:\Users\CL301_13\Desktop\23070123112> cd "c:\Users\CL301_13\Desktop\23070123112\" ; if ($?) { g++ rec4.cpp -o rec4 } ; if ($?) { .\rec4 }
Enter a Number: 123
321
```


# CONCLUSION:


### Key Insights from Implementing Recursion in C++:

- **Clarity in Expression:**
  - Recursion often simplifies the implementation of inherently recursive problems, such as tree traversals and divide-and-conquer algorithms.
  - Provides a clear and intuitive approach compared to iterative solutions for certain types of problems.

- **Importance of Base Case:**
  - A well-defined base case is essential to prevent infinite recursion and stack overflow errors.
  - Ensures that the recursion halts properly and avoids unbounded execution.

- **Stack Depth and Resource Constraints:**
  - Deep recursion can lead to stack overflow errors, making recursive methods unsuitable for problems requiring extensive recursion depth.
  - Awareness of stack size limitations is crucial, and alternative approaches may be needed for deep recursion scenarios.

- **Performance Considerations:**
  - Recursive functions can be less efficient due to overhead from multiple function calls and managing the call stack.
  - Performance profiling may reveal whether recursion or iterative methods are more efficient for specific problems.

- **Memoization and Optimization:**
  - Memoization can optimize recursive functions by storing and reusing previously computed results, reducing redundant calculations.
  - Particularly useful in problems like the Fibonacci sequence where overlapping subproblems are present.

