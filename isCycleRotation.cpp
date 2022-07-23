int isCyclicRotation(string &p, string &q) 
{
    //    Write your code here
    if(p == q)
        return 1;
    
    if(p.length() != q.length())
        return 0;
    
    string temp = p + p;
    
    int pos = temp.find(q);
    
    if(pos >= 0)
        return 1;
    return 0;
}
