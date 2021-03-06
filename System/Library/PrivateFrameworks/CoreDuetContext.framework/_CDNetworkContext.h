/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDNetworkContext : NSObject
+(id)connectionQualityKey;
+(id)keyPathForWiredConnectionStatus;
+(id)keyPathForWiFiConnectionStatus;
+(id)keyPathForCellConnectionStatus;
+(long long)wifiQuality:(id)arg1 ;
+(long long)wiredQuality:(id)arg1 ;
+(BOOL)inexpensiveNetworkingAvailable:(id)arg1 ;
+(long long)cellQuality:(id)arg1 ;
+(id)interfaceUpKey;
+(id)downloadPowerCostKey;
+(id)uploadPowerCostKey;
+(id)loiKey;
+(id)predictionKey;
+(long long)qualityForPath:(id)arg1 inContext:(id)arg2 ;
+(BOOL)networkingAvailable:(id)arg1 ;
+(BOOL)cellInterfaceUp:(id)arg1 ;
+(long long)cellDownloadCost:(id)arg1 ;
+(long long)cellUploadCost:(id)arg1 ;
@end

