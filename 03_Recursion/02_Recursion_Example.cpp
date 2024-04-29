#include<bits/stdc++.h>
using namespace std;

// Tail Recusrion
void fun(int i) {

    if(i > 0) {
        cout<< i;
        fun(i - 1);
    }

}

// Head Recursion
// void fun(int i) {

//     if(i > 0) {
//         fun(i - 1);
//         cout<< i;
//     }

// }


int main()
{
    int i = 3;

    fun(i);

    return 0;
}