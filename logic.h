void registerDataRefs();
void unregisterDataRefs();
void registerCallbacks();
void unregisterCallbacks();

float sendRequestedDataCallback(float, float, int, void *);
void sendAircraftPacket();
void sendCrashedPacket();
void sendRepositionedAtAirport();

extern int acf_packet_requested;