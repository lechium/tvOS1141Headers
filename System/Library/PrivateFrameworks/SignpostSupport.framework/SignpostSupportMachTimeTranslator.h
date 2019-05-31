/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface SignpostSupportMachTimeTranslator : NSObject {

	BOOL _isMonitoringSleepWake;
	NSMutableArray* _translationRanges;
	NSMutableArray* _startMachAbsoluteTimes;
	NSMutableArray* _startMachContinuousTimes;
	unsigned long long _maxEntries;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,readonly) NSMutableArray * translationRanges;                           //@synthesize translationRanges=_translationRanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachAbsoluteTimes;                      //@synthesize startMachAbsoluteTimes=_startMachAbsoluteTimes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * startMachContinuousTimes;                    //@synthesize startMachContinuousTimes=_startMachContinuousTimes - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntries;                                  //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (assign) BOOL isMonitoringSleepWake;                                               //@synthesize isMonitoringSleepWake=_isMonitoringSleepWake - In the implementation block
@property (nonatomic,readonly) BOOL containsContinuousTimeJumps; 
-(id)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1 ;
-(NSMutableArray *)translationRanges;
-(id)serializableDictionaryRepresentation;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(NSMutableArray *)startMachAbsoluteTimes;
-(NSMutableArray *)startMachContinuousTimes;
-(BOOL)containsContinuousTimeJumps;
-(void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)arg1 machContinuousTime:(unsigned long long)arg2 ;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isMonitoringSleepWake;
-(void)setIsMonitoringSleepWake:(BOOL)arg1 ;
-(unsigned long long)maxEntries;
-(void)setMaxEntries:(unsigned long long)arg1 ;
@end

