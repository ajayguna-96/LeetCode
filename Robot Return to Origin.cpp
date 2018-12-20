class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        int i = 0;
        while(i < moves.length()){
            if(moves[i] == 'U'){
                y += 1;
            }
            if(moves[i] == 'D'){
                y -= 1;
            }
            if(moves[i] == 'R'){
                x += 1;
            }
            if(moves[i] == 'L'){
                x -= 1;
            }
            i++;
        }
        if( x == 0 && y == 0){
            return true;
        }
        return false;

    }
};
