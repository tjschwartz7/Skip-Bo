#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define STASHSIZE 15
#define HANDSIZE 5
#define SIZE 20

void initializedeck(int deck[]);
int initializeP1(int deck[], int p1[], int deckdown);
int initializeP2(int deck[], int p2[], int deckdown);
int initializeP1stash(int deck[], int p1[], int deckdown);
int initializeP2stash(int deck[], int p1[], int deckdown);
void cardtransform(int hand[], char text1[], int number);
void cardtransform2(char text1[], int number);
void game();



int main()
{
	char input[SIZE];
	printf("Play a round of Skip-Bo?\n");
	printf("YES or NO: \n");
	scanf("%s", input);
	if (strcmp(input, "YES") == 0)
	{
		game();
	}





}


void initializedeck(int deck[])
{
	srand(time(NULL));
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0; 
	int seven = 0, eight = 0, nine = 0, ten = 0, eleven = 0, twelve = 0, thirteen = 0;
	int wh = 0;
	for (int a = 0; a < 162; a++)
	{
		wh = 0;
		while (wh != 1) 
		{
			
			deck[a] = rand() % 13 + 1;
			if (deck[a] == 1) one++;
			else if (deck[a] == 2) two++;
			else if (deck[a] == 3) three++;
			else if (deck[a] == 4) four++;
			else if (deck[a] == 5) five++;
			else if (deck[a] == 6) six++;
			else if (deck[a] == 7) seven++;
			else if (deck[a] == 8) eight++;
			else if (deck[a] == 9) nine++;
			else if (deck[a] == 10)ten++;
			else if (deck[a] == 11) eleven++;
			else if (deck[a] == 12)twelve++;
			else thirteen++;

			if (one >= 12) wh = 1;
			else if (two >= 12) wh = 1;
			else if (three >= 12) wh = 1;
			else if (three >= 12) wh = 1;
			else if (four >= 12) wh = 1;
			else if (five >= 12) wh = 1;
			else if (six >= 12) wh = 1;
			else if (seven >= 12) wh = 1;
			else if (eight >= 12) wh = 1;
			else if (nine >= 12) wh = 1;
			else if (ten >= 12) wh = 1;
			else if (eleven >= 12) wh = 1;
			else if (twelve >= 12) wh = 1;
			else if (thirteen >= 12) wh = 1;
		}
	
	}

}
int initializeP1(int deck[], int p1[], int deckdown)
{
	for (int b = 0; b < HANDSIZE; b++)
	{
		if (p1[b] == 0)
		{
			p1[b] = deck[162 - deckdown];
			deckdown++;
		}
	}
	return deckdown;
}

int initializeP2(int deck[], int p2[], int deckdown)
{
	for (int b = 0; b < HANDSIZE; b++)
	{
		if (p2[b] == 0)
		{
			p2[b] = deck[162 - deckdown];
			deckdown++;
		}
	}
	return deckdown;
}

int initializeP1stash(int deck[], int p1[], int deckdown)
{
	for (int b = 0; b < STASHSIZE; b++)
	{

			p1[b] = deck[162 - deckdown];
			deckdown++;
	}
	return deckdown;

}


int initializeP2stash(int deck[], int p2[], int deckdown)
{
	for (int b = 0; b < STASHSIZE; b++)
	{
			p2[b] = deck[162 - deckdown];
			deckdown++;
		
	}
	return deckdown;

}

void cardtransform(int hand[], char text1[], int number)
{
	
		
	if (hand[number] == 1) strcpy(text1, "ONE");
	else if (hand[number] == 2) strcpy(text1, "TWO");
	else if (hand[number] == 3) strcpy(text1, "THREE");
	else if (hand[number] == 4) strcpy(text1, "FOUR");
	else if (hand[number] == 5) strcpy(text1, "FIVE");
	else if (hand[number] == 6) strcpy(text1, "SIX");
	else if (hand[number] == 7) strcpy(text1, "SEVEN");
	else if (hand[number] == 8) strcpy(text1, "EIGHT");
	else if (hand[number] == 9) strcpy(text1, "NINE");
	else if (hand[number] == 10) strcpy(text1, "TEN");
	else if (hand[number] == 11) strcpy(text1, "ELEVEN");
	else if (hand[number] == 12) strcpy(text1, "TWELVE");
	else if (hand[number] == 13) strcpy(text1, "SKIP-BO");
	else if (hand[number] == 0) strcpy(text1, "N/A");
	

	
}
void cardtransform2(char text1[], int number)
{


	if(number == 1) strcpy(text1, "ONE");
	else if (number == 2) strcpy(text1, "TWO");
	else if (number == 3) strcpy(text1, "THREE");
	else if (number == 4) strcpy(text1, "FOUR");
	else if (number == 5) strcpy(text1, "FIVE");
	else if (number == 6) strcpy(text1, "SIX");
	else if (number == 7) strcpy(text1, "SEVEN");
	else if (number == 8) strcpy(text1, "EIGHT");
	else if (number == 9) strcpy(text1, "NINE");
	else if (number == 10) strcpy(text1, "TEN");
	else if (number == 11) strcpy(text1, "ELEVEN");
	else if (number == 12) strcpy(text1, "TWELVE");
	else if (number == 13) strcpy(text1, "SKIP-BO");
	else if (number == 0) strcpy(text1, "N/A");



}

/*int discard1(int pile[], int discard1, int newcard)
{
	pile[discard1] = newcard;
}*/


void game()
{
	int stash1 = 1;
	int stash2 = 1;
	int stash3 = 1;
	int deckcounter = 1;
	int deck[162];
	int p1[5];
	int p2[5];
	int p3[5];
	int p1stash[STASHSIZE];
	int p2stash[STASHSIZE];
    int	p3stash[STASHSIZE];
	int gamestatus = 0;
	int spot1 = 0, spot2 = 0, spot3 = 0, spot4 = 0;
	int dis1 = 0, dis2 = 0, dis3 = 0, dis4 = 0;
	int dispile1[100], dispile2[100], dispile3[100], dispile4[100];
	int dis5 = 0, dis6 = 0, dis7= 0, dis8 = 0;
	int dispile5[100], dispile6[100], dispile7[100], dispile8[100];
	int dis9 = 0, dis10 = 0, dis11 = 0, dis12 = 0;
	int dispile9[100], dispile10[100], dispile11[100], dispile12[100];
	dispile1[dis1] = 0;
	dispile2[dis2] = 0;
	dispile3[dis3] = 0;
	dispile4[dis4] = 0;
	dispile5[dis5] = 0;
	dispile6[dis6] = 0;
	dispile7[dis7] = 0;
	dispile8[dis8] = 0;
	dispile9[dis9] = 0;
	dispile10[dis10] = 0;
	dispile11[dis11] = 0;
	dispile12[dis12] = 0;
	char input[SIZE], card1[SIZE], card2[SIZE], card3[SIZE], card4[SIZE], card5[SIZE], cardstash[SIZE];
	int in;
	int check = 0;
	int cardvalue;
	int d;
	initializedeck(deck);
	deckcounter = initializeP1stash(deck, p1stash, deckcounter);
	deckcounter = initializeP2stash(deck, p2stash, deckcounter);
	deckcounter = initializeP1stash(deck, p3stash, deckcounter);
	char cardstash2[SIZE];
	char cardstash3[SIZE];
	for (int d = 0; d < HANDSIZE; d++)
	{
		p1[d] = 0;
		p2[d] = 0;
	}
	while (gamestatus != 1)
	{
		check = 0;
		deckcounter = initializeP1(deck, p1, deckcounter);
		deckcounter = initializeP2(deck, p2, deckcounter);
		deckcounter = initializeP1(deck, p3, deckcounter);
		//you
		while (check != 1)
		{
			//printf("Opponent discard pile: %d %d %d %d\n", dispile5[dis5], dispile6[dis6], dispile7[dis7], dispile8[dis8]);
			//printf("Opponent hand: %d %d %d %d %d\n", p2[0], p2[1], p2[2], p2[3], p2[4]);
			cardtransform(p1, card1, 0);
			cardtransform(p1, card2, 1);
			cardtransform(p1, card3, 2);
			cardtransform(p1, card4, 3);
			cardtransform(p1, card5, 4);
			cardtransform(p1stash, cardstash, STASHSIZE - stash1);
			cardtransform(p2stash, cardstash2, STASHSIZE - stash2);
			cardtransform(p3stash, cardstash3, STASHSIZE - stash3);
			printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
			printf("The board:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", spot1, spot2, spot3, spot4);
			printf("Top card of your stash: %s\n", cardstash);
			printf("Your discard pile:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
			printf("You have %d cards left in your stash.\n", STASHSIZE - stash1 + 1);
			printf("Top card of player 2's stash: %s\n", cardstash2);
			printf("Player 2 Discard Piles:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", dispile5[dis5], dispile6[dis6], dispile7[dis7], dispile8[dis8]);
			printf("Player 2 has %d cards left.\n", STASHSIZE - stash2 + 1);
			printf("Top card of player 3's stash: %s\n", cardstash3);
			printf("Player 3 Discard Piles:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", dispile9[dis9], dispile10[dis10], dispile11[dis11], dispile12[dis12]);
			printf("Player 3 has %d cards left.\n", STASHSIZE - stash3 + 1);
			printf("Would you like to place a card on the table?\n");
		
			printf("Spot 1(1) Spot 2(2) Spot 3(3) Spot 4(4) or discard(5): \n");
			scanf("%d", &in);
			if (in == 1)
			{
				
				printf("\n\nYour hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 11 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				printf("Discard pile 1(7): %d\nDiscard pile 2(8): %d\nDiscard pile 3(9): %d\nDiscard pile 4(10): %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Which card would you like to place here?\n");
				scanf("%d", &in);
				if (in == 1)
				{
					cardvalue = p1[0];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++;  p1[0] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p1[0] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p1[0] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p1[0] = 0; }
					
					
				
				}
				else if (in == 2)
				{
					cardvalue = p1[1];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p1[1] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p1[1] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p1[1] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p1[1] = 0; }
					
				}
				else if (in == 3)
				{
					cardvalue = p1[2];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p1[2] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0;	p1[2] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p1[2] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p1[2] = 0; }
					
				
				}
				else if (in == 4)
				{
					cardvalue = p1[3];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p1[3] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p1[3] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p1[3] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p1[3] = 0; }
					
				
				}
				else if (in == 5)
				{
					cardvalue = p1[4];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p1[4] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p1[4] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p1[4] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p1[4] = 0; }

				
				}
				else if (in == 6)
				{
					cardvalue = p1stash[STASHSIZE - stash1];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; stash1++; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; stash1++; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  stash1++; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	stash1++; }
					
				
				}
				else if (in == 7)
				{
					cardvalue = dispile1[dis1];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dispile1[dis1] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; dispile1[dis1] = 0;}
					dis1--;
				}
				else if (in == 8)
				{
					cardvalue = dispile2[dis2];
						if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dispile2[dis2] = 0; }
						else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dispile2[dis2] = 0; }
						else if (cardvalue == 13 && spot1 != 11) { spot1++;  dispile2[dis2] = 0; }
						else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dispile2[dis2] = 0; }
						dis2--;
				}
				else if (in == 9)
				{
					cardvalue = dispile3[dis3];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dispile3[dis3] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dispile3[dis3] = 0;}
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dispile3[dis3] = 0;}
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dispile3[dis3] = 0; }
					dis3--;
				}
				else if (in == 10)
				{
					cardvalue = dispile4[dis4];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dispile4[dis4] = 0;}
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dispile4[dis4] = 0;}
					dis4--;
				}
			}
			else if (in == 2)
			{
			
				printf("\n\nYour hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 11 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				printf("Discard pile 1(7): %d\nDiscard pile 2(8): %d\nDiscard pile 3(9): %d\nDiscard pile 4(10): %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Which card would you like to place here?\n");
				scanf("%d", &in);
				if (in == 1)
				{
					cardvalue = p1[0];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p1[0] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p1[0] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p1[0] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p1[0] = 0; }

					
				}
				else if (in == 2)
				{
					cardvalue = p1[1];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p1[1] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p1[1] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p1[1] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p1[1] = 0; }
			
				}
				else if (in == 3)
				{
					cardvalue = p1[2];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; 	p1[2] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; 	p1[2] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p1[2] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p1[2] = 0; }

				
				}
				else if (in == 4)
				{
					cardvalue = p1[3];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p1[3] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p1[3] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p1[3] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p1[3] = 0; }

				
				}
				else if (in == 5)
				{
					cardvalue = p1[4];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p1[4] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p1[4] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p1[4] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p1[4] = 0; }

					
				}
				else if (in == 6)
				{
					cardvalue = p1stash[STASHSIZE - stash1];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; stash1++; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; stash1++; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  stash1++; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	stash1++; }
					
				}
				else if (in == 7)
				{
					cardvalue = dispile1[dis1];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dispile1[dis1] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dispile1[dis1] = 0;}
					dis1--;
				}
				else if (in == 8)
				{
					cardvalue = dispile2[dis2];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dispile2[dis2] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dispile2[dis2] = 0;}
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dispile2[dis2] = 0;}
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dispile2[dis2] = 0;}
					dis2--;
				}
				else if (in == 9)
				{
					cardvalue = dispile3[dis3];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dispile3[dis3] = 0;}
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dispile3[dis3] = 0;}
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dispile3[dis3] = 0;}
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dispile3[dis3] = 0;}
					dis3--;
				}
				else if (in == 10)
				{
					cardvalue = dispile4[dis4];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dispile4[dis4] = 0;}
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dispile4[dis4] = 0;}
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dispile4[dis4] = 0;}
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dispile4[dis4] = 0;}
					dis4--;
				}
			}
			else if (in == 3)
			{
			//turn 12s to elevens
				
				printf("\n\nYour hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 11 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				printf("Discard pile 1(7): %d\nDiscard pile 2(8): %d\nDiscard pile 3(9): %d\nDiscard pile 4(10): %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Which card would you like to place here?\n");
				scanf("%d", &in);
				if (in == 1)
				{
					cardvalue = p1[0];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p1[0] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p1[0] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p1[0] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p1[0] = 0; }

					
				}
				else if (in == 2)
				{
					cardvalue = p1[1];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p1[1] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p1[1] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p1[1] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p1[1] = 0; }

				
				}
				else if (in == 3)
				{
					cardvalue = p1[2];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p1[2] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p1[2] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p1[2] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p1[2] = 0; }

				}
				else if (in == 4)
				{
					cardvalue = p1[3];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p1[3] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p1[3] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p1[3] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p1[3] = 0; }

				
				}
				else if (in == 5)
				{
					cardvalue = p1[4];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p1[4] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p1[4] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p1[4] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p1[4] = 0; }

					
				}
				else if (in == 6)
				{
					cardvalue = p1stash[STASHSIZE - stash1];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	stash1++; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	stash1++; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  stash1++; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	stash1++; }
				}
				else if (in == 7)
				{
					cardvalue = dispile1[dis1];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dispile1[dis1] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dispile1[dis1] = 0;}
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dispile1[dis1] = 0;}
					dis1--;
				}
				else if (in == 8)
				{
					cardvalue = dispile2[dis2];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dispile2[dis2] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dispile2[dis2] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dispile2[dis2] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dispile2[dis2] = 0; }
					dis2--;
				}
				else if (in == 9)
				{
					cardvalue = dispile3[dis3];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dispile3[dis3] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dispile3[dis3] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dispile3[dis3] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dispile3[dis3] = 0; }
					dis3--;
				}
				else if (in == 10)
				{
					cardvalue = dispile4[dis4];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dispile4[dis4] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dispile4[dis4] = 0; }
					dis4--;
				}
			}
			else if (in == 4)
			{
				
				printf("\n\nYour hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 11 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				printf("Discard pile 1(7): %d\nDiscard pile 2(8): %d\nDiscard pile 3(9): %d\nDiscard pile 4(10): %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Which card would you like to place here?\n");
				scanf("%d", &in);
				if (in == 1)
				{
					cardvalue = p1[0];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p1[0] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p1[0] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p1[0] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p1[0] = 0; }

					
				}
				else if (in == 2)
				{
					cardvalue = p1[1];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++;	p1[1] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0;	p1[1] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p1[1] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p1[1] = 0; }


				
				}
				else if (in == 3)
				{
					cardvalue = p1[2];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++;	p1[2] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	p1[2] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p1[2] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p1[2] = 0; }

				
				}
				else if (in == 4)
				{
					cardvalue = p1[3];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p1[3] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p1[3] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p1[3] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p1[3] = 0; }

					
				}
				else if (in == 5)
				{
					cardvalue = p1[4];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p1[4] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p1[4] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p1[4] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p1[4] = 0; }

					
				}
				else if (in == 6)
				{
					cardvalue = p1stash[STASHSIZE - stash1];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; stash1++; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; stash1++; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  stash1++; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	stash1++; }
					
				}
				else if (in == 7)
				{
					cardvalue = dispile1[dis1];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dispile1[dis1] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dispile1[dis1] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dispile1[dis1] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dispile1[dis1] = 0; }
					dis1--;
				}
				else if (in == 8)
				{
					cardvalue = dispile2[dis2];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dispile2[dis2] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dispile2[dis2] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dispile2[dis2] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dispile2[dis2] = 0; }
					dis2--;
				}
				else if (in == 9)
				{
					cardvalue = dispile3[dis3];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dispile3[dis3] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dispile3[dis3] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dispile3[dis3] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dispile3[dis3] = 0; }
					dis3--;
				}
				else if (in == 10)
				{
					cardvalue = dispile4[dis4];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dispile4[dis4] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dispile4[dis4] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dispile4[dis4] = 0; }
					dis4--;
				}
			}
			else
			{
				printf("Your discard piles:\nCard 1: %d\nCard 2: %d\nCard 3: %d\nCard 4: %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
				in = 6;
				while (in == 6) 
				{
				printf("Which discard pile will you use?\n");
				scanf("%d", &d);
				printf("Discard which card? Press 6 to go back.\n");
				scanf("%d", &in);
			    }
					if (d == 1)
					{
						if (in == 1)
						{
							dis1++;
							dispile1[dis1] = p1[0];
							

							p1[0] = 0;
						}
						else if (in == 2)
						{
							dis1++;
							dispile1[dis1] = p1[1];
						

							p1[1] = 0;
						}
						else if (in == 3)
						{
							dis1++;
							dispile1[dis1] = p1[2];
							

							p1[2] = 0;
						}
						else if (in == 4)
						{
							dis1++;
							dispile1[dis1] = p1[3];
						

							p1[3] = 0;
						}
						else if (in == 5)
						{
							dis1++;
							dispile1[dis1] = p1[4];


							p1[4] = 0;
						}
					}
					else if(d == 2)
					{
						if (in == 1)
						{
							dis2++;
							dispile2[dis2] = p1[0];
						

							p1[0] = 0;
						}
						else if (in == 2)
						{
							dis2++;
							dispile2[dis2] = p1[1];
							
							p1[1] = 0;

						}
						else if (in == 3)
						{
							dis2++;
							dispile2[dis2] = p1[2];
							

							p1[2] = 0;
						}
						else if (in == 4)
						{
							dis2++;
							dispile2[dis2] = p1[3];
					

							p1[3] = 0;


						}
						else if (in == 5)
						{
							dis2++;
							dispile2[dis2] = p1[4];
							

							p1[4] = 0;
						}
				
						
					}
					else if (d == 3)
					{

						if (in == 1)
						{
							dis3++;
							dispile3[dis3] = p1[0];
						

							p1[0] = 0;
						}
						else if (in == 2)
						{
							dis3++;
							dispile3[dis3] = p1[1];
						

							p1[1] = 0;
						}
						else if (in == 3)
						{
							dis3++;
							dispile3[dis3] = p1[2];
						

							p1[2] = 0;
						}
						else if (in == 4)
						{
							dis3++;
							dispile3[dis3] = p1[3];
							

							p1[3] = 0;
						}
						else if (in == 5)
						{
							dis3++;
							dispile3[dis3] = p1[4];


							p1[4] = 0;
						}
					
					}
					else if(d == 4)
					{
						if (in == 1)
						{
							dis4++;
							dispile4[dis4] = p1[0];
							
							p1[0] = 0;
						}
						else if (in == 2)
						{
							dis4++;
							dispile4[dis4] = p1[1];
						
							p1[1] = 0;
						}
						else if (in == 3)
						{
							dis4++;
							dispile4[dis4] = p1[2];
							
							p1[2] = 0;
						}
						else if (in == 4)
						{
							dis4++;
							dispile4[dis4] = p1[3];
							
							p1[3] = 0;
						}
						else if (in == 5)
						{
							dis4++;
							dispile4[dis4] = p1[4];

							p1[4] = 0;
						}
					}
				
					check = 1;

            }
		
			if (p1[0] == 0 && p1[1] == 0 && p1[2] == 0 && p1[3] == 0 && p1[4] == 0)
			{
				deckcounter = initializeP1(deck, p1, deckcounter);
			}
		}
	
		check = 0;



		
	//player 2
		printf("Player 2:\n");
		while (check != 1)
		{
			/*printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
			printf("The board:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", spot1, spot2, spot3, spot4);
			printf("Your discard pile:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", dispile1[dis1 - 1], dispile2[dis2 - 1], dispile3[dis3 - 1], dispile4[dis4 - 1]);
			printf("Top card of your stash: %s\n", cardstash);
			printf("Would you like to place a card on the table?\n");

			printf("Spot 1(1) Spot 2(2) Spot 3(3) Spot 4(4) or discard(5): \n");
			scanf("%d", &in);*/
			if (p2stash[STASHSIZE - stash2] == spot1 + 1 || p2stash[STASHSIZE - stash2] == 13) in = 1;
			else if (p2stash[STASHSIZE - stash2] > spot2 && p2stash[STASHSIZE - stash2] < spot2 + 2 || p2stash[STASHSIZE - stash2] == 13) in = 2;
			else if (p2stash[STASHSIZE - stash2] > spot3 && p2stash[STASHSIZE - stash2] < spot3 + 2 || p2stash[STASHSIZE - stash2] == 13) in = 3;
			else if (p2stash[STASHSIZE - stash2] > spot4 && p2stash[STASHSIZE - stash2] < spot4 + 2 || p2stash[STASHSIZE - stash2] == 13) in = 4;
			else if (p2[0] > spot1 && p2[0] < spot1 + 2 || p2[0] == 13) in = 1;
			else if (p2[1] > spot1 && p2[1] < spot1 + 2 || p2[1] == 13) in = 1;
			else if (p2[2] > spot1 && p2[2] < spot1 + 2 || p2[2] == 13) in = 1;
			else if (p2[3] > spot1 && p2[3] < spot1 + 2 || p2[3] == 13) in = 1;
			else if (p2[4] > spot1 && p2[4] < spot1 + 2 || p2[4] == 13)in = 1;
			/*New Line*/else if (p2[0] > spot2 && p2[0] < spot2 + 2 || p2[0] == 13) in = 2;
			else if (p2[1] > spot2 && p2[1] < spot2 + 2 || p2[1] == 13) in = 2;
			else if (p2[2] > spot2 && p2[2] < spot2 + 2 || p2[2] == 13) in = 2;
			else if (p2[3] > spot2 && p2[3] < spot2 + 2 || p2[3] == 13) in = 2;
			else if (p2[4] > spot2 && p2[4] < spot2 + 2 || p2[4] == 13)in = 2;
			/*New Line*/else if (p2[0] > spot3 && p2[0] < spot3 + 2 || p2[0] == 13) in = 3;
			else if (p2[1] > spot3 && p2[1] < spot3 + 2 || p2[1] == 13) in = 3;
			else if (p2[2] > spot3 && p2[2] < spot3 + 2 || p2[2] == 13) in = 3;
			else if (p2[3] > spot3 && p2[3] < spot3 + 2 || p2[3] == 13) in = 3;
			else if (p2[4] > spot3 && p2[4] < spot3 + 2 || p2[4] == 13)in = 3;
			/*New Line*/else if (p2[0] > spot4 && p2[0] < spot4 + 2 || p2[0] == 13) in = 4;
			else if (p2[1] > spot4 && p2[1] < spot4 + 2 || p2[1] == 13) in = 4;
			else if (p2[2] > spot4 && p2[2] < spot4 + 2 || p2[2] == 13) in = 4;
			else if (p2[3] > spot4 && p2[3] < spot4 + 2 || p2[3] == 13) in = 4;
			else if (p2[4] > spot4 && p2[4] < spot4 + 2 || p2[4] == 13)in = 4;
			else if (dispile5[dis5] == spot1 + 1) in = 1;
			else if (dispile6[dis6] == spot1 + 1) in = 1;
			else if (dispile7[dis7] == spot1 + 1) in = 1;
			else if (dispile8[dis8] == spot1 + 1) in = 1;
			else if (dispile5[dis5] == spot2 + 1) in = 2;
			else if (dispile6[dis6] == spot2 + 1) in = 2;
			else if (dispile7[dis7] == spot2 + 1) in = 2;
			else if (dispile8[dis8] == spot2 + 1) in = 2;
			else if (dispile5[dis5] == spot3 + 1) in = 3;
			else if (dispile6[dis6] == spot3 + 1) in = 3;
			else if (dispile7[dis7] == spot3 + 1) in = 3;
			else if (dispile8[dis8] == spot3 + 1) in = 3;
			else if (dispile5[dis5] == spot4 + 1) in = 4;
			else if (dispile6[dis6] == spot4 + 1) in = 4;
			else if (dispile7[dis7] == spot4 + 1) in = 4;
			else if (dispile8[dis8] == spot4 + 1) in = 4;
			else in = 5;
			
			
			if (in == 1)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p2stash[STASHSIZE - stash2] > spot1 && p2stash[STASHSIZE - stash2] < spot1 + 2 || p2stash[STASHSIZE - stash2] == 13)in = 6;
				else if (p2[0] > spot1 && p2[0] < spot1 + 2 || p2[0] == 13)in = 1;
				else if (p2[1] > spot1 && p2[1] < spot1 + 2 || p2[1] == 13)in = 2;
				else if (p2[2] > spot1 && p2[2] < spot1 + 2 || p2[2] == 13)in = 3;
				else if (p2[3] > spot1 && p2[3] < spot1 + 2 || p2[3] == 13)in = 4;
				else if (p2[4] > spot1 && p2[4] < spot1 + 2 || p2[4] == 13)in = 5;
				else if (dispile5[dis5] == spot1 + 1) in = 7;
				else if (dispile6[dis6] == spot1 + 1) in = 8;
				else if (dispile7[dis7] == spot1 + 1) in = 9;
				else if (dispile8[dis8] == spot1 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p2[0];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++;  p2[0] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p2[0] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p2[0] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p2[0] = 0; }



				}
				else if (in == 2)
				{
					cardvalue = p2[1];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p2[1] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p2[1] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p2[1] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p2[1] = 0; }
			
				}
				else if (in == 3)
				{
					cardvalue = p2[2];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p2[2] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0;	p2[2] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p2[2] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p2[2] = 0; }


				}
				else if (in == 4)
				{
					cardvalue = p2[3];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p2[3] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p2[3] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p2[3] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p2[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p2[4];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p2[4] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p2[4] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p2[4] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p2[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p2stash[STASHSIZE - stash2];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; stash2++; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; stash2++; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  stash2++; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	stash2++; }


				}
				else if (in == 7)
				{
					cardvalue = dispile5[dis5];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis5--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis5--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis5--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis5--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile6[dis6];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis6--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis6--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis6--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis6--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile7[dis7];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis7--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis7--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis7--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis7--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile8[dis8];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis8--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis8--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis8--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis8--; }
				}

				cardtransform2(cardstash2, cardvalue);
				printf("Player 2 played a %s\n", cardstash2);
			}
			else if (in == 2)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p2stash[STASHSIZE - stash2] > spot2 && p2stash[STASHSIZE - stash2] < spot2 + 2 || p2stash[STASHSIZE - stash2] == 13) in = 6;
				else if (p2[0] > spot2 && p2[0] < spot2 + 2 || p2[0] == 13)in = 1;
				else if (p2[1] > spot2 && p2[1] < spot2 + 2 || p2[1] == 13)in = 2;
				else if (p2[2] > spot2 && p2[2] < spot2 + 2 || p2[2] == 13)in = 3;
				else if (p2[3] > spot2 && p2[3] < spot2 + 2 || p2[3] == 13)in = 4;
				else if (p2[4] > spot2 && p2[4] < spot2 + 2 || p2[4] == 13)in = 5;
				else if (dispile5[dis5] == spot2 + 1) in = 7;
				else if (dispile6[dis6] == spot2 + 1) in = 8;
				else if (dispile7[dis7] == spot2 + 1) in = 9;
				else if (dispile8[dis8] == spot2 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p2[0];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p2[0] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p2[0] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p2[0] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p2[0] = 0; }


				}
				else if (in == 2)
				{
					cardvalue = p2[1];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p2[1] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p2[1] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p2[1] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p2[1] = 0; }


				}
				else if (in == 3)
				{
					cardvalue = p2[2];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; 	p2[2] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; 	p2[2] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p2[2] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p2[2] = 0; }


				}
				else if (in == 4)
				{
					cardvalue = p2[3];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p2[3] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p2[3] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p2[3] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p2[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p2[4];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p2[4] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p2[4] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p2[4] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p2[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p2stash[STASHSIZE - stash2];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 1) { spot2++; stash2++; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; stash2++; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++; stash2++; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	stash2++; }

				}
				else if (in == 7)
				{
					cardvalue = dispile5[dis5];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis5--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis5--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis5--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis5--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile6[dis6];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis6--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis6--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis6--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis6--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile7[dis7];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis7--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis7--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis7--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis7--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile8[dis8];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis8--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis8--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis8--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis8--; }
				}
				cardtransform2(cardstash2, cardvalue);
				printf("Player 2 played a %s\n", cardstash2);
			}
			else if (in == 3)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p2stash[STASHSIZE - stash2] > spot3 && p2stash[STASHSIZE - stash2] < spot3 + 2 || p2stash[STASHSIZE - stash2] == 13)in = 6;
				else if (p2[0] > spot3 && p2[0] < spot3 + 2 || p2[0] == 13)in = 1;
				else if (p2[1] > spot3 && p2[1] < spot3 + 2 || p2[1] == 13)in = 2;
				else if (p2[2] > spot3 && p2[2] < spot3 + 2 || p2[2] == 13)in = 3;
				else if (p2[3] > spot3 && p2[3] < spot3 + 2 || p2[3] == 13)in = 4;
				else if (p2[4] > spot3 && p2[4] < spot3 + 2 || p2[4] == 13)in = 5;
				else if (dispile5[dis5] == spot3 + 1) in = 7;
				else if (dispile6[dis6] == spot3 + 1) in = 8;
				else if (dispile7[dis7] == spot3 + 1) in = 9;
				else if (dispile8[dis8] == spot3 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p2[0];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p2[0] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p2[0] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p2[0] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p2[0] = 0; }


				}
				else if (in == 2)
				{
					cardvalue = p2[1];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p2[1] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p2[1] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p2[1] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p2[1] = 0; }


				}
				else if (in == 3)
				{
					cardvalue = p2[2];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p2[2] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p2[2] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p2[2] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p2[2] = 0; }
				}
				else if (in == 4)
				{
					cardvalue = p2[3];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p2[3] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p2[3] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p2[3] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p2[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p2[4];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p2[4] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p2[4] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p2[4] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p2[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p2stash[STASHSIZE - stash2];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	stash2++; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	stash2++; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  stash2++; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	stash2++; }

				}
				else if (in == 7)
				{
					cardvalue = dispile5[dis5];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis5--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis5--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis5--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis5--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile6[dis6];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis6--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis6--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis6--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis6--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile7[dis7];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis7--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis7--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis7--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis7--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile8[dis8];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis8--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis8--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis8--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis8--; }
				}
				cardtransform2(cardstash2, cardvalue);
				printf("Player 2 played a %s\n", cardstash2);
			}
			else if (in == 4)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p2stash[STASHSIZE - stash2] > spot4 && p2stash[STASHSIZE - stash2] < spot3 + 2 || p2stash[STASHSIZE - stash2] == 13)in = 6;
				else if (p2[0] > spot4 && p2[0] < spot4 + 2 || p2[0] == 13)in = 1;
				else if (p2[1] > spot4 && p2[1] < spot4 + 2 || p2[1] == 13)in = 2;
				else if (p2[2] > spot4 && p2[2] < spot4 + 2 || p2[2] == 13)in = 3;
				else if (p2[3] > spot4 && p2[3] < spot4 + 2 || p2[3] == 13)in = 4;
				else if (p2[4] > spot4 && p2[4] < spot4 + 2 || p2[4] == 13)in = 5;
				else if (dispile5[dis5] == spot4 + 1) in = 7;
				else if (dispile6[dis6] == spot4 + 1) in = 8;
				else if (dispile7[dis7] == spot4 + 1) in = 9;
				else if (dispile8[dis8] == spot4 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p2[0];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p2[0] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p2[0] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p2[0] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p2[0] = 0; }


				}
				else if (in == 2)
				{
					cardvalue = p2[1];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++;	p2[1] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0;	p2[1] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p2[1] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p2[1] = 0; }


				}
				else if (in == 3)
				{
					cardvalue = p2[2];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++;	p2[2] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	p2[2] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p2[2] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p2[2] = 0; }


				}
				else if (in == 4)
				{
					cardvalue = p2[3];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p2[3] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p2[3] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p2[3] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p2[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p2[4];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p2[4] = 0; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p2[4] = 0; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  p2[4] = 0; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p2[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p2stash[STASHSIZE - stash2];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; stash2++; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; stash2++; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  stash2++; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	stash2++; }

				}
				else if (in == 7)
				{
					cardvalue = dispile5[dis5];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis5--; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis5--; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis5--; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis5--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile6[dis6];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis6--; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis6--; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis6--; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis6--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile7[dis7];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis7--; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis7--; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis7--; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis7--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile8[dis8];
					if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis8--; }
					else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis8--; }
					else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis8--; }
					else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis8--; }
				}
				cardtransform2(cardstash2, cardvalue);
				printf("Player 2 played a %s\n", cardstash2);
			}
			else
			{
				int d;


			/*	printf("Your discard piles:\n Card 1: %d\nCard 2: %d\nCard 3: %d\nCard 4: %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
				printf("Which discard pile will you use?\n");
				scanf("%d", &d);
				printf("Discard which card?\n");
				scanf("%d", &in);*/

	/*FIX LATER*/		
				if (p2[0] == dispile5[dis5]) { d = 1; in = 1; }
				else if (p2[1] == dispile5[dis5]) { d = 1; in = 2; }
				else if (p2[2] == dispile5[dis5]) { d = 1; in = 3; }
				else if (p2[3] == dispile5[dis5]) { d = 1; in = 4; }
				else if (p2[4] == dispile5[dis5]) { d = 1; in = 5; }
				else if(p2[0] == dispile6[dis6]) { d = 2; in = 1; }
				else if (p2[1] == dispile6[dis6]) { d = 2; in = 2; }
				else if (p2[2] == dispile6[dis6]) { d = 2; in = 3; }
				else if (p2[3] == dispile6[dis6]) { d = 2; in = 4; }
				else if (p2[4] == dispile6[dis6]) { d = 2; in = 5; }
				else if (p2[0] == dispile7[dis7]) { d = 3; in = 1; }
				else if (p2[1] == dispile7[dis7]) { d = 3; in = 2; }
				else if (p2[2] == dispile7[dis7]) { d = 3; in = 3; }
				else if (p2[3] == dispile7[dis7]) { d = 3; in = 4; }
				else if (p2[4] == dispile7[dis7]) { d = 3; in = 5; }
				else if (p2[0] == dispile8[dis8]) { d = 4; in = 1; }
				else if (p2[1] == dispile8[dis8]) { d = 4; in = 2; }
				else if (p2[2] == dispile8[dis8]) { d = 4; in = 3; }
				else if (p2[3] == dispile8[dis8]) { d = 4; in = 4; }
				else if (p2[4] == dispile8[dis8]) { d = 4; in = 5; }
				else if (dispile5[dis5] == 0) { d = 1; in = rand() % 5 + 1; }
				else if (dispile6[dis6] == 0) { d = 2; in = rand() % 5 + 1; }
				else if (dispile7[dis7] == 0) { d = 3; in = rand() % 5 + 1; }
				else if (dispile8[dis8] == 0) { d = 4; in = rand() % 5 + 1; }
				else if (p2[0] == dispile5[dis5] - 1) { d = 1; in = 1; }
				else if (p2[1] == dispile5[dis5] - 1) { d = 1; in = 2; }
				else if (p2[2] == dispile5[dis5] - 1) { d = 1; in = 3; }
				else if (p2[3] == dispile5[dis5] - 1) { d = 1; in = 4; }
				else if (p2[4] == dispile5[dis5] - 1) { d = 1; in = 5; }
				else if (p2[0] == dispile6[dis6] - 1) { d = 2; in = 1; }
				else if (p2[1] == dispile6[dis6] - 1) { d = 2; in = 2; }
				else if (p2[2] == dispile6[dis6] - 1) { d = 2; in = 3; }
				else if (p2[3] == dispile6[dis6] - 1) { d = 2; in = 4; }
				else if (p2[4] == dispile6[dis6] - 1) { d = 2; in = 5; }
				else if (p2[0] == dispile7[dis7] - 1) { d = 3; in = 1; }
				else if (p2[1] == dispile7[dis7] - 1) { d = 3; in = 2; }
				else if (p2[2] == dispile7[dis7] - 1) { d = 3; in = 3; }
				else if (p2[3] == dispile7[dis7] - 1) { d = 3; in = 4; }
				else if (p2[4] == dispile7[dis7] - 1) { d = 3; in = 5; }
				else if (p2[0] == dispile8[dis8] - 1) { d = 4; in = 1; }
				else if (p2[1] == dispile8[dis8] - 1) { d = 4; in = 2; }
				else if (p2[2] == dispile8[dis8] - 1) { d = 4; in = 3; }
				else if (p2[3] == dispile8[dis8] - 1) { d = 4; in = 4; }
				else if (p2[4] == dispile8[dis8] - 1) { d = 4; in = 5; }
				else { d = rand() % 4 + 1; in = rand() % 5 + 1; }
	

				if (d == 1)
				{
					if (in == 1)
					{
					
					
						dis5++;
						dispile5[dis5] = p2[0];
						p2[0] = 0;
						
					}
					else if (in == 2)
					{
						
						dis5++;
						dispile5[dis5] = p2[1];
						p2[1] = 0;
					}
					else if (in == 3)
					{
					
						dis5++;
						dispile5[dis5] = p2[2];
						p2[2] = 0;
					}
					else if (in == 4)
					{

						dis5++;
						dispile5[dis5] = p2[3];
						p2[3] = 0;
					}
					else if (in == 5)
					{
					
						dis5++;
						dispile5[dis5] = p2[4];
						p2[4] = 0;
					}
				}
				else if (d == 2)
				{
					if (in == 1)
					{

						dis6++;
						dispile6[dis6] = p2[0];
						p2[0] = 0;
					}
					else if (in == 2)
					{
						
						dis6++;
						dispile6[dis6] = p2[1];
						p2[1] = 0;
					}
					else if (in == 3)
					{
					
						dis6++;
						dispile6[dis6] = p2[2];
						p2[2] = 0;
					}
					else if (in == 4)
					{
					
						dis6++;
						dispile6[dis6] = p2[3];
						p2[3] = 0;
					}
					else if (in == 5)
					{
						
						dis6++;
						dispile6[dis6] = p2[4];
						p2[4] = 0;
					}
				}
				else if (d == 3)
				{

					if (in == 1)
					{
						dis7++;
						dispile7[dis7] = p2[0];
						p2[0] = 0;
					}
					else if (in == 2)
					{
						dis7++;
						dispile7[dis7] = p2[1];
						p2[1] = 0;
					}
					else if (in == 3)
					{
						dis7++;
						dispile7[dis7] = p2[2];
						p2[2] = 0;
					}
					else if (in == 4)
					{
						dis7++;
						dispile7[dis7] = p2[3];
						p2[3] = 0;
					}
					else if (in == 5)
					{
						dis7++;
						dispile7[dis7] = p2[4];
						p2[4] = 0;
					}
				}
				else if (d == 4)
				{
					if (in == 1)
					{
						dis8++;
						dispile8[dis8] = p2[0];
						p2[0] = 0;
					}
					else if (in == 2)
					{
						dis8++;
						dispile8[dis8] = p2[1];
						p2[1] = 0;
					}
					else if (in == 3)
					{
						dis8++;
						dispile8[dis8] = p2[2];
						p2[2] = 0;
					}
					else if (in == 4)
					{
						dis8++;
						dispile8[dis8] = p2[3];
						p2[3] = 0;
					}
					else if (in == 5)
					{
						dis8++;
						dispile8[dis8] = p2[4];
						p2[4] = 0;
					}
				}
				
				check = 1;

			}

			if (p2[0] == 0 && p2[1] == 0 && p2[2] == 0 && p2[3] == 0 && p2[4] == 0)
			{
				deckcounter = initializeP2(deck, p2, deckcounter);
			}
		}
		check = 0;


		//player 3
		printf("Player 3:\n");
		while (check != 1)
		{
			/*printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
			printf("The board:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", spot1, spot2, spot3, spot4);
			printf("Your discard pile:\nSpot 1: %d\nSpot 2: %d\nSpot 3: %d\nSpot 4: %d\n", dispile1[dis1 - 1], dispile2[dis2 - 1], dispile3[dis3 - 1], dispile4[dis4 - 1]);
			printf("Top card of your stash: %s\n", cardstash);
			printf("Would you like to place a card on the table?\n");

			printf("Spot 1(1) Spot 2(2) Spot 3(3) Spot 4(4) or discard(5): \n");
			scanf("%d", &in);*/
			if (p3stash[STASHSIZE - stash3] == spot1 + 1 || p3stash[STASHSIZE - stash3] == 13) in = 1;
			else if (p3stash[STASHSIZE - stash3] > spot2 && p3stash[STASHSIZE - stash3] < spot2 + 2 || p3stash[STASHSIZE - stash3] == 13) in = 2;
			else if (p3stash[STASHSIZE - stash3] > spot3 && p3stash[STASHSIZE - stash3] < spot3 + 2 || p3stash[STASHSIZE - stash3] == 13) in = 3;
			else if (p3stash[STASHSIZE - stash3] > spot4 && p3stash[STASHSIZE - stash3] < spot4 + 2 || p3stash[STASHSIZE - stash3] == 13) in = 4;
			else if (p3[0] > spot1 && p3[0] < spot1 + 2 || p3[0] == 13) in = 1;
			else if (p3[1] > spot1 && p3[1] < spot1 + 2 || p3[1] == 13) in = 1;
			else if (p3[2] > spot1 && p3[2] < spot1 + 2 || p3[2] == 13) in = 1;
			else if (p3[3] > spot1 && p3[3] < spot1 + 2 || p3[3] == 13) in = 1;
			else if (p3[4] > spot1 && p3[4] < spot1 + 2 || p3[4] == 13)in = 1;
			/*New Line*/else if (p3[0] > spot2 && p3[0] < spot2 + 2 || p3[0] == 13) in = 2;
			else if (p3[1] > spot2 && p3[1] < spot2 + 2 || p3[1] == 13) in = 2;
			else if (p3[2] > spot2 && p3[2] < spot2 + 2 || p3[2] == 13) in = 2;
			else if (p3[3] > spot2 && p3[3] < spot2 + 2 || p3[3] == 13) in = 2;
			else if (p3[4] > spot2 && p3[4] < spot2 + 2 || p3[4] == 13)in = 2;
			/*New Line*/else if (p3[0] > spot3 && p3[0] < spot3 + 2 || p3[0] == 13) in = 3;
			else if (p3[1] > spot3 && p3[1] < spot3 + 2 || p3[1] == 13) in = 3;
			else if (p3[2] > spot3 && p3[2] < spot3 + 2 || p3[2] == 13) in = 3;
			else if (p3[3] > spot3 && p3[3] < spot3 + 2 || p3[3] == 13) in = 3;
			else if (p3[4] > spot3 && p3[4] < spot3 + 2 || p3[4] == 13)in = 3;
			/*New Line*/else if (p3[0] > spot4 && p3[0] < spot4 + 2 || p3[0] == 13) in = 4;
			else if (p3[1] > spot4 && p3[1] < spot4 + 2 || p3[1] == 13) in = 4;
			else if (p3[2] > spot4 && p3[2] < spot4 + 2 || p3[2] == 13) in = 4;
			else if (p3[3] > spot4 && p3[3] < spot4 + 2 || p3[3] == 13) in = 4;
			else if (p3[4] > spot4 && p3[4] < spot4 + 2 || p3[4] == 13)in = 4;
			else if (dispile9[dis9] == spot1 + 1) in = 1;
			else if (dispile10[dis10] == spot1 + 1) in = 1;
			else if (dispile11[dis11] == spot1 + 1) in = 1;
			else if (dispile12[dis12] == spot1 + 1) in = 1;
			else if (dispile9[dis9] == spot2 + 1) in = 2;
			else if (dispile10[dis10] == spot2 + 1) in = 2;
			else if (dispile11[dis11] == spot2 + 1) in = 2;
			else if (dispile12[dis12] == spot2 + 1) in = 2;
			else if (dispile9[dis9] == spot3 + 1) in = 3;
			else if (dispile10[dis10] == spot3 + 1) in = 3;
			else if (dispile11[dis11] == spot3 + 1) in = 3;
			else if (dispile12[dis12] == spot3 + 1) in = 3;
			else if (dispile9[dis9] == spot4 + 1) in = 4;
			else if (dispile10[dis10] == spot4 + 1) in = 4;
			else if (dispile11[dis11] == spot4 + 1) in = 4;
			else if (dispile12[dis12] == spot4 + 1) in = 4;
			else in = 5;


			if (in == 1)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p3stash[STASHSIZE - stash3] > spot1 && p3stash[STASHSIZE - stash3] < spot1 + 2 || p3stash[STASHSIZE - stash3] == 13)in = 6;
				else if (p3[0] > spot1 && p3[0] < spot1 + 2 || p3[0] == 13)in = 1;
				else if (p3[1] > spot1 && p3[1] < spot1 + 2 || p3[1] == 13)in = 2;
				else if (p3[2] > spot1 && p3[2] < spot1 + 2 || p3[2] == 13)in = 3;
				else if (p3[3] > spot1 && p3[3] < spot1 + 2 || p3[3] == 13)in = 4;
				else if (p3[4] > spot1 && p3[4] < spot1 + 2 || p3[4] == 13)in = 5;
				else if (dispile9[dis9] == spot1 + 1) in = 7;
				else if (dispile10[dis10] == spot1 + 1) in = 8;
				else if (dispile11[dis11] == spot1 + 1) in = 9;
				else if (dispile12[dis12] == spot1 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p3[0];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++;  p3[0] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p3[0] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p3[0] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p3[0] = 0; }



				}
				else if (in == 2)
				{
					cardvalue = p3[1];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p3[1] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p3[1] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p3[1] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p3[1] = 0; }

				}
				else if (in == 3)
				{
					cardvalue = p3[2];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p3[2] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0;	p3[2] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p3[2] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p3[2] = 0; }


				}
				else if (in == 4)
				{
					cardvalue = p3[3];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p3[3] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p3[3] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p3[3] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p3[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p3[4];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; 	p3[4] = 0; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; 	p3[4] = 0; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  p3[4] = 0; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	p3[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p3stash[STASHSIZE - stash3];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; stash3++; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; stash3++; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  stash3++; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	stash3++; }


				}
				else if (in == 7)
				{
					cardvalue = dispile9[dis9];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis9--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis9--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis9--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis9--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile10[dis10];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis10--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis10--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis10--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis10--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile11[dis11];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis11--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis11--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis11--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis11--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile12[dis12];
					if (cardvalue > spot1 && cardvalue < spot1 + 2 && spot1 != 11) { spot1++; dis12--; }
					else if (cardvalue > spot1 && cardvalue < spot1 + 2) { spot1 = 0; dis12--; }
					else if (cardvalue == 13 && spot1 != 11) { spot1++;  dis12--; }
					else if (cardvalue == 13 && spot1 == 11) { spot1 = 0; 	dis12--; }
				}

				cardtransform2(cardstash3, cardvalue);
				printf("Player 3 played a %s\n", cardstash3);
			}
			else if (in == 2)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p3stash[STASHSIZE - stash3] > spot2 && p3stash[STASHSIZE - stash3] < spot2 + 2 || p3stash[STASHSIZE - stash3] == 13) in = 6;
				else if (p3[0] > spot2 && p3[0] < spot2 + 2 || p3[0] == 13)in = 1;
				else if (p3[1] > spot2 && p3[1] < spot2 + 2 || p3[1] == 13)in = 2;
				else if (p3[2] > spot2 && p3[2] < spot2 + 2 || p3[2] == 13)in = 3;
				else if (p3[3] > spot2 && p3[3] < spot2 + 2 || p3[3] == 13)in = 4;
				else if (p3[4] > spot2 && p3[4] < spot2 + 2 || p3[4] == 13)in = 5;
				else if (dispile9[dis9] == spot2 + 1) in = 7;
				else if (dispile10[dis10] == spot2 + 1) in = 8;
				else if (dispile11[dis11] == spot2 + 1) in = 9;
				else if (dispile12[dis12] == spot2 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p3[0];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p3[0] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p3[0] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p3[0] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p3[0] = 0; }


				}
				else if (in == 2)
				{
					cardvalue = p3[1];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p3[1] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p3[1] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p3[1] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p3[1] = 0; }


				}
				else if (in == 3)
				{
					cardvalue = p3[2];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; 	p3[2] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; 	p3[2] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p3[2] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p3[2] = 0; }


				}
				else if (in == 4)
				{
					cardvalue = p3[3];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p3[3] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p3[3] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p3[3] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p3[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p3[4];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; p3[4] = 0; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; p3[4] = 0; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  p3[4] = 0; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	p3[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p3stash[STASHSIZE - stash3];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 1) { spot2++; stash3++; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; stash3++; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++; stash3++; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	stash3++; }

				}
				else if (in == 7)
				{
					cardvalue = dispile9[dis9];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis9--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis9--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis9--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis9--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile10[dis10];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis10--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis10--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis10--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis10--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile11[dis11];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis11--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis11--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis11--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis11--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile12[dis12];
					if (cardvalue > spot2 && cardvalue < spot2 + 2 && spot2 != 11) { spot2++; dis12--; }
					else if (cardvalue > spot2 && cardvalue < spot2 + 2) { spot2 = 0; dis12--; }
					else if (cardvalue == 13 && spot2 != 11) { spot2++;  dis12--; }
					else if (cardvalue == 13 && spot2 == 11) { spot2 = 0; 	dis12--; }
				}
				cardtransform2(cardstash3, cardvalue);
				printf("Player 3 played a %s\n", cardstash3);
			}
			else if (in == 3)
			{
				/*printf("Which card would you like to place here?\n");
				printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
				printf("Top card of your stash(6): %s\n", cardstash);
				scanf("%d", &in);*/
				if (p3stash[STASHSIZE - stash3] > spot3 && p3stash[STASHSIZE - stash3] < spot3 + 2 || p3stash[STASHSIZE - stash3] == 13)in = 6;
				else if (p3[0] > spot3 && p3[0] < spot3 + 2 || p3[0] == 13)in = 1;
				else if (p3[1] > spot3 && p3[1] < spot3 + 2 || p3[1] == 13)in = 2;
				else if (p3[2] > spot3 && p3[2] < spot3 + 2 || p3[2] == 13)in = 3;
				else if (p3[3] > spot3 && p3[3] < spot3 + 2 || p3[3] == 13)in = 4;
				else if (p3[4] > spot3 && p3[4] < spot3 + 2 || p3[4] == 13)in = 5;
				else if (dispile9[dis9] == spot3 + 1) in = 7;
				else if (dispile10[dis10] == spot3 + 1) in = 8;
				else if (dispile11[dis11] == spot3 + 1) in = 9;
				else if (dispile12[dis12] == spot3 + 1) in = 10;
				if (in == 1)
				{
					cardvalue = p3[0];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p3[0] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p3[0] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p3[0] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p3[0] = 0; }


				}
				else if (in == 2)
				{
					cardvalue = p3[1];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p3[1] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p3[1] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p3[1] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p3[1] = 0; }


				}
				else if (in == 3)
				{
					cardvalue = p3[2];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p3[2] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p3[2] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p3[2] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p3[2] = 0; }
				}
				else if (in == 4)
				{
					cardvalue = p3[3];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	p3[3] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	p3[3] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p3[3] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p3[3] = 0; }


				}
				else if (in == 5)
				{
					cardvalue = p3[4];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; p3[4] = 0; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; p3[4] = 0; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  p3[4] = 0; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	p3[4] = 0; }


				}
				else if (in == 6)
				{
					cardvalue = p3stash[STASHSIZE - stash3];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; 	stash3++; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; 	stash3++; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  stash3++; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	stash3++; }

				}
				else if (in == 7)
				{
					cardvalue = dispile9[dis9];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis9--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis9--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis9--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis9--; }
				}
				else if (in == 8)
				{
					cardvalue = dispile10[dis10];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis10--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis10--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis10--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis10--; }
				}
				else if (in == 9)
				{
					cardvalue = dispile11[dis11];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis11--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis11--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis11--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis11--; }
				}
				else if (in == 10)
				{
					cardvalue = dispile12[dis12];
					if (cardvalue > spot3 && cardvalue < spot3 + 2 && spot3 != 11) { spot3++; dis12--; }
					else if (cardvalue > spot3 && cardvalue < spot3 + 2) { spot3 = 0; dis12--; }
					else if (cardvalue == 13 && spot3 != 11) { spot3++;  dis12--; }
					else if (cardvalue == 13 && spot3 == 11) { spot3 = 0; 	dis12--; }
				}
				cardtransform2(cardstash3, cardvalue);
				printf("Player 3 played a %s\n", cardstash3);
			}
			else if (in == 4)
			{
				/*printf("Which card would you like to place here?\n");
			printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\nPress 7 to go back\n", card1, card2, card3, card4, card5);
			printf("Top card of your stash(6): %s\n", cardstash);
			scanf("%d", &in);*/
			if (p3stash[STASHSIZE - stash3] > spot4 && p3stash[STASHSIZE - stash3] < spot4 + 2 || p3stash[STASHSIZE - stash3] == 13)in = 6;
			else if (p3[0] > spot4 && p3[0] < spot4 + 2 || p3[0] == 13)in = 1;
			else if (p3[1] > spot4 && p3[1] < spot4 + 2 || p3[1] == 13)in = 2;
			else if (p3[2] > spot4 && p3[2] < spot4 + 2 || p3[2] == 13)in = 3;
			else if (p3[3] > spot4 && p3[3] < spot4 + 2 || p3[3] == 13)in = 4;
			else if (p3[4] > spot4 && p3[4] < spot4 + 2 || p3[4] == 13)in = 5;
			else if (dispile9[dis9] == spot4 + 1) in = 7;
			else if (dispile10[dis10] == spot4 + 1) in = 8;
			else if (dispile11[dis11] == spot4 + 1) in = 9;
			else if (dispile12[dis12] == spot4 + 1) in = 10;
			if (in == 1)
			{
				cardvalue = p3[0];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p3[0] = 0; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p3[0] = 0; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  p3[0] = 0; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p3[0] = 0; }


			}
			else if (in == 2)
			{
				cardvalue = p3[1];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; 	p3[1] = 0; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	p3[1] = 0; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  p3[1] = 0; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p3[1] = 0; }


			}
			else if (in == 3)
			{
				cardvalue = p3[2];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; 	p3[2] = 0; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	p3[2] = 0; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  p3[2] = 0; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p3[2] = 0; }
			}
			else if (in == 4)
			{
				cardvalue = p3[3];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; 	p3[3] = 0; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	p3[3] = 0; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  p3[3] = 0; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p3[3] = 0; }


			}
			else if (in == 5)
			{
				cardvalue = p3[4];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; p3[4] = 0; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; p3[4] = 0; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  p3[4] = 0; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	p3[4] = 0; }


			}
			else if (in == 6)
			{
				cardvalue = p3stash[STASHSIZE - stash3];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; 	stash3++; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; 	stash3++; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  stash3++; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	stash3++; }

			}
			else if (in == 7)
			{
				cardvalue = dispile9[dis9];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis9--; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis9--; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis9--; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis9--; }
			}
			else if (in == 8)
			{
				cardvalue = dispile10[dis10];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis10--; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis10--; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis10--; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis10--; }
			}
			else if (in == 9)
			{
				cardvalue = dispile11[dis11];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis11--; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis11--; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis11--; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis11--; }
			}
			else if (in == 10)
			{
				cardvalue = dispile12[dis12];
				if (cardvalue > spot4 && cardvalue < spot4 + 2 && spot4 != 11) { spot4++; dis12--; }
				else if (cardvalue > spot4 && cardvalue < spot4 + 2) { spot4 = 0; dis12--; }
				else if (cardvalue == 13 && spot4 != 11) { spot4++;  dis12--; }
				else if (cardvalue == 13 && spot4 == 11) { spot4 = 0; 	dis12--; }
			}
			cardtransform2(cardstash3, cardvalue);
			printf("Player 3 played a %s\n", cardstash3);
			}
			else
			{
				int d;


				/*	printf("Your discard piles:\n Card 1: %d\nCard 2: %d\nCard 3: %d\nCard 4: %d\n", dispile1[dis1], dispile2[dis2], dispile3[dis3], dispile4[dis4]);
					printf("Your hand:\nCard 1: %s\nCard 2: %s\nCard 3: %s\nCard 4: %s\nCard 5: %s\n", card1, card2, card3, card4, card5);
					printf("Which discard pile will you use?\n");
					scanf("%d", &d);
					printf("Discard which card?\n");
					scanf("%d", &in);*/

				
				if (p3[0] == dispile9[dis9]) { d = 1; in = 1; }
				else if (p3[1] == dispile9[dis9]) { d = 1; in = 2; }
				else if (p3[2] == dispile9[dis9]) { d = 1; in = 3; }
				else if (p3[3] == dispile9[dis9]) { d = 1; in = 4; }
				else if (p3[4] == dispile9[dis9]) { d = 1; in = 5; }
				else if (p3[0] == dispile10[dis10]) { d = 2; in = 1; }
				else if (p3[1] == dispile10[dis10]) { d = 2; in = 2; }
				else if (p3[2] == dispile10[dis10]) { d = 2; in = 3; }
				else if (p3[3] == dispile10[dis10]) { d = 2; in = 4; }
				else if (p3[4] == dispile10[dis10]) { d = 2; in = 5; }
				else if (p3[0] == dispile11[dis11]) { d = 3; in = 1; }
				else if (p3[1] == dispile11[dis11]) { d = 3; in = 2; }
				else if (p3[2] == dispile11[dis11]) { d = 3; in = 3; }
				else if (p3[3] == dispile11[dis11]) { d = 3; in = 4; }
				else if (p3[4] == dispile11[dis11]) { d = 3; in = 5; }
				else if (p3[0] == dispile12[dis12]) { d = 4; in = 1; }
				else if (p3[1] == dispile12[dis12]) { d = 4; in = 2; }
				else if (p3[2] == dispile12[dis12]) { d = 4; in = 3; }
				else if (p3[3] == dispile12[dis12]) { d = 4; in = 4; }
				else if (p3[4] == dispile12[dis12]) { d = 4; in = 5; }
				else if (dispile9[dis9] == 0) { d = 1; in = rand() % 5 + 1; }
				else if (dispile10[dis10] == 0) { d = 2; in = rand() % 5 + 1; }
				else if (dispile11[dis11] == 0) { d = 3; in = rand() % 5 + 1; }
				else if (dispile12[dis12] == 0) { d = 4; in = rand() % 5 + 1; }
				else if (p3[0] == dispile9[dis9] - 1) { d = 1; in = 1; }
				else if (p3[1] == dispile9[dis9] - 1) { d = 1; in = 2; }
				else if (p3[2] == dispile9[dis9] - 1) { d = 1; in = 3; }
				else if (p3[3] == dispile9[dis9] - 1) { d = 1; in = 4; }
				else if (p3[4] == dispile9[dis9] - 1) { d = 1; in = 5; }
				else if (p3[0] == dispile10[dis10] - 1) { d = 2; in = 1; }
				else if (p3[1] == dispile10[dis10] - 1) { d = 2; in = 2; }
				else if (p3[2] == dispile10[dis10] - 1) { d = 2; in = 3; }
				else if (p3[3] == dispile10[dis10] - 1) { d = 2; in = 4; }
				else if (p3[4] == dispile10[dis10] - 1) { d = 2; in = 5; }
				else if (p3[0] == dispile11[dis11] - 1) { d = 3; in = 1; }
				else if (p3[1] == dispile11[dis11] - 1) { d = 3; in = 2; }
				else if (p3[2] == dispile11[dis11] - 1) { d = 3; in = 3; }
				else if (p3[3] == dispile11[dis11] - 1) { d = 3; in = 4; }
				else if (p3[4] == dispile11[dis11] - 1) { d = 3; in = 5; }
				else if (p3[0] == dispile12[dis12] - 1) { d = 4; in = 1; }
				else if (p3[1] == dispile12[dis12] - 1) { d = 4; in = 2; }
				else if (p3[2] == dispile12[dis12] - 1) { d = 4; in = 3; }
				else if (p3[3] == dispile12[dis12] - 1) { d = 4; in = 4; }
				else if (p3[4] == dispile12[dis12] - 1) { d = 4; in = 5; }
				else { d = rand() % 4 + 1; in = rand() % 5 + 1; }

				
				if (d == 1)
				{
					if (in == 1)
					{


						dis9++;
						dispile9[dis9] = p3[0];
						p3[0] = 0;

					}
					else if (in == 2)
					{

						dis9++;
						dispile9[dis9] = p3[1];
						p3[1] = 0;
					}
					else if (in == 3)
					{

						dis9++;
						dispile9[dis9] = p3[2];
						p3[2] = 0;
					}
					else if (in == 4)
					{

						dis9++;
						dispile9[dis9] = p3[3];
						p3[3] = 0;
					}
					else if (in == 5)
					{

						dis9++;
						dispile9[dis9] = p3[4];
						p3[4] = 0;
					}
				}
				else if (d == 2)
				{
					if (in == 1)
					{


						dis10++;
						dispile10[dis10] = p3[0];
						p3[0] = 0;

					}
					else if (in == 2)
					{

						dis10++;
						dispile10[dis10] = p3[1];
						p3[1] = 0;
					}
					else if (in == 3)
					{

						dis10++;
						dispile10[dis10] = p3[2];
						p3[2] = 0;
					}
					else if (in == 4)
					{

						dis10++;
						dispile10[dis10] = p3[3];
						p3[3] = 0;
					}
					else if (in == 5)
					{

						dis10++;
						dispile10[dis10] = p3[4];
						p3[4] = 0;
					}
				}
				else if (d == 3)
				{

					if (in == 1)
					{


						dis11++;
						dispile11[dis11] = p3[0];
						p3[0] = 0;

					}
					else if (in == 2)
					{

						dis11++;
						dispile11[dis11] = p3[1];
						p3[1] = 0;
					}
					else if (in == 3)
					{

						dis11++;
						dispile11[dis11] = p3[2];
						p3[2] = 0;
					}
					else if (in == 4)
					{

						dis11++;
						dispile11[dis11] = p3[3];
						p3[3] = 0;
					}
					else if (in == 5)
					{

						dis11++;
						dispile11[dis11] = p3[4];
						p3[4] = 0;
					}
				}
				else if (d == 4)
				{
				if (in == 1)
				{


					dis12++;
					dispile12[dis12] = p3[0];
					p3[0] = 0;

				}
				else if (in == 2)
				{

					dis12++;
					dispile12[dis12] = p3[1];
					p3[1] = 0;
				}
				else if (in == 3)
				{

					dis12++;
					dispile12[dis12] = p3[2];
					p3[2] = 0;
				}
				else if (in == 4)
				{

					dis12++;
					dispile12[dis12] = p3[3];
					p3[3] = 0;
				}
				else if (in == 5)
				{

					dis12++;
					dispile12[dis12] = p3[4];
					p3[4] = 0;
				}
				}

				check = 1;

			}

			if (p3[0] == 0 && p3[1] == 0 && p3[2] == 0 && p3[3] == 0 && p3[4] == 0)
			{
				deckcounter = initializeP2(deck, p3, deckcounter);
			}
		}
		printf("NEXT TURN\n\n\n");
		if (162 - deckcounter == 0)
		{
			initializedeck(deck);
		}

		if (STASHSIZE - stash1 == 0)
		{
			gamestatus = 1; 
			printf("You win!\n");
		}
		else if (STASHSIZE - stash2 == 0)
		{
			gamestatus = 1;
			printf("You lose...\n");
		}









	}
}




