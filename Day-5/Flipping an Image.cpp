class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i,j;
        for(i=0;i<image.size();i++)
        {
            for(j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
               }
                else
                {
               image[i][j]=0;
                }
             }
       }
         for(i=0;i<image.size();i++)
        {reverse(image[i].begin(),image[i].end());
        
    }
        return image;}
};