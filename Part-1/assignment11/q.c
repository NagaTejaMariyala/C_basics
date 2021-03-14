/* Program to implement queues */
// By M Naga Teja on 14-09-2018

#include"mine.h"

void main()
{
    int q[N],f=-1,r=-1,o,k;

    while(1)
    {
        printf("Select the operation:\n1.Enqueue\n2.Dequeue\n3.Isqueueempty\n4.Isqueuefull\n5.Initialize\n6.Print\n7.Exit\n");
        scanf("%d",&o);

        switch (o)
        {
            case 1 :
                      printf("Enter the value:\n");
                      scanf("%d",&k);
                      cenq(q,&f,&r,k);
                      break;
            case 2 :
                      k=cdeq(q,&f,&r);
                      printf("The value is %d\n",k);
                      break;
            case 3 : 
                      k=isemptycq(q,&f,&r);
                      if (!k)
                          printf("No\n");
                      else
                          printf("Yes\n");
                      break;
            case 4 :
                      k=iscqfull(q,&f,&r);
                      if (!k)
                          printf("No\n");
                      else
                          printf("Yes\n");
                      break;
            case 5 :
                      cqin(&f,&r);
                      break;
            case 6 :
                      prtcq(q,f,r);
                      break;
        }

        if (o==7)
            break;
    }
}

