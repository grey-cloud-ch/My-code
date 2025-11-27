#include<bits/stdc++.h>
using namespace std;
struct Word {
    char n[50];
    int count=0;
} w[1000];
int wordCount=0;
void get_sen(char sen[]){
    fgets(sen,1000,stdin);
    int len = strlen(sen);
    if (len > 0 && sen[len - 1] == '\n') {
        sen[len - 1] = '\0';
    }
}
void get_words(char sen[],char out[]){
    int t=0;
    for(int i=0;i<strlen(sen);i++)
    {
        if((sen[i]>='A' && sen[i]<='Z') || (sen[i]>='a' && sen[i]<='z') || sen[i]==' ')
        {
            out[t]=sen[i];
            t++;
        } else {
            out[t] = ' ';
            t++;
        }
    }
    out[t] = '\0';
}
void to_lower(char str[]) {
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}
void count_word(char out[]){
    char tem_word[50];
    int t=0, p=0;
    for(int i=0; i<=strlen(out); i++)
    {
        if(out[i] != ' ' && out[i] != '\0') 
        {
            tem_word[p] = out[i];
            p++;
        }
        else
        {
            if(p > 0) { 
                tem_word[p] = '\0';
                to_lower(tem_word);
                bool found = false;
                for(int j=0; j<wordCount; j++)
                {
                    if(strcmp(tem_word, w[j].n) == 0)
                    {
                        w[j].count++;
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    strcpy(w[wordCount].n, tem_word);
                    w[wordCount].count = 1;
                    wordCount++;
                }
                p = 0;
            }
        }
    }
}
bool cmp(Word a, Word b) {
    if(a.count != b.count) {
        return a.count > b.count; 
    }
    return strcmp(a.n, b.n) < 0;
}
int main()
{
    char sen[1000],out[1000];
    get_sen(sen);
    get_words(sen,out);
    count_word(out);
    sort(w, w + wordCount, cmp);
    for(int i=0; i<wordCount; i++) {
        cout << w[i].n << "(" << w[i].count << ")";
        if(i < wordCount-1) {
            cout << " ";
        }
    }
    return 0;
}