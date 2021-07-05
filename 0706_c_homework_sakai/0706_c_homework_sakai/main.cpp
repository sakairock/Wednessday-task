#include <stdio.h>


//第１問

//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはpublicで作成し、外部で値を設定して、
//値が表示されることを確認してください。

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
//	printf_s("X座標とY座標を入力してください。\n");
//	scanf_s("%d %d", &vector.x, &vector.y);
//
//	printf_s("問1の答え\n");
//	printf_s("x = %d\n", vector.x);
//	printf_s("y = %d\n", vector.y);
//
//	return 0;
//}

//第２問

//x, y座標を持つ構造体Vector2を、
//作ってください。
//x, yはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。

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
//	printf_s("X座標とY座標を入力してください。\n");
//	scanf_s("%d %d", &v.gx, &v.gy);
//
//	v.setNum(v.gx, v.gy);
//
//	printf_s("問2の答え\n");
//	printf_s("x = %d\n", v.getNumX());
//	printf_s("y = %d\n", v.getNumY());
//
//	return 0;
//}

//第３問

//x, y, z座標を持つ構造体Vector3を
//作ってください。
//x, y, zはprivateで作成し、関数を介して値を設定できるようにして、
//値が表示されることを確認してください。

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
//	printf_s("X座標とY座標とZ座標を入力してください。\n");
//	scanf_s("%d %d %d", &v.gx, &v.gy, &v.gz);
//
//	v.setNum(v.gx, v.gy, v.gz);
//
//	printf_s("問3の答え\n");
//	printf_s("x = %d\n", v.getNumX());
//	printf_s("y = %d\n", v.getNumY());
//	printf_s("z = %d\n", v.getNumZ());
//
//	return 0;
//}