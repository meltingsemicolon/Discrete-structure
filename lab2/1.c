// wap in c to implement basic set operators.
#include <stdio.h>

void inputSet(int set[], int n)
{
   printf("Enter element : ");
   for (int i = 0; i < n; i++)
   {

      scanf("%d", &set[i]);
   }
}
void displaySet(int set[], int n)
{
   printf("{ ");
   for (int i = 0; i < n; i++)
   {
      printf("%d ", set[i]);
   }
   printf("}");
}
void unionSet(int set1[], int n1, int set2[], int n2)
{
   int *Mergedset=malloc((n1 + n2) * sizeof(int));
     if (Mergedset == NULL) {
       // Handle malloc failure
       printf("Failed to allocate memory!\n");
       return;
   }
   int k=0;
   for (int i = 0; i < n1; i++)
   {
      Mergedset[k++] = set1[i];
   }

   for (int i = 0; i < n2; i++)
   {
      int found = 0;
      for (int j = 0; j < n1; j++)
      {
         if (set2[i] == set1[j])
         {
            found = 1;
            break;
         }
      }
      if (!found)
      {
         Mergedset[k++] = set2[i];
      }
   }
   displaySet(Mergedset, k);
}
void intersectSet(int set1[], int n1, int set2[], int n2)
{
   int intersectedSet[n1 + n2], k = 0;
   for (int i = 0; i < n1; i++)
   {
      for (int j = 0; j < n2; j++)
      {
         if (set1[i] == set2[j])
         {
            intersectedSet[k++] = set1[i];
            break;
         }
      }
   }
   displaySet(intersectedSet, k);
}
void differenceSet(int set1[], int n1, int set2[], int n2)
{
   int diffSet[n1 + n2], k = 0;
   for (int i = 0; i < n1; i++)
   {
      int found = 0;
      for (int j = 0; j < n2; j++)
      {
         if (set1[i] == set2[j])
         {
            found = 1;
            break;
         }
      }
      if (!found)
      {
         diffSet[k++] = set1[i];
      }
   }

   displaySet(diffSet, k);
}

int main()
{
   int x, y;
   printf("Enter the number of elements of both sets :\n");
   scanf("%d%d", &x, &y);
   int setA[x], setB[y];
   inputSet(setA, x);
   inputSet(setB, y);
   printf("Set A: ");
   displaySet(setA, x);
   printf("\tSet B:");
   displaySet(setB, y);

   printf("\nUnion of set 1 ands set 2: ");
   unionSet(setA, x, setB, y);
   printf("\nIntersection of Set 1 and Set 2: ");
   intersectSet(setA, x, setB, y);

   printf("\nDifference of Set 1 and Set 2: ");
   differenceSet(setA, x, setB, y);
   printf("\nDifference of Set 2 and Set 1: ");
   differenceSet(setB, y, setA, x);
}
