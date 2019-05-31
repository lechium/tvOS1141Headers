/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, VCRateControlBandwidthEstimator, VCRateControlOWRDEstimator, VCStatisticsHistory, NSObject;

@interface AVCStatisticsCollector : NSObject {

	NSMutableDictionary* _statistics;
	tagVCStatisticsCollection* _statisticsCollection;
	NSMutableDictionary* _statisticChangeHandlerDictionary;
	VCRateControlBandwidthEstimator* _bandwidthEstimator;
	VCRateControlOWRDEstimator* _owrdEstimator;
	VCStatisticsHistory* _history;
	NSObject*<OS_dispatch_queue> _statisticsCollectorQueue;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	unsigned _sharedEstimatedBandwidth;
	unsigned _sharedRemoteEstimatedBandwidth;

}

@property (assign,nonatomic) unsigned radioAccessTechnology;                         //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidth;                    //@synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned sharedRemoteEstimatedBandwidth;              //@synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned)sharedEstimatedBandwidth;
-(void)setVCStatistics:(SCD_Struct_AV10)arg1 ;
-(id)getStatistics:(id)arg1 ;
-(void)addEntriesFromStatistics:(SCD_Struct_AV10)arg1 ;
-(BOOL)addStatisticsHistory:(SCD_Struct_AV10)arg1 ;
-(void)computeOtherStatistics:(SCD_Struct_AV10*)arg1 ;
-(void)computeBWEstimation:(SCD_Struct_AV10*)arg1 ;
-(void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(SCD_Struct_AV10*)arg1 ;
-(void)computeOWRDEstimation:(SCD_Struct_AV10*)arg1 ;
-(void)addPacketLossInfo:(SCD_Struct_AV10*)arg1 ;
-(void)setStatistics:(id)arg1 ;
-(unsigned)radioAccessTechnology;
-(unsigned)sharedRemoteEstimatedBandwidth;
@end

