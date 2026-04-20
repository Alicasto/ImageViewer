#pragma once
#include <QtWidgets>
#include <QVector>
class ViewerWidget :public QWidget {
	Q_OBJECT
private:
	QSize areaSize = QSize(0, 0);
	QImage* img = nullptr;
	uchar* data = nullptr; 

	bool drawLineActivated = false;
	QPoint drawLineBegin = QPoint(0, 0);
	QVector <QPoint> polygonPoints;


public:
	ViewerWidget(QSize imgSize, QWidget* parent = Q_NULLPTR);
	~ViewerWidget();
	void resizeWidget(QSize size);

	//Image functions
	bool setImage(const QImage& inputImg);
	QImage* getImage() { return img; }; 
	bool isEmpty();
	bool changeSize(int width, int height);

	void setPixel(int x, int y, int r, int g, int b, int a = 255);
	void setPixel(int x, int y, double valR, double valG, double valB, double valA = 1.);
	void setPixel(int x, int y, const QColor& color);
	bool isInside(int x, int y); 

	//Draw functions
	void drawLine(QPoint start, QPoint end, QColor color, float radius, int algType = 0);
	void setDrawLineBegin(QPoint begin) { drawLineBegin = begin; }
	QPoint getDrawLineBegin() { return drawLineBegin; }
	void setDrawLineActivated(bool state) { drawLineActivated = state; }
	bool getDrawLineActivated() { return drawLineActivated; }

	//Get/Set functions
	uchar* getData() { return data; }
	void setDataPtr() { data = img ? img->bits() : nullptr; }

	int getImgWidth() { return img ? img->width() : 0; };
	int getImgHeight() { return img ? img->height() : 0; };

	void clear();
	void clearPolygon();

	//Algorithms
	void drawLineDDA(QPoint start, QPoint end, QColor color);
	void drawLineBresenham(QPoint start, QPoint end, QColor color);
	void drawCircle(QPoint center, float radius, QColor color);
	void addPolygonPoints(QPoint p);
	QVector <QPoint>& getPolygonPoints();
	QVector<QPoint> backupPoints;
	bool hasObject = false;
	void rotateAll(int angleDegre, QColor color, int algType);
	QPoint lastMousePos;
	void scaleAll(double sx, double sy, QColor color, int algType);
	void reflectByX(QColor color, int algType);
	void reflectByY(QColor color, int algType);
	void drawCurrentObject(QColor color, int algType, bool fillEnabled = false, int curveMode = -1);
	void shearX(double x, QColor color, int algType);
	QPoint getIntersection(QPoint S, QPoint V, int edge, int limit);
	void clipLineCyrusBeck(int xMin, int yMin, int xMax, int yMax, int algType, QColor color);
	void clipPolygonSH(int xMin, int yMin, int xMax, int yMax, int algType, QColor color);
	void fillPolygonScanLine(QColor color);
	void fillTriangle(QPoint A, QPoint B, QPoint C, QColor colA, QColor colB, QColor colC, bool useBarycentric);
	void drawFerguson(const QVector<QPoint>& pts, QColor color);
	void drawBezierDeCasteljau(const QVector<QPoint>& pts, QColor color);
	void drawCoonsBSpline(const QVector<QPoint>& pts, QColor color);


	//3D part
	struct Point3D {
		double x, y, z;
	};

	struct Triangle {
		int a, b, c;
	};

	struct Cube {
		QVector<Point3D> points; //->vsetky vrcholy
		QVector<Triangle> triangles;
	};

	void creatCube(double k, Cube& cube);
	void drawCube(const Cube& cube, QColor color);

	void saveCubeToVTK(const Cube& cube, const QString& filename);
	void setCube3D(double k);
	void saveCurrentCubeToVTK(const QString& filename);
	bool loadCubeFromVTK(const QString& filename);
	bool saveCurrentModelToVTK(const QString& filename);
	bool loadModelFromVTK(const QString& filename);

	Cube currentCube;
	bool hasCube3D = false;

	void creatSphereUV(double r, int vert, int horiz, Cube& sphere);
	void setSphere3D(double r, int horiz, int vert);

	double dot3D(const Point3D& a, const Point3D& b);
	Point3D vect(const Point3D& a, const Point3D& b);
	void creatCameraBasis(double theta, double phi, Point3D& n, Point3D& u, Point3D& v);
	

public slots:
	void paintEvent(QPaintEvent* event) Q_DECL_OVERRIDE;
};
