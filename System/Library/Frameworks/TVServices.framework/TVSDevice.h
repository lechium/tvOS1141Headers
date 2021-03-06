/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@interface TVSDevice : NSObject
+(BOOL)runningAnInternalBuild;
+(id)uniqueID;
+(id)systemVersion;
+(id)systemReleaseType;
+(id)modelNumber;
+(id)getMobileGestaltString:(CFStringRef)arg1 ;
+(id)deviceName;
+(id)systemBuildVersion;
+(id)productType;
+(id)serialNumber;
+(id)regionInfo;
+(id)getMobileGestaltData:(CFStringRef)arg1 ;
+(id)marketingPartNumber;
+(id)HDMIFirmwareVersion;
+(BOOL)getMobileGestaltBoolean:(CFStringRef)arg1 ;
+(unsigned long long)_totalDiskCapacity;
+(unsigned long long)getMobileGestaltUnsignedLongLong:(CFStringRef)arg1 ;
+(id)inverseUniqueID;
+(id)bonjourID;
+(BOOL)supportsBluetoothLECapablity;
+(BOOL)supportsApplicationStorage;
+(BOOL)shouldEnforceBluetoothBandwidthLimits;
+(BOOL)runningACustomerBuild;
+(unsigned long long)applicationCapacity;
+(unsigned long long)deviceCapacity;
+(BOOL)isActivated;
+(BOOL)supports1080p;
+(id)userDeviceName;
+(BOOL)supportsUHDAndHDR;
+(BOOL)supportsTouchRemote;
+(id)uniqueIDData;
+(id)configurationInfo;
@end

