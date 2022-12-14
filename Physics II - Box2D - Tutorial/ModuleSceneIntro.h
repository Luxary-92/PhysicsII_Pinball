#pragma once
#include "Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "Globals.h"
#include "Animation.h"

class PhysBody;

class ModuleSceneIntro : public Module
{
public:

	// Constructors & Destructors
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	// Main module steps
	bool Start();
	update_status Update();
	update_status PostUpdate();
	bool CleanUp();
	void OnCollision(PhysBody* bodyA, PhysBody* bodyB);
	void FontDrawScore(int score, int n, int posX, int posY, int separacio, float scale);
	void FontDrawLife(int score, int n, int posX, int posY, int separacio, float scale);
	void FontDrawMaxScore(int score, int n, int posX, int posY, int separacio, float scale);

public:

	// Lists of physics objects
	p2List<PhysBody*> circles;
	p2List<PhysBody*> boxes;
	p2List<PhysBody*> ricks;
	p2List<PhysBody*> flippers;

	// Elements Hitboxes
	PhysBody* bumper1;
	PhysBody* bumper2;
	PhysBody* bumper3;
	PhysBody* bumper4;
	PhysBody* bumper5;

	PhysBody* sensor1;
	PhysBody* sensor2;
	PhysBody* sensor3;

	p2List<PhysBody*> hitbox;
	p2List<PhysBody*> hitboxa;
	p2List<PhysBody*> hitboxb;
	p2List<PhysBody*> hitboxc;
	p2List<PhysBody*> hitboxd;
	p2List<PhysBody*> hitboxe;
	p2List<PhysBody*> hitboxf;
	p2List<PhysBody*> hitboxg;
	p2List<PhysBody*> hitboxh;

	// Ball
	PhysBody* ball;
	int numballs = 3;

	bool colision=false;


	// Flippers
	PhysBody* flipperLeft;
	PhysBody* flipperRight;

	// Lower ground sensor (will kill all objects passig through it)
	PhysBody* lower_ground_sensor;
	bool sensed;

	// Textures
	SDL_Texture* circle;
	SDL_Texture* box;
	SDL_Texture* rick;
	SDL_Texture* flipper;
	SDL_Texture* background;
	SDL_Texture* spoink;
	SDL_Texture* pokeball;
	SDL_Texture* superball;
	SDL_Texture* ultraball;
	SDL_Texture* font;
	SDL_Texture* flipperLeftTex;
	SDL_Texture* flipperRightTex;
	SDL_Texture* pokemoncenter;
	SDL_Texture* pokemonentrance;
	SDL_Texture* Shroomish;
	SDL_Texture* pikachu;
	SDL_Texture* gameOver;

	// FX
	uint bonus_fx;

	// Raycast
	p2Point<int> ray;
	bool ray_on;

	float py;

	//Score
	int score = 0;
	int max_score = 0;
	int prev_score = 0;
	int posicioFont = 90;
	int posicioFontY = 828;
	int posicioMaxScoreX = 180;
	int posicioMaxScoreY = 15;

	// Animations
	Animation* currentAnimation = nullptr;
	Animation plungerIdle;
	Animation plungerCharging;
	Animation plungerMaxCharged;

	Animation* currentpokemoncenter = nullptr;
	Animation centerIdle;

	Animation* currentShroomish = nullptr;
	Animation ShroomishIdle;
	Animation ShroomishHit;

	Animation* currentPikachu = nullptr;
	Animation pikachuAnim;


	int triangleLeft[6]{
		136, 680,
	174, 737,
	135, 721
	};
	int triangleRight[6]{
		344, 682,
	343, 715,
	308, 737
	};

	int background4[24] = {
	148, 287,
	158, 315,
	169, 335,
	184, 354,
	191, 374,
	191, 392,
	170, 401,
	157, 389,
	144, 365,
	137, 339,
	129, 311,
	136, 294
	};

	int background3[22] = {
	93, 315,
	107, 355,
	117, 382,
	127, 404,
	127, 428,
	104, 440,
	92, 419,
	79, 387,
	66, 344,
	67, 324,
	78, 313
	};

	int background2[94] = {
	278, 202,
	278, 237,
	301, 243,
	320, 249,
	325, 263,
	320, 277,
	311, 291,
	296, 310,
	282, 334,
	281, 355,
	289, 358,
	301, 345,
	313, 345,
	321, 357,
	325, 374,
	325, 386,
	313, 399,
	308, 413,
	309, 426,
	312, 438,
	323, 431,
	336, 408,
	345, 387,
	352, 367,
	360, 357,
	368, 349,
	385, 343,
	401, 347,
	408, 361,
	409, 377,
	396, 391,
	382, 407,
	370, 420,
	369, 433,
	388, 437,
	405, 437,
	418, 425,
	425, 406,
	424, 382,
	422, 352,
	418, 325,
	402, 297,
	390, 272,
	375, 245,
	350, 225,
	320, 209,
	295, 202
	};

