#include <stdio.h>
#include <math.h>

int main()
{
  float price, paid, remaining;
  // two variable for "kurus" because we will cut the edge for remainingKurus
  int total, changeKurus, remainingKurus;
  // for denominations i use separate count
  int count200Lira, count100Lira, count50Lira, count20Lira, count10Lira, count5Lira, count1Lira;
  int count50Kurus, count25Kurus, count10Kurus, count5Kurus, count1Kurus;

  // all intagers equaling to 0
  changeKurus = remainingKurus = remaining = count200Lira = count100Lira = count50Lira = count20Lira = count10Lira = count5Lira = count1Lira = count50Kurus = count25Kurus = count10Kurus = count5Kurus = count1Kurus = 0;

  // user inputs
  printf("Please enter the price: ");
  scanf("%f", &price);
  printf("Please enter the paid value: ");
  scanf("%f", &paid);

  remaining = paid - price;

  changeKurus = (int)round(remaining * 100);
  printf("Change to give: %d kurus\n", changeKurus);

  remainingKurus = changeKurus;

  // now time for cutting the edges
  count200Lira = remainingKurus / 20000;
  remainingKurus = remainingKurus % 20000;

  count100Lira = remainingKurus / 10000;
  remainingKurus = remainingKurus % 10000;

  count50Lira = remainingKurus / 5000;
  remainingKurus = remainingKurus % 5000;

  count20Lira = remainingKurus / 2000;
  remainingKurus = remainingKurus % 2000;

  // i wish i can use if or else

  count10Lira = remainingKurus / 1000;
  remainingKurus = remainingKurus % 1000;

  count5Lira = remainingKurus / 500;
  remainingKurus = remainingKurus % 500;

  count1Lira = remainingKurus / 100;
  remainingKurus = remainingKurus % 100;

  count50Kurus = remainingKurus / 50;
  remainingKurus = remainingKurus % 50;

  // or while

  count25Kurus = remainingKurus / 25;
  remainingKurus = remainingKurus % 25;

  count10Kurus = remainingKurus / 10;
  remainingKurus = remainingKurus % 10;

  count5Kurus = remainingKurus / 5;
  remainingKurus = remainingKurus % 5;

  count1Kurus = remainingKurus / 1;
  remainingKurus = remainingKurus % 1;

  // now its time for writing on the screen

  total = count200Lira + count100Lira + count50Lira + count20Lira + count10Lira + count5Lira + count1Lira + count50Kurus + count25Kurus + count10Kurus + count5Kurus + count1Kurus;
  printf("--------------------------");
  printf("\n200 TL => %d ", count200Lira);
  printf("\n100 TL => %d ", count100Lira);
  printf("\n50 TL => %d ", count50Lira);
  printf("\n20 TL => %d ", count20Lira);
  printf("\n10 TL => %d ", count10Lira);
  printf("\n5 TL => %d ", count5Lira);
  printf("\n1 TL => %d ", count1Lira);
  printf("\n50 Kurus => %d ", count50Kurus);
  printf("\n25 Kurus => %d ", count25Kurus);
  printf("\n10 Kurus => %d ", count10Kurus);
  printf("\n5 Kurus => %d ", count5Kurus);
  printf("\n1 Kurus => %d ", count1Kurus);
  printf("\n--------------------------");
  printf("\nTotal count: %d\n", total);
  printf("\n--------------------------");

  return 0;
}