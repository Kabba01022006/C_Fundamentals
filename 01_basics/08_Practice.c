//Q-Which of the following is not a character constant ? 
//(1) 'Thank You' 
// (2) 'Enter values of P, N, R' 
// (3) '23.56E-03' 
// (4) All the above -->Ans   (as character can hold only one single character)

//Q-In b = 6.6 / a + 2 * n;, which operation will be performed first?
// (1) 6.6 / a  -->Ans
// (2) a + 2
// (3) 2 * n
// (4) Depends upon compiler

//Q-Which of the following statements is false? 
// (1) Each new C instruction has to be written on a separate line  -->Ans
// (2) Usually all C statements are entered in small case letters 
// (3) Blank spaces may be inserted between two words in a C statement 
// (4) Blank spaces cannot be inserted within a variable name

//Q-If a is an integer variable, a=5/2; will return a value?
// (1)2.5
// (2)3
// (3)2  -->Ans
// (4)0

// The expression, a = 7 / 22 * ( 3.14 + 2 ) * 3 / 5 ; evaluates to
// (1) 8.28
// (2) 6.28
// (3) 3.14
// (4) 0  -->Ans if its int 

// The expression, int a = 30 * 1000 + 2768 ; evaluates to
// (1) 32768 -->Ans
// (2) -32768
// (3) 113040
// (4) 0  
// if it wouldve been short a , it will give us the ans as -32768 , as the shorts range is from -32768 to +32767.// 30 * 1000 + 2768 equals 32768, which exceeds the max range of a short (32767). // This causes integer overflow, forcing the value to wrap around to the minimum limit. // As a result, 32768 wraps exactly to the start of the range: -32768.

// modulo ki presedence is more than / , * and +,-
// 2 % -8 and 2 % 8 is basically the same thing.

//Q - What will be the value of d if d is a float after the operation d=2/7.0 ? 
// (1)0
// (2)0.2857
// (3)Cannot be determined
// (4)None of the above -->Ans
// our calculation does give the ans 0.2857 but it is incorrect as our float solves upto 6 decimal values , therefore none of the above is the right answer. 