class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mcnt=0,cnt=0;
        for(int i=0;i<sentences.size();i++){
            cnt=0;
            string temp=sentences[i];
            for(int j=0;j<sentences[i].length();j++){
                if(temp[j]==' '){
                    cnt++;
                }
            }
            cnt++;
            if(cnt>mcnt){
                mcnt=cnt;
            }
            
        }
        return mcnt;
    }
};