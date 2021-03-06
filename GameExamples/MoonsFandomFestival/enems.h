// MTE MK1 (la Churrera) v3.99.99 (final)
// Copyleft 2010-2017 by the Mojon Twins

// Generated by ene2h.exe from .\file.ene
// Copyleft 2010, 2017 by The Mojon Twins

typedef struct {
	int x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
} MALOTE;

#ifdef ANDROID_TCP_IP

MALOTE malotes [] = {
 	{32, 32, 32, 32, 96, 32, 1, 0, 2},
 	{176, 64, 176, 64, 32, 64, -1, 0, 1},
 	{48, 64, 48, 64, 160, 64, 1, 0, 1},
 	{176, 64, 176, 64, 48, 64, -1, 0, 1},
 	{48, 64, 48, 64, 144, 64, 1, 0, 1},
 	{192, 64, 192, 64, 32, 64, -1, 0, 1},
 	{176, 64, 176, 64, 64, 64, -1, 0, 1},
 	{48, 64, 48, 64, 208, 64, 1, 0, 1}
};

#else
	
MALOTE malotes [] = {
 	{32, 32, 32, 32, 96, 32, 1, 0, 2},
 	{176, 64, 176, 64, 32, 64, -1, 0, 1},
 	{48, 64, 48, 64, 160, 64, 1, 0, 3},
 	{176, 64, 176, 64, 48, 64, -1, 0, 1},
 	{48, 64, 48, 64, 144, 64, 1, 0, 3},
 	{192, 64, 192, 64, 32, 64, -1, 0, 1},
 	{176, 64, 176, 64, 64, 64, -1, 0, 3},
 	{48, 64, 48, 64, 208, 64, 1, 0, 1}
};

#endif
