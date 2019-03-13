int main()
{
 int a[N],b[N]={1,1,1,1,1,1,1,1,1,1};
 int i,j,k;
 char c;
 for(i=0;i<N;i++)
     {scanf("%d",&a[i]);
      for(j=0;j<i;j++)
         {if(a[i]==a[j])
             b[j]+=1;
         }

     }
 for(j=0;j<N;j++)
    {if(b[j]!=1)
        break;
    }
 if(j==N)
    printf("No");
 else
 {for(k=N;k>0;k--)
     {for(j=0;j<N;j++)
 {if(k<=b[j])
             {printf("众数是%d,出现的次数是%d\n",a[j],b[j]);
      c='Y';
             }
         }
      if(c=='Y')
         break;
     }
 }
 return 0;
}
