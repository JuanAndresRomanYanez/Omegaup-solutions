#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
static const double factorial_cache[99] = {
	1, 			  1, 			2,
	6, 			  24, 			120,
	720, 		  5040, 		40320,
	362880, 	  3.6288e+006, 	3.99168e+007,
	4.79002e+008, 6.22702e+009, 8.71783e+010,
	1.30767e+012, 2.09228e+013, 3.55687e+014,
	6.40237e+015, 1.21645e+017, 2.4329e+018,
	5.10909e+019, 1.124e+021, 	2.5852e+022,
	6.20448e+023, 1.55112e+025, 4.03291e+026,
	1.08889e+028, 3.04888e+029, 8.84176e+030,
	2.65253e+032, 8.22284e+033, 2.63131e+035,
	8.68332e+036, 2.95233e+038, 1.03331e+040,
	3.71993e+041, 1.37638e+043, 5.23023e+044,
	2.03979e+046, 8.15915e+047, 3.34525e+049,
	1.40501e+051, 6.04153e+052, 2.65827e+054,
	1.19622e+056, 5.50262e+057, 2.58623e+059,
	1.24139e+061, 6.08282e+062, 3.04141e+064,
	1.55112e+066, 8.06582e+067, 4.27488e+069,
	2.30844e+071, 1.26964e+073, 7.10999e+074,
	4.05269e+076, 2.35056e+078, 1.38683e+080,
	8.32099e+081, 5.0758e+083, 	3.147e+085,
	1.98261e+087, 1.26887e+089, 8.24765e+090,
	5.44345e+092, 3.64711e+094, 2.48004e+096,
	1.71122e+098, 1.19786e+100, 8.50479e+101,
	6.12345e+103, 4.47012e+105, 3.30789e+107,
	2.48091e+109, 1.88549e+111, 1.45183e+113,
	1.13243e+115, 8.94618e+116, 7.15695e+118,
	5.79713e+120, 4.75364e+122, 3.94552e+124,
	3.31424e+126, 2.8171e+128, 	2.42271e+130,
	2.10776e+132, 1.85483e+134, 1.6508e+136,
	1.48572e+138, 1.352e+140, 	1.24384e+142,
	1.15677e+144, 1.08737e+146, 1.033e+148,
	9.91678e+149, 9.61928e+151, 9.42689e+153
	};
int main(){
    optimizar_io
    cin>>n;
    cout<<factorial_cache[n];
}
