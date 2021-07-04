class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        s=s+" ";
        int i,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {c++;
}
            if(c==k)
            {return s1;
  }
            s1=s1+s[i];
}
        return s1;
        
        
    }
};