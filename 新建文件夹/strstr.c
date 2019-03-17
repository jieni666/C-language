#include<stdio.h>
#include<string.h>
int main(){
int strStr(char* haystack, char* needle) {
    int len=strlen(haystack);
    int len2=strlen(needle);
    
    if((len==0&&len2==0)||len2==0){
        return 0;
    }
    int count=0;
    int i=0;
    while(i<=len-len2){
        if(haystack[i+count]==needle[count]){
            if(count==(len2-1)){
                 return i;
             }
            ++count;
        }else{
            count=0;
            i++;
        }
    }
    return -1;
   

}
}

//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
