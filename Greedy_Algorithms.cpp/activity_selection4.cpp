#include<bits/stdc++.h>
using namespace std;

struct Activity{
    int start;
    int finish;
};

bool compareActivities(const Activity& a, const Activity& b){
    return a.finish<b.finish;
}

void selecActivities(vector<Activity>& activities){
    sort(activities.begin(), activities.end(), compareActivities);

    int selected=0;

    cout<<"activities:"<<"(";
    cout<<activities[selected].start<<","<<activities[selected].finish<<")";

    for(int i=0; i<activities.size(); i++){
        if(activities[selected].finish<=activities[i].start){

            selected=i;
            cout<<"("<<activities[selected].start<<","<<activities[selected].finish<<")";
        }
    }
    cout<<endl;
}

int main(){

    vector<Activity>activity={
        {1,3},
        {2,4},
        {3,5},
        {4,6},
    };
    selectActivities(activity);
}