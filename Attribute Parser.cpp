
//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

char r[1000];
map<string, string> have;

void jumpSpace(char * &r) {
    for (;*r && isspace(*r); ++r)
    ;
}

string readWord(char * &r) {
    string word = "";
    jumpSpace(r);
    for (; (*r) && (!isspace(*r)); ++r) {
        word += *r;
    }
    return word;
}

string readUntil(char *&r, char c) {
    string word = "";
    for (; (*r) && (*r != c); ++r) {
        word += *r;
    }
    if (*r == c) {
        word += c;
    }
    return word;
}

void gao1(string &tag) {
    int i;
    for (i = tag.length() - 1; i >= 0; --i) {
        if (tag[i] == '.') {
            break;
        }
    }
    if (i > 0) {
        tag = tag.substr(0, i);
    }
    else {
        tag = "";
    }
}
void gao2(string &tag, char * &r) {
    while (true) {
        string word = readWord(r);
        if ((word.length() == 0) || (word[0] == '>')) {
            break;
        }
        string key = tag + "~" + word;
        string temp = readUntil(r, '=');
        if (temp.length() == 0) {
            break;
        }
        temp = readUntil(++r, '\"');
        if ((temp.length() == 0) || (temp[temp.length() - 1] != '\"')) {
            break;
        }
        temp = readUntil(++r, '\"');
        if (temp.length() == 0) {
            break;
        }
        have[key] = temp.substr(0, temp.length() - 1);
        ++r;
    }
}

int main() {
       
    int n, q;
    scanf("%d%d", &n, &q);
    gets(r);
    string tag = "";
    for (int i = 0; i < n; ++i) {
        gets(r);
        for (char *t = r;;) {
            string word = readUntil(t, '<');
            if (word.length() == 0) {
                break;
            }
            word = readWord(++t);
            if (word.length() == 0) {
                break;
            }
            if (word[0] == '/') {
                gao1(tag);
                break;
            }
            if (tag.length()) {
                tag += ".";
                
            }
            if (word[word.length() - 1] == '>') {
                word = word.substr(0, word.length() - 1);
                tag += word;
                break;
            }
            tag += word;
            gao2(tag, t);
            
            
        }
        
    }
    for (int i = 0; i < q; ++i) {
        gets(r);
        map<string, string>::iterator t = have.find((string) r);
        puts((t == have.end())?"Not Found!":(t->second.c_str()));
    }
    
    return 0;
}