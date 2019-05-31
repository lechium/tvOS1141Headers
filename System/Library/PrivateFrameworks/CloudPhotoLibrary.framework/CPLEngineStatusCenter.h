/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSDate, NSMutableSet, NSMutableDictionary, NSString, CPLPlatformObject;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {

	unsigned long long _currentGeneration;
	NSDate* _transactionStartDate;
	NSMutableSet* _persistedIdentifiers;
	NSMutableDictionary* _pendingTransientStatuses;
	NSMutableSet* _pendingDeletedTransientStatuses;
	NSMutableDictionary* _transientStatuses;

}

@property (nonatomic,readonly) BOOL hasStatusChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(BOOL)discardNotificationForRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)notifyStatusForRecordHasChanged:(id)arg1 persist:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)hasStatusChanges;
-(void)_fillStatus:(id)arg1 ;
-(id)_statusFromCachesWithRecordIdentifier:(id)arg1 ;
-(void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(BOOL)arg4 isInIDMapping:(BOOL)arg5 ;
-(id)statusChanges;
-(id)statusesForRecordsWithIdentifiers:(id)arg1 ;
-(BOOL)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2 ;
-(id)recordForStatusWithIdentifier:(id)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
@end

