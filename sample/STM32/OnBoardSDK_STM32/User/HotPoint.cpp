#include "HotPoint.h"

extern CoreAPI *coreApi;
HotPoint hotpoint(coreApi);
GPSPositionData myGPSData;
HotPointData myHotPointData;

void tryHotpoint()
{
	 
	myGPSData.altitude = 50;
	myGPSData.latitude = coreApi->getBroadcastData().pos.latitude;
	myGPSData.longitude = coreApi->getBroadcastData().pos.longitude;
	
	hotpoint.setHotPoint(myGPSData);
	hotpoint.setPalstance(15);
	hotpoint.setRadius(30);
	hotpoint.start();
}
