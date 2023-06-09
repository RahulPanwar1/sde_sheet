bool searchMatrix(vector<vector<int>>& mat, int target) {
    int col = mat[0].size();
    int row = mat.size();

    for(int i =0;i<row;i++)
    {
        if(mat[i][col-1] < target)
        {
            continue;
        }
        int s =0;
        int e = col -1;
       while(s<=e)
       {
           int mid = s + (e-s)/2;
           if(mat[i][mid] == target) return true;
           else if(mat[i][mid] > target) e = mid-1;
           else s = mid +1;
       }
       break;
    }
    return false;
}