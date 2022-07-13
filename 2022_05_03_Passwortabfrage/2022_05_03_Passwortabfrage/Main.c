//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_05_03_Passwortabfrage	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 5/3/2022 6:57:42 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	char Passwort[15] = { 'G','a','r','t','e','n','z','a','u','n','1','2','3','\n' };
	char Abfrage[15];



	//Code
	printf("Bitte Passwort eingeben: \n");
	fgets(Abfrage, 15, stdin);

	for (int i = 0; i < 15; i++)
	{

	}

	getchar();
	fflush(stdin);
	getchar();
	return 0;
}