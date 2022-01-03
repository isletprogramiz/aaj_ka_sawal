#include<bits/stdc++.h>
//********************Best Approach**********************//
//TC- O(n)
void sort012(int a[], int n)
    {
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                a[mid++]=a[low];
                a[low++]=0;
            }
            else if(a[mid]==1)
            mid++;
            else
            {
                a[mid]=a[high];
                a[high--]=2;
            }
        }
    }

//*******************2nd Approach************************//
//TC O(n)
 void sort012(int a[], int n)
    {
        int count0=0, count1=0,count2=0; 
        
        for(int i=0 ; i < n ; i++){
            if(a[i] == 0)
            count0++;
            if(a[i] == 1)
            count1++;
            if(a[i] == 2)
            count2++;
        }
        for(int i=0; i < count0; i++)
            a[i] = 0;
        for(int i=count0; i < count0 + count1; i++)
            a[i] = 1;
        for(int i=(count0+count1); i<n; i++)
            a[i] = 2;
    }

//********************3rd Approach***********************//
//TC --nlog(n)
void sort012(int a[], int n)
{
sort(a, a+n);
}
