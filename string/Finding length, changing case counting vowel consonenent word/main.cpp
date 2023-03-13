/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{     
    //taking string as input
    
    
    // for on word
    
    // char s[20];
    // cout<<"enter your name";
    // cin>>s;
    // cout<<s;
    
    
    
    //multiple word or online
    
    // char s[50];
    // cout<<"enter your name: ";
    // // cin.get(s,50);
    
    // cin.getline(s,50);
    // cout<<s; 
      
      
      
    
    // how to finf length of string 

    // char a[]="welcome to my blog";
    // int i;
    // for(i=0;a[i]!='\0';i++){
        
    // }
    //cout<<i;
    
    
    //canging upper case to lower
    
    // char a[]="WELCOME TO MY VLOG GUYS";
    // int i;
    // for(i=0;a[i]!='\0';i++){
    //   if(a[i]>=65 && a[i]<90){
    //       a[i]=a[i]+32;
    //   }  
    // }cout<<a;
    
    
    //changing lower case to upper
    
    // char a[]="welcome to my vlog gyuys";
    // int i;
    // for(i=0;a[i]!='\0';i++){
    //   if(a[i]>=97 && a[i]<122){
    //       a[i]=a[i]-32;
    //   }  
    // }cout<<a;
    
    
    // toggeling string if character is in lower case then change it to upper case
    //if character is an upper case then change it to lower case
    
    // char a[]="wElCome tO My Vlog gyuys";
    // int i;
    // for(i=0;a[i]!='\0';i++){
    //   if(a[i]>=97 && a[i]<122){
    //       a[i]=a[i]-32;
    //   } else if(a[i]>=65 && a[i]<90){
    //       a[i]=a[i]+32;
    //   } 
    // }cout<<a;
    
    
    // counting vowel and consonent and world from string
    
    // char a[]="welcome to my vlog gyuys";
    // int i;
    // int vCount=0;
    // int cCount=0;
    // int wCount=1;
   
    // for(i=0;a[i]!='\0';i++){
    //     if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122){
    //         if(a[i]=='a' || a[i]=='A' ||a[i]=='i' || a[i]=='I'|| a[i]=='O' || a[i]=='o'|| a[i]=='U' || a[i]=='u' || a[i]=='e' || a[i]=='E' ){
    //           vCount++; 
    //         }else{
    //             cCount++;
    //         }
    //     }else if(a[i]==' '){
    //         wCount++;
    //     }
    // }
    
    // cout<<"in this String "<<endl<<"vowel is "<<vCount<<endl<<"consonent is "<<cCount<<endl<<"word is "<<wCount<<endl;
    
    
    
    //when string has multiple spaces or White spaces
    
     char a[]="welcome to my    vlog           gyuys";
     int i;
     int vCount=0;
     int cCount=0;
     int wCount=1;
   
     for(i=0;a[i]!='\0';i++){
         if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122){
             if(a[i]=='a' || a[i]=='A' ||a[i]=='i' || a[i]=='I'|| a[i]=='O' || a[i]=='o'|| a[i]=='U' || a[i]=='u' || a[i]=='e' || a[i]=='E' ){
               vCount++; 
             }else{
                 cCount++;
             }
         }else if(a[i]==' ' && a[i-1]!=' '){
             wCount++;
         }
     }
    
     cout<<"in this String " <<endl<<"vowel is "<<vCount<<endl<<"consonent is "<<cCount<<endl<<"word is "<<wCount<<endl;
    
    
   
    
    
    
    

    return 0;
}
