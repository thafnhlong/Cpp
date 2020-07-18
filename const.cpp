const int a;
int b;

const int *pa = int const *pa

const int *pb = &b    //work
*pb = 1               //fail
pb = &a               //work



const int *pa = &a    //work
int *pa = &a          //fail

int *const pa = &a    //work
pa = ...              //fail


[void test(int *a);]
const int a; 
test(&a);             //fail


[void test(const int *a);]
int a;
test(&a);             //work
