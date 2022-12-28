#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int x, trans;
    int time = 0;
    vector<int> three_vector;
    vector<int> result;
    cin>>x;
    while(x/10 != 0){
        three_vector.push_back(x%10);
        x /= 10;
    }
    three_vector.push_back(x);
    // for(int i = 0; i < three_vector.size(); i++){
    //     cout<<three_vector[i]<<endl;
    // }
    for(int j = 0; j < three_vector.size(); j++){
        if(time == 3){
            time = 0;
            result.push_back(trans);
            trans = 0;
        }
        trans += three_vector[j]*pow(3,j%3);
        time++;
    }
    if(trans != 0){
        result.push_back(trans);
    }
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<endl;
    }

    return 0;

}