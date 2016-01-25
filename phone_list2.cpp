#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define r_all(x) (x).rbegin(), (x).rend()
#define inf INT_MAX

#define NN 10
#define MAX_WORD_SIZE 10
using namespace std;
struct node {
    struct node * p;
    struct node * ch[NN];
    vector<int> occ;
};
bool Insert(struct node * root,char text[],int idx) {
    struct node * temp = root;
    bool res= true;
    int i=0;
    while(text[i] != '\0') {
        if(temp->occ.size() != 0) res = false;
        if(temp->ch[text[i] -'0'] == NULL) {
            temp->ch[text[i] -'0'] = (struct node *) calloc(1, sizeof(struct node));
            temp->ch[text[i] - '0']->p = temp;
        }
        temp = temp->ch[text[i] -'0'];
        i++;
    }
    temp->occ.push_back(idx);
    for(int j=0;j<NN;j++) {
        if(temp->ch[j] != NULL) {
            res = false; 
            break;
        }
    }
    return res;
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int tc=0;tc<T;tc++) {       
        scanf("%d", &n);
        struct node * root = (struct node *) calloc(1, sizeof(struct node));
        char word[MAX_WORD_SIZE + 1];
        bool result = true;
        for (int i = 0; i < n; ++i) {
            scanf("%s", word);
            if(!Insert(root, word, i + 1)) {
                result = false;
            }
        }
        result ? printf("YES\n"):printf("NO\n");;
        free(root);
    }
    return 0;
}
