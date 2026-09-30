#include <stdio.h>

int main(){
	double dsp, dvp, wood;
	printf("Enter density (g/cm3): dsp dvp wood\n");
	scanf_s("%lf %lf %lf",  &dsp, &dvp, &wood);
	double t=1.5, tBW= 0.5, tD = 1;
	double h, w, d;
	printf("Enter sizes (cm): height width depth\n");
	scanf_s("%lf %lf %lf", &h, &w, &d);
	int n = 0;
	double count = 40;
	while (count < h) {
		n++;
		count += 40;
	}
	double vBW, vSIDES, vTAB, vD, vS, mBW, mSIDES, mTAB, mD, mS, M;
	vBW = h * w * tBW;
	vSIDES = h * d * t * 2;
	vTAB = w * d * t * 2;
	vD = h * w * tD;
	vS = d * (w - t*2) * t * n;
	mBW = vBW * dvp;
	mSIDES = vSIDES * dsp;
	mTAB = vTAB * dsp;
	mD = vD * wood;
	mS = vS * dsp;
	M = mBW + mSIDES + mTAB + mD + mS;
	printf("Cabinet mass (g): %lf\n", M);
	return 0;
}