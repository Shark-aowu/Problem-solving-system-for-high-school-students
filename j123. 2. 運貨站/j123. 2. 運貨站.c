#include<stdio.h>
int R, C, n, A1, A2;
int RC[55][55] = {0};
int bbk[5] = {4,1,2,2,3}, bbj[5] = {1,3,2,3,2};
int data[5][4][3] = {
    {{1,0,0},{1,0,0},{1,0,0},{1,0,0}},
    {{1,1,1},{0,0,0},{0,0,0},{0,0,0}},
    {{1,1,0},{1,1,0},{0,0,0},{0,0,0}},
    {{0,0,1},{1,1,1},{0,0,0},{0,0,0}},
    {{0,1,0},{1,1,0},{1,1,0},{0,0,0}}};

int main(){
    for(int i = 0; i < 55; i++){
        for(int j = 0; j < 55; j++){
            RC[i][j] = 1;
        }
    }
    scanf("%d %d %d", &R, &C, &n);
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            RC[i][j] = 0;
        }
    }
    for(int ni = 0; ni < n; ni++){
        char ti_;
        int yi = 0, ti = 0, de_num = 0;
        scanf(" %c %d", &ti_, &yi);
        ti = (int)ti_ - (int)'A';
        for(int Ct = 0; Ct < C; Ct++){
            int ck_deb = 0, bbk_de = 0;
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 3; j++){
                    if(RC[yi+i][Ct+j] + data[ti][i][j] >= 2) ck_deb++;                
                }
            }
            for(int i_ = yi; i_ < yi + bbk[ti]; i_++){
                for(int j_ = Ct + bbj[ti]; j_ < C; j_++){
                    if(RC[i_][j_] != 0) bbk_de++;
                }
            }
            if(ck_deb == 0 && bbk_de == 0){
                de_num = 1; 
                for(int i = 0; i < 4; i++){
                    for(int j = 0; j < 3; j++){
                        RC[yi+i][Ct+j] += data[ti][i][j];
                    }
                }
                Ct = C;
            }
        }
        if(de_num == 0) A2++;
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(RC[i][j] == 0) A1++;
        }
    }
    printf("%d %d", A1, A2);
    return 0;
} 
