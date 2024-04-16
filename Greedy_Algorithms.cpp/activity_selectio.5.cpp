#include<bits/stdc++.h>
using namespace std;

struct Activity{
    int start;
    int finish;
};

bool compareActivities(const Activity &a,const Activity &b ){
    return(a.finish <b.finish);
}

void selectActivities(vector <Activity>& activities){
    sort(activities.begin(),activities.end(),compareActivities);
}

int selectedItem = 0;

cout<<"selected Activities:"<<"("<<"activities[selectedItem].start<<","<<activities[selectedItem].finish<<")";

for(int i=1; i<activities.size(). i++){
    if(activities[i].start>=activities[selectedItem].finish){
        selected = i;
    
        cout<<"selected Activities:"<<"("<<"activities[selectedItem].start<<","<<activities[selectedItem].finish<<")";
    }
}

cout<<"\n";
int main(){
    vector<Activity> activity={
        {2,6},
        {4,5},
        {7,8},
    };
    selectActivities(activities);
}