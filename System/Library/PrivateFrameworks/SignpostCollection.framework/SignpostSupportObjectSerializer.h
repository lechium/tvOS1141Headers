/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, SignpostSupportObjectExtractor;

@interface SignpostSupportObjectSerializer : NSObject {

	unsigned long long _maxBatchSize;
	unsigned long long _maxBytesSize;
	/*^block*/id _serializedSignpostEventBlock;
	/*^block*/id _serializedLogMessageBlock;
	NSMutableArray* _outstandingSignpostObjects;
	NSMutableArray* _outstandingLogMessage;
	SignpostSupportObjectExtractor* _extractor;

}

@property (nonatomic,retain) NSMutableArray * outstandingSignpostObjects;              //@synthesize outstandingSignpostObjects=_outstandingSignpostObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingLogMessage;                   //@synthesize outstandingLogMessage=_outstandingLogMessage - In the implementation block
@property (nonatomic,retain) SignpostSupportObjectExtractor * extractor;               //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchSize;                          //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesSize;                          //@synthesize maxBytesSize=_maxBytesSize - In the implementation block
@property (nonatomic,copy) id serializedSignpostEventBlock;                            //@synthesize serializedSignpostEventBlock=_serializedSignpostEventBlock - In the implementation block
@property (nonatomic,copy) id serializedLogMessageBlock;                               //@synthesize serializedLogMessageBlock=_serializedLogMessageBlock - In the implementation block
+(BOOL)serializeSignpostDataToPath:(id)arg1 LogArchivePath:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 errorOut:(id*)arg5 ;
-(id)init;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(void)setExtractor:(SignpostSupportObjectExtractor *)arg1 ;
-(SignpostSupportObjectExtractor *)extractor;
-(unsigned long long)maxBatchSize;
-(unsigned long long)maxBytesSize;
-(id)_dataArrayForSignpostSupportObjectArray:(id)arg1 errorOut:(id*)arg2 ;
-(id)serializedSignpostEventBlock;
-(id)serializedLogMessageBlock;
-(BOOL)_hasProcessingBlocks;
-(id)_sanityCheckParameters;
-(NSMutableArray *)outstandingSignpostObjects;
-(NSMutableArray *)outstandingLogMessage;
-(void)setOutstandingSignpostObjects:(NSMutableArray *)arg1 ;
-(void)setOutstandingLogMessage:(NSMutableArray *)arg1 ;
-(void)setSerializedSignpostEventBlock:(id)arg1 ;
-(BOOL)serializeLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id*)arg4 ;
-(BOOL)serializeNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id*)arg2 ;
-(void)setMaxBytesSize:(unsigned long long)arg1 ;
-(void)setSerializedLogMessageBlock:(id)arg1 ;
@end
