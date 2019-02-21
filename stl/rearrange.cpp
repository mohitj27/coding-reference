/*Given an array of integers, rearrange the array such that every second element of the array is greater
 than its left and right elements. Assume no duplicate elements are present in the array.*/
 // Input :   {1, 2, 3, 4, 5, 6, 7}
 // Output :  { 1 , 3 , 2 , 5 , 4 , 7 , 6 }

 #include <bits/stdc++.h>
 using namespace std;


 void rearrange (int *a , int n) {
   sort (a , a + n);
   int i = 0;
   int j = n-1;
   int b[n];
   int k =0;
   while(i<j) {
    b[k++] = a[i++];
    b[k++] = a[j--];
   }

 }

 int main() {

      int n;
      int a[100];
      int i=0;
      while( (cin>>n)) {
         if(n == '\n') break;
         a[i++] = n;
      }
      n = sizeof(a)/sizeof(a[0]);
      rearrange(a,n);
     for(int k =0 ; k <n; k++) {
        cout<<a[k]<<endl;
     }

 }
