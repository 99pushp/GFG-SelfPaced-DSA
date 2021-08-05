#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>x;//increasing order
    set<int,greater<int>>s;//decreasing 
    
    //insert
    s.insert(10);
    s.insert(5);
    s.insert(2);
    s.insert(23);
    //traverse
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    //traverse
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }
    //reverse traversal
    cout<<endl;
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //find 
    auto itt=s.find(10);
    cout<<(*itt);
    cout<<endl;
    //clear remove all the elements
    //s.clear();
    cout<<s.count(200);

    //erase()
    //s.erase(2);
    //s.erase(itt);
    //s.erase(s.begin(),s.end());
     
     //5 10 20
    //lower_bound() 
    //upper_bound() 
     //set uses self balancing binary tree (red black tree)
    return 0;
}

//begin,end,rbegin,rend,size,empty o{1}
//count,lower_bound,upperbound,eraseo{log(N)}

PS E:\DSA\sets> cd "e:\DSA\sets\" ; if ($?) { g++ intro.cpp -o intro } ; if ($?) { .\intro }
23 10 5 2
23 10 5 2
2 5 10 23
10
0
