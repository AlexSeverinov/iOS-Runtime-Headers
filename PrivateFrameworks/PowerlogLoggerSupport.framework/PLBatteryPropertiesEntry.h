/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

@class NSNumber, NSString;

@interface PLBatteryPropertiesEntry : PLEntry {
}

@property(readonly) NSNumber * adapterInfo;
@property(readonly) int batteryTemp;
@property(readonly) double capacity;
@property(readonly) int chargingCurrent;
@property(readonly) NSString * chargingState;
@property(readonly) long chemID;
@property(readonly) NSNumber * connectedStatus;
@property(readonly) int current;
@property(readonly) double currentCapacity;
@property(readonly) int cycleCount;
@property(readonly) int designCapacity;
@property(readonly) BOOL draining;
@property(readonly) long fullAvailableCapacity;
@property(readonly) BOOL fullyCharged;
@property(readonly) BOOL isCharging;
@property(readonly) BOOL isCritical;
@property(readonly) BOOL isPluggedIn;
@property(readonly) double maxCapacity;
@property(readonly) double rawCapacity;
@property(readonly) double rawCurrentCapacity;
@property(readonly) double rawMaxCapacity;
@property(readonly) int voltage;

+ (id)batteryPropertiesEntry;

- (id)adapterInfo;
- (int)batteryTemp;
- (double)capacity;
- (int)chargingCurrent;
- (id)chargingState;
- (long)chemID;
- (id)connectedStatus;
- (int)current;
- (double)currentCapacity;
- (int)cycleCount;
- (void)dealloc;
- (int)designCapacity;
- (BOOL)draining;
- (long)fullAvailableCapacity;
- (BOOL)fullyCharged;
- (id)humanReadableChargingStateFromIORegistryEntryDictionary:(id)arg1;
- (id)init;
- (id)initEntryWithIORegistryEntry:(unsigned int)arg1;
- (BOOL)isCharging;
- (BOOL)isCritical;
- (BOOL)isPluggedIn;
- (double)maxCapacity;
- (double)rawCapacity;
- (double)rawCurrentCapacity;
- (double)rawMaxCapacity;
- (int)voltage;

@end
