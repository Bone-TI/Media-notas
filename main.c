#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
float media,mat[3][3];
for(j=0;j<3;j++)
{
    printf("\nNotas do aluno %d\n",i+1);
    scanf("%f",%mat[i][j]);
}
for(j=0;i<3;i++)
{
    media = media +mat[i][j];
}
  media = media/3;
  if(media>=6=&&media <=100)
  {
      printf("Aprovado");
      }
else
{
    if(media>=0 && media <60)
    {
        printf("Reprovado.");
    }
  }

}
return 0;
}
