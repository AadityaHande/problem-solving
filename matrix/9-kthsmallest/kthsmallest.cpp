class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        vector<int> temp;
        int N=mat.size();
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                temp.push_back(mat[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        return (temp[k-1]);
        
        // for(int i=0;i<N;i++){
        //     for(int j=0; j<N;j++){
        //         Mat[i][j]=temp[k++];
        //     }
        // }
        
    }
};



