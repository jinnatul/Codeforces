#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    int t,p;
    scanf("%d",&t);
    for(p=0;p<t;p++){

    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
	   }
	}

    if (flag) {
       printf("no\n");
    }
    else {
       printf("yes\n");
    }

    }
    return 0;
}