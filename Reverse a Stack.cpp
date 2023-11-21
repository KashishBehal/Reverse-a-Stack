class Solution{
public:
    void Reverse(stack<int> &St){
        queue<int>s;
        while(St.size()){
            int a=St.top();
           St.pop();
            s.push(a);
        }
        while(s.size()){
             int b=s.front();
           s.pop();
            St.push(b);
        }
        return;
    }
};
