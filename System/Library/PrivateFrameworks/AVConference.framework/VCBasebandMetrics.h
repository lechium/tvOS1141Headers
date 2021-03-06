/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCBasebandMetrics : NSObject {

	SCD_Struct_VC60 _lastBasebandNotification;
	double _bdcd;
	double _normalizedBDCD;
	double _normalizedDelay;
	BOOL _isBDCDListReady;
	SCD_Struct_VC61 _bdcdList;
	SCD_Struct_VC62 _infoList;
	unsigned _targetBitrate;
	unsigned _txBitrate;
	unsigned _averageBitrate;
	unsigned _previousAverageBitrate;
	unsigned _averageBitrateLong;
	double _expectedQueuingDelay;
	double _expectedQueuingDelayLong;
	BOOL _isTargetBitrateStabilized;
	BOOL _resetAverageBitrateLong;
	void* _logBasebandDump;

}

@property (assign,nonatomic) unsigned targetBitrate;                      //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) BOOL isTargetBitrateStabilized;              //@synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized - In the implementation block
-(unsigned)targetBitrate;
-(void)setIsTargetBitrateStabilized:(BOOL)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)enableBasebandLogDump:(void*)arg1 ;
-(void)addInfoListWithNotificationArrivalTime:(double)arg1 transmittedBytes:(unsigned)arg2 ;
-(void)calculateBitratesAndDelays:(unsigned)arg1 totalQueueDepth:(unsigned)arg2 ;
-(void)normalizeBDCD:(double)arg1 ;
-(void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3 ;
-(void)resetBDCDList;
-(SCD_Struct_AV10)getBasebandMetricsWithNotification:(SCD_Struct_VC63*)arg1 ;
-(BOOL)isTargetBitrateStabilized;
@end

