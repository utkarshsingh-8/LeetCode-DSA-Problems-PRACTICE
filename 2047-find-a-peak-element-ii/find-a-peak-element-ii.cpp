class Solution {
public:

    int findMaxIndex(vector<vector<int>>& mat,int n, int m, int col)
    {
        int maxValue = -1;
        int index = -1;
        for(int i = 0; i < n; i++)
        {
            if(mat[i][col] > maxValue)
            {
                maxValue = mat[i][col];
                index = i;
            }
        }

        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();

        int start = 0, end = col - 1;

        while(start <= end)
        {
            int mid = start + (end - start)/2;

            int maxRowIndex = findMaxIndex(mat,row,col,mid);

            int left  = mid - 1 >= 0 ? mat[maxRowIndex][mid - 1] : -1;
            int right = mid + 1 < col  ? mat[maxRowIndex][mid + 1] : -1;

            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right)
                return {maxRowIndex,mid};

            else if( mat[maxRowIndex][mid] < left )
                end = mid - 1;

            else
                start = mid + 1;

        }



        return {-1,-1};
    }
};