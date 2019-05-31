/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLResourceTransferTask, NSMutableDictionary, NSDate;

@interface PLCloudPendingResourceTask : NSObject {

	CPLResourceTransferTask* _transferTask;
	NSMutableDictionary* _pendingTasks;
	NSDate* _lastUpdated;
	BOOL _completed;
	BOOL _transferTaskRemoved;
	BOOL _highPriority;
	BOOL _transferStarted;
	float _lastReportedProgress;

}

@property (nonatomic,readonly) float lastReportedProgress;                           //@synthesize lastReportedProgress=_lastReportedProgress - In the implementation block
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (nonatomic,readonly) BOOL transferStarted;                                 //@synthesize transferStarted=_transferStarted - In the implementation block
-(id)lastUpdated;
-(void)dealloc;
-(BOOL)isHighPriority;
-(void)setTransferTask:(id)arg1 ;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 forTaskIdentifier:(id)arg3 highPriority:(BOOL)arg4 ;
-(BOOL)transferStarted;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(void)addProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withTaskIdentifier:(id)arg3 ;
-(void)reportProgress:(float)arg1 ;
-(id)taskIDs;
-(void)reportCompletionWithError:(id)arg1 ;
-(void)keepAlive;
-(float)lastReportedProgress;
@end
