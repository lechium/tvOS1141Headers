/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	/*^block*/id _archiveRecordsCompletionBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrors;

}

@property (nonatomic,retain) NSMutableDictionary * perItemErrors;              //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                             //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
@property (nonatomic,copy) id archiveRecordsCompletionBlock;                   //@synthesize archiveRecordsCompletionBlock=_archiveRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)archiveRecordsCompletionBlock;
-(NSMutableDictionary *)perItemErrors;
-(void)setArchiveRecordsCompletionBlock:(id)arg1 ;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(id)recordArchivedBlock;
-(id)initWithRecordIDs:(id)arg1 ;
@end