	int background1[26] = {
	73, 195,
	97, 169,
	121, 149,
	150, 135,
	178, 126,
	211, 125,
	242, 128,
	260, 138,
	205, 140,
	168, 149,
	134, 160,
	106, 174,
	90, 185
	};
	int hitbox10[36] = {
	70, 138,
	75, 146,
	78, 153,
	81, 160,
	86, 168,
	91, 174,
	92, 182,
	89, 191,
	84, 195,
	81, 188,
	77, 180,
	72, 175,
	66, 164,
	63, 156,
	59, 146,
	56, 136,
	63, 134,
	68, 134
	};
	int hitbox9[32] = {
	61, 209,
	52, 215,
	48, 208,
	43, 197,
	38, 185,
	35, 174,
	32, 164,
	31, 134,
	36, 116,
	40, 144,
	46, 163,
	52, 177,
	55, 183,
	57, 190,
	60, 197,
	61, 203
	};
	int hitbox8[12] = {
	97, 677,
	97, 737,
	180, 791,
	171, 810,
	91, 751,
	91, 681
	};
	int hitbox7[14] = {
	381, 678,
	387, 676,
	385, 751,
	307, 804,
	298, 796,
	376, 738,
	380, 732
	};
	int hitbox6[70] = {
	165, 101,
	165, 124,
	161, 133,
	153, 141,
	147, 149,
	141, 157,
	140, 173,
	147, 165,
	153, 163,
	158, 166,
	161, 172,
	162, 178,
	162, 185,
	161, 193,
	166, 195,
	169, 188,
	173, 178,
	179, 166,
	188, 163,
	198, 168,
	202, 173,
	203, 181,
	202, 187,
	198, 192,
	196, 199,
	199, 206,
	205, 206,
	206, 193,
	206, 178,
	205, 163,
	200, 152,
	195, 140,
	189, 130,
	183, 121,
	171, 108
	};
	int hitbox5[16] = {
	190, 338,
	189, 361,
	184, 368,
	146, 394,
	150, 398,
	192, 370,
	194, 361,
	195, 337
	};
	int hitbox4[20] = {
	42, 338,
	41, 347,
	41, 354,
	41, 364,
	41, 372,
	84, 398,
	88, 393,
	51, 369,
	48, 363,
	47, 336
	};
	int hitbox3[38] = {
	41, 90,
	44, 84,
	50, 78,
	56, 72,
	63, 67,
	71, 63,
	79, 59,
	91, 57,
	102, 57,
	113, 57,
	122, 62,
	130, 67,
	117, 65,
	106, 64,
	96, 64,
	82, 67,
	66, 74,
	57, 77,
	44, 87
	};
	// Pivot 0, 0
	int hitbox2[154] = {
		196, 862,
	196, 853,
	80, 784,
	80, 812,
	45, 812,
	45, 665,
	51, 650,
	62, 644,
	80, 643,
	88, 635,
	89, 602,
	84, 587,
	61, 562,
	34, 510,
	16, 444,
	14, 368,
	20, 303,
	20, 269,
	28, 214,
	51, 164,
	91, 123,
	133, 102,
	178, 81,
	239, 63,
	289, 53,
	331, 45,
	398, 44,
	446, 49,
	476, 63,
	496, 89,
	504, 133,
	504, 182,
	503, 831,
	469, 831,
	462, 200,
	454, 159,
	431, 130,
	398, 107,
	355, 89,
	309, 90,
	273, 98,
	262, 102,
	291, 116,
	304, 132,
	323, 141,
	350, 154,
	387, 177,
	412, 201,
	432, 227,
	444, 256,
	456, 278,
	459, 472,
	442, 513,
	426, 543,
	408, 569,
	390, 588,
	389, 603,
	388, 631,
	407, 633,
	421, 634,
	429, 643,
	434, 653,
	436, 672,
	436, 695,
	434, 806,
	399, 810,
	400, 788,
	298, 851,
	285, 858,
	286, 865,
	510, 862,
	510, 3,
	2, 1,
	1, 862,
	72, 863,
	120, 863,
	157, 863
	};
	// Background
	int hitbox1[146] = {
		98, 422,
		38, 388,
		38, 400,
		21, 400,
		22, 327,
		28, 319,
		42, 319,
		45, 312,
		44, 287,
		35, 279,
		27, 263,
		15, 238,
		8, 208,
		10, 177,
		11, 170,
		10, 144,
		10, 123,
		14, 104,
		21, 87,
		37, 63,
		52, 51,
		63, 46,
		80, 40,
		91, 35,
		112, 27,
		127, 25,
		145, 20,
		162, 18,
		186, 18,
		208, 17,
		223, 20,
		235, 26,
		244, 36,
		249, 49,
		250, 64,
		250, 81,
		249, 97,
		248, 409,
		234, 411,
		229, 98,
		226, 77,
		222, 56,
		209, 46,
		190, 40,
		172, 36,
		161, 36,
		148, 38,
		126, 44,
		144, 54,
		152, 66,
		164, 72,
		178, 77,
		194, 87,
		206, 102,
		214, 116,
		221, 141,
		223, 162,
		224, 189,
		226, 208,
		223, 233,
		216, 248,
		206, 269,
		192, 287,
		190, 312,
		193, 316,
		202, 317,
		211, 321,
		213, 328,
		214, 340,
		213, 397,
		198, 400,
		197, 388,
		140, 423
	};
};
