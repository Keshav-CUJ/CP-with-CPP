#include<bit/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> cards, vector<vector<int>> moves, int query) {
    vector<vector<int>> v={{0,0}};
    for(int i = 0; i< cards.size();i++)
        {  int r = cards[i][1];
           int c = cards[i][2];
            v[r][c]= cards[i][0];
        }

  
    for(int i=0; i<moves.size();i++){
        int cardID= moves[i][0];
        int rbm= moves[i][1];
        int cbm= moves[i][2];
        int dri =moves[i][3];
        int dci = moves[i][4];
       
        v.erase( &cards[rbm][cbm]);
        v.insert(&cards[dri][dci]); 
    }

    for(int i= 0; i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]== query){
                vector<int> result={i,j};
                return result;
            }
        }
    }
    
    

}