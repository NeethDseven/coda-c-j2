#include <stdlib.h>
#include <stdio.h>

int main()
{
	char prenom[10];
    int age;
    char reponse;

	printf("Bonjour, quel est votre prénom ?\n");
    scanf("%s", prenom);

	printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

	printf("%s, si vous êtes de la fin d'année, votre année de naissance est 1986 sinon c'est 1987\n", prenom);
	
	exit (0);
}