#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int dp[501] = {0};

bool compare(vector<vector<int> > v1, vector<vector<int> > v2)
{
    if(v1[0][1] < v2[0][1]) return true;
}

int solution(vector<vector<int> > jobs)
{
    int answer = 0;

    sort(jobs.begin(), jobs.end(), compare);

    int stack =0; 
    for(int i=0;i<jobs.size();i++){
        stack+=jobs[i][1];
    }



    return answer;
}

int main(void)
{

    return 0;
}