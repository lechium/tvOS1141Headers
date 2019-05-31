/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreNetworkQualityReport : NSObject {

	long long _cellularInstant;
	long long _cellularHistorical;
	long long _wifiInstant;
	long long _wifiHistorical;

}

@property (assign,nonatomic) long long cellularInstant;                 //@synthesize cellularInstant=_cellularInstant - In the implementation block
@property (assign,nonatomic) long long cellularHistorical;              //@synthesize cellularHistorical=_cellularHistorical - In the implementation block
@property (assign,nonatomic) long long wifiInstant;                     //@synthesize wifiInstant=_wifiInstant - In the implementation block
@property (assign,nonatomic) long long wifiHistorical;                  //@synthesize wifiHistorical=_wifiHistorical - In the implementation block
-(void)setCellularInstant:(long long)arg1 ;
-(void)setCellularHistorical:(long long)arg1 ;
-(void)setWifiInstant:(long long)arg1 ;
-(void)setWifiHistorical:(long long)arg1 ;
-(long long)cellularInstant;
-(long long)cellularHistorical;
-(long long)wifiInstant;
-(long long)wifiHistorical;
@end

