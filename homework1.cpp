/**
 * @Author: Skyler May
 * @Date:   2024-02-07 20:37:25
 * @Last Modified by:   Your name
 * @Last Modified time: 2024-02-08 12:01:32
 */
#include <iostream>

using namespace std;

int findmax( int a[], int n){
    int i;
    int  maxNum = a[0];

    for(i=1; i<n; i++)
        if(a[i] > maxNum)
        maxNum = a[i];
    
        return maxNum;
    
}

