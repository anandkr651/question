/*Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/

// #include<bits/stdc++.h>
// using namespace std;
// bool isHappy(int n){
//     vector<int>ans;
//     while (n!=1)
//     {
//         int sum=0;
//         while(n!=0){
//             int digit = n%10;
//             sum=sum+digit*digit;
//             n=n/10;
//         }
//         for(int i=0;i<n;i++){
//             if(ans[i]==sum){
//                 return false;
//             }
//         }
//         ans.push_back(sum);
//         n=sum;
//     }
//     return true;
// }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     bool ans =isHappy(n);
//     ans?cout<<"Happy number is true ":cout<<"Happy number is not number ";
// }
/*enter the number 19
Happy number is true         
PS D:\question\tcs question>*/


#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n){
    unordered_set<int>ans;
    while (n!=1)
    {
        int sum=0;
        while(n!=0){
            int digit = n%10;
            sum=sum+digit*digit;
            n=n/10;
        }
        if(ans.count(sum)){
            return false;
        }
        ans.insert(sum);
        n=sum;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    bool ans =isHappy(n);
    ans?cout<<"Happy number is true ":cout<<"Happy number is not number ";
}
/*enter the number 20
Happy number is not number   
PS D:\question\tcs question>*/