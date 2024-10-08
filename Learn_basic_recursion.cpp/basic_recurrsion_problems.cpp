//Question 1: print a name n times using recurrsion

// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n){
//   if(i>n) return; // if i exceeds v, the code terminates
//   //if not, we first print the name
//   cout<<"Sample Output"<<" ";
//   //and everytime the function calls itself, the value of i is increased by 1, until the stopping condition is met
//   f(i+1, n);
// }

// int main(){
//   int N;
//   cin>>N;
//   f(1, N); // we initialized i to 1 for obvious reasons :)
//   return 0;
// }

//Question 2: print 1 to n using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void f(int n){
//   if(n==0) return;
//   f(n-1);
//   cout<<n<<" ";
// }

// int main(){
//   int n;
//   cin>>n;

//   f(n);
//   return 0;
// }

//Question 3: print from n to 1 using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int n){
//   if(i<=0) return;
//   cout<<i<<" ";
//   f(i-1, n);
// }

// int main(){
//   int a;
//   cin>>a;
//   f(a,a); // we tool a,a instead of simply i,a because a will behave like i and will eventually be decreased at every recursive step;
//   return 0;
// }

//Question 4: sum of first n numbers using recurrsion
// Method 1: Parametereised way
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int sum){
//   if(i<1){
//     cout<<sum;
//     return;
//   }
//   f(i-1, sum+i);
// }

// int main(){
//   int a;
//   cin>>a;
//   f(a, 0);
//   return 0;
// }

// Method 2: Functional way
// #include <bits/stdc++.h>
// using namespace std;

// int f(int n){
//   if(n==0) return 0;
//   return n+f(n-1);
// }

// int main(){
//   int a;
//   cin>>a;
//   int sum = f(a);
//   cout<<sum;
//   return 0;
// }

// Question 5: factorial of n using recursion

// Method 1: functional way
// #include <bits/stdc++.h>
// using namespace std;

// int f(int n){
//   if(n==0){
//     return 1;
//   }
//   return n*f(n-1);
// }

// int main(){
//   int x;
//   cin>>x;

//   int res = f(x);
//   cout<<res;
//   return 0;
// }

// Method 2: parameterized way
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int fct){
//   if(i==0){
//     cout<<fct;
//     return;
//   }
//   f(i-1, fct*i);
// }

// int main(){
//   int n;
//   cin>>n;
//   f(n,1);
//   return 0;
// }

// Question 6: reverse an array using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void f(int i, int arr[], int n){
//   if(i>=n/2) return;
//   swap(arr[i], arr[n-i-1]); // for example if n is 4 and i is 1 then the swap will occur b/w a[1] and a[4-1-1] i.e 2
//   f(i+1, arr, n);
// }

// int main(){
//   int x;
//   cin>>x;
//   int arr[x];

//   for(int i=0; i<x; i++){
//     cin>>arr[i];
//   }

//   f(0, arr, x);

//   for(int i=0; i<x; i++){
//     cout<<arr[i]<<" ";
//   }

//   return 0;
  
// }

// Question 7: 