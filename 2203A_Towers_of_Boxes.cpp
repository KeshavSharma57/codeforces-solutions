#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        int no_tower=0; 
        int number_of_boxes=((d/m)+1);
        while(n>0) 
        {
            n=n-number_of_boxes;
            no_tower++;
        }
        cout<<no_tower<<endl; 
    }
    return 0;
}