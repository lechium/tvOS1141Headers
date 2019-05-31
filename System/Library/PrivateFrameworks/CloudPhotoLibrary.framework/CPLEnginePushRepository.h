/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLBatchExtractionStrategyStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, CPLBatchExtractionStrategy, NSString, NSObject, NSDate, CPLPlatformObject;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage> {

	NSMutableDictionary* _propertiesPerClass;
	CPLBatchExtractionStrategy* _extractionStrategy;
	NSString* _lastStrategyName;
	NSObject*<OS_dispatch_queue> _uploadRateQueue;
	NSDate* _lastUploadRateUpdateDate;
	double _lastApproximativeUploadRate;

}

@property (nonatomic,readonly) unsigned long long countOfChanges; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain) CPLBatchExtractionStrategy * extractionStrategy; 
@property (nonatomic,readonly) unsigned long long maximumResourceSizePerBatch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)deleteAllChangesWithError:(id*)arg1 ;
-(id)storedExtractedBatch;
-(BOOL)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id*)arg2 error:(id*)arg3 ;
-(BOOL)storeExtractedBatch:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOfChanges;
-(id)_propertiesForChange:(id)arg1 ;
-(BOOL)hasSomeChangeWithIdentifier:(id)arg1 ;
-(BOOL)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(BOOL*)arg3 error:(id*)arg4 ;
-(id)_completeChange:(id)arg1 ;
-(unsigned long long)maximumResourceSizePerBatch;
-(id)changeWithIdentifier:(id)arg1 ;
-(id)allChangesWithClass:(Class)arg1 trashed:(BOOL)arg2 ;
-(id)allChangesWithClass:(Class)arg1 changeType:(unsigned long long)arg2 ;
-(id)allNonDeletedChangesWithClass:(Class)arg1 ;
-(id)allChangesWithClass:(Class)arg1 relatedIdentifier:(id)arg2 ;
-(id)allChangesWithClass:(Class)arg1 secondaryIdentifier:(id)arg2 ;
-(id)allChanges;
-(BOOL)removeChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)discardChangeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)setExtractionStrategy:(CPLBatchExtractionStrategy *)arg1 ;
-(CPLBatchExtractionStrategy *)extractionStrategy;
-(void)updateApproximativeUploadRate:(double)arg1 ;
-(BOOL)hasChanges;
@end

