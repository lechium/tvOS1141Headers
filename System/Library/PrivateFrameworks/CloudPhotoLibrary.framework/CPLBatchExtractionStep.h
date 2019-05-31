/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLBatchExtractionStrategyStorage;
@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;

}

@property (nonatomic,retain) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(id)initWithStorage:(id)arg1 ;
-(id)description;
-(void)reset;
-(id)shortDescription;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
-(void)setStorage:(id<CPLBatchExtractionStrategyStorage>)arg1 ;
@end

