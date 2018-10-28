# Convertus
A converter between math bases. (2,8,10,16)

You can convert a number from and to Binary,Octal,Decimal and Hexadecimal. 

This was a fun Visual C++ project. It was done in about a day for practice. 
Two problems plague this program. 

#1: It doesn't check whether the user has entered data correctly. It's the user's problem if he enters incorrect data.

#2: It doesn't use Arrays meaning that it was range problems. Unfortunately, I had already done >80% of the program when
    I started coding the functions which made me realize that __int64 is not enough for conversions. So some conversions are
    limited. Especially the binary ones which result in huge numbers. I'll probably patch this in the future. 
    
Other than that, it's working perfectly as far as I know. To whoever tests it, message me if you find a bug. 
