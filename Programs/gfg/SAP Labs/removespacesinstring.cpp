class Solution
{
  public:
    string modify (string s)
    {
      int n = s.length ();
        int i = 0, j = 0;
 
        while (i < n)
        {
            if (s[i] != ' ') s[j++] = s[i];
            i++;
        }
        return s.substr (0, j);
    }
};
