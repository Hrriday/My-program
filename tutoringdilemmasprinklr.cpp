#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> teacher,student;
    for(int i=0;i<n;i++){
        cin>>teacher[i].first>>teacher[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>student[i].first>>student[i].second;
    }
    sort(teacher.begin(),teacher.end(),greater<int>());
    sort(student.begin(),student.end(),greater<int>());
    vector<int> smallest(n);
    for(int i=0;i<n;i++){

    }
}