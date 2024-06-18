/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  long int i, j, f[1000], r[1000], c = 0, n, k, a = 0,l=0;
  scanf ("%ld", &n);
  f[0] = 1;
  for (i = 1; i <= n; i++)
    {
        c=0;
        for(j=0;j<=l;j++){
            f[j]=(i*f[j]+c);
            c=f[j]/10;
            f[j]=f[j]%10;
            printf("%ld ",c);
        }
      if (c != 0)
	{
	    f[l++]=c;
	}
	  /*while (c != 0 && j<=a)
	    {
	        f[j]=c+(f[j]*i);
	      k = f[j]% 10;
	      c = f[j] / 10;
	      f[j++] = k;
	    }
	    if(c!=0){
	        f[j]=c;
	        a++;
	    }
         //a++;
	}
      else
	{
	  k = (f[a] * i) % 10;
	  c = (i * f[a]) / 10;
	  f[a] = k;
	}*/
    }
  //printf("hi");
  for (i = l; i >= 0; i--)
    printf ("%ld", f[i]);

  return 0;
}

