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
  printf("Change: %d kurus\n", changeKurus);

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

  // glad to have if and else

  count10Lira = remainingKurus / 1000;
  remainingKurus = remainingKurus % 1000;

  return 0;
}