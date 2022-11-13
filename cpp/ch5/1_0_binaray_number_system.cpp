//    DECIMAL TO BINARY
// 
// N     QUOTIENT(N/2)  REMAINDER(N%2)
// 45    22                1
// 22    11                0
// 11    5                 1
// 5     2                 1
// 2     1                 0
// 1     0                 1
// 
// NOW THE REMENDER IN REVERSE ORDER GIVES BINARY NUMBER
// THEREFORE 45= 101101
// 
//    BINARY TO DECMAL
//   1    0    1    1    0    1
//  2^5  2^4  2^3  2^2  2^1  2^0
// 
// 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0
// 32 + 8 + 4 + 1 = 45
//
//