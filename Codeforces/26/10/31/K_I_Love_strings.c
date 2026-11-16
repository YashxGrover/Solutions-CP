#include <stdio.h>
#include <string.h>
int main() {
    // Your code goes here

    int tc;
    char s[51];
    char t[51];
    scanf("%d",&tc);
    for(int j=0 ; j<tc ; j++){
    
    scanf("%s",s);
    scanf("%s",t);

    int s1=strlen(s);
    int t1=strlen(t);

if(s1==t1){
     for(int i=0 ; i<s1 ; i++){
        printf("%c%c",s[i],t[i]);
    } 
}
else{
    int lenmax= s1>t1 ? s1 : t1;
    int lenlow=s1>t1 ? t1 : s1;
    int len=lenmax-lenlow;

    for(int i=0 ; i<lenlow ; i++){
        printf("%c%c",s[i],t[i]);
    } 
    if(s1>t1){
         for(int k=lenlow ; k<lenmax ; k++){
    printf("%c",s[k]);
  }
    }
    else{
          for(int k=lenlow ; k<lenmax ; k++){
    printf("%c",t[k]);
  }
    }
}
printf("\n");
}
    return 0;
}