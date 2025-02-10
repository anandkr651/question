/*Input: n = 19
Output: true
Explanation:
pow(1,2) + pow(9,2) = 82
pow(8,2) + pow(2,2) = 68
pow(6,2) + pow(8,2) = 100
pow(1,2) + pow(0,2) + pow(0,2) = 1
*/

#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n){
    vector<int>ans;
    while (n!=1)
    {
        int sum=0;
        while(n!=0){
            int digit = n%10;
            sum=sum+digit*digit;
            n=n/10;
        }
        for(int i=0;i<n;i++){
            if(ans[i]==sum){
                return false;
            }
        }
        ans.push_back(sum);
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