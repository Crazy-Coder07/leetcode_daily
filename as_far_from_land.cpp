class Solution {
public:
    int dx[4] = {+1,-1,+0,+0};
    int dy[4] = {+0,+0,+1,-1};
    int maxDistance(vector<vector<int>>& grid) {
      int n = grid.size();
      int m = grid[0].size();
       queue<pair<int,int>>q;
       for(int i = 0 ;i<n;i++){
           for(int j =0 ;j<m;j++){
               if(grid[i][j])q.push({i,j});
           }
       }
       if(q.size() ==0 ||q.size() ==n*m){
          return -1;
       }
       int dis = 0;
       while(q.size() >0){
          int sz = q.size();
          while(sz --){
             pair<int,int>curr = q.front();
              q.pop();
              for(int i = 0 ;i<4;i++){
                int newX = dx[i] + curr.first;
                int newY = dy[i] + curr.second;
                if(newX <0 ||newX == n ||newY <0 ||newY ==m ||grid[newX][newY])continue;
                q.push({newX,newY}); 
                grid[newX][newY] =1;

            }
          }
          dis++;
        
       }
       return dis-1;
    }
};