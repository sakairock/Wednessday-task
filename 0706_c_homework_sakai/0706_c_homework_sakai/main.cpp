#include <stdio.h>


//��P��

//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��public�ō쐬���A�O���Œl��ݒ肵�āA
//�l���\������邱�Ƃ��m�F���Ă��������B

//struct Vector2
//{
//public:
//	int x;
//	int y;
//};

//int main()
//{
//	Vector2 vector;
//
//	vector.x = 0;
//	vector.y = 0;
//
//	printf_s("X���W��Y���W����͂��Ă��������B\n");
//	scanf_s("%d %d", &vector.x, &vector.y);
//
//	printf_s("��1�̓���\n");
//	printf_s("x = %d\n", vector.x);
//	printf_s("y = %d\n", vector.y);
//
//	return 0;
//}

//��Q��

//x, y���W�����\����Vector2���A
//����Ă��������B
//x, y��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B

//struct Vector2
//{
//public:
//	void setNum(int X, int Y);
//	int getNumX() { return x; }
//	int getNumY() { return y; }
//	int gx;
//	int gy;
//private:
//	int x;
//	int y;
//};

//void Vector2::setNum(int X, int Y)
//{
//	x = X;
//	y = Y;
//}

//int main()
//{
//	Vector2 v;
//	v.gx = 0;
//	v.gy = 0;
//	v.setNum(0, 0);
//
//	printf_s("X���W��Y���W����͂��Ă��������B\n");
//	scanf_s("%d %d", &v.gx, &v.gy);
//
//	v.setNum(v.gx, v.gy);
//
//	printf_s("��2�̓���\n");
//	printf_s("x = %d\n", v.getNumX());
//	printf_s("y = %d\n", v.getNumY());
//
//	return 0;
//}

//��R��

//x, y, z���W�����\����Vector3��
//����Ă��������B
//x, y, z��private�ō쐬���A�֐�����Ēl��ݒ�ł���悤�ɂ��āA
//�l���\������邱�Ƃ��m�F���Ă��������B

//struct Vector3
//{
//public:
//	void setNum(int X, int Y, int Z);
//	int getNumX() { return x; }
//	int getNumY() { return y; }
//	int getNumZ() { return z; }
//	int gx;
//	int gy;
//	int gz;
//private:
//	int x;
//	int y;
//	int z;
//};

//void Vector3::setNum(int X, int Y, int Z)
//{
//	x = X;
//	y = Y;
//	z = Z;
//}

//int main()
//{
//	Vector3 v;
//	v.gx = 0;
//	v.gy = 0;
//	v.gz = 0;
//	v.setNum(0, 0, 0);
//
//	printf_s("X���W��Y���W��Z���W����͂��Ă��������B\n");
//	scanf_s("%d %d %d", &v.gx, &v.gy, &v.gz);
//
//	v.setNum(v.gx, v.gy, v.gz);
//
//	printf_s("��3�̓���\n");
//	printf_s("x = %d\n", v.getNumX());
//	printf_s("y = %d\n", v.getNumY());
//	printf_s("z = %d\n", v.getNumZ());
//
//	return 0;
//}