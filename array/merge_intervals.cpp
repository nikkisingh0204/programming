// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     vector<pair<int,int>>a;
//     for(int i=0;i<n;i++){
//         int x ,y ;
//         cin>>x>>y;
//         a.push_back({x,y});
//     }
//     sort(a.begin(),a.end());
//     stack<pair<int,int>>s;
//     s.push({a[0].first,a[0].second});
//     for(int i=1;i<n;i++){
//         int start1=s.top().first;
//         int end1=s.top().second;
//         int start2=a[i].first;
//         int end2=a[i].second;

//         if(end1<start2)
//             s.push({start2,end2});
//         else{
//             s.pop();
//             end1=max(end1,end2);
//             s.push({start1,end1});

//         }
//     }
//     while(!s.empty()){
//         cout<<s.top().first<<" "<<s.top().second<<endl;
//         s.pop();
//      }
//      return 0;
// }

//SECOND APPROACH 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int x , y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end());
    int index = 0;
    for(int i=1 ;i<n;i++){
        if(a[index].second>a[i].first){
            a[index].second=max(a[index].second,a[i].second);
        }
        else{
            index++;
            a[index].first=a[i].first;
            a[index].second=a[i].second;
        }
        for(int i=0;i<index;i++)
            cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}


  