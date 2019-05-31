/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSYSyncSession;

@interface PSYSyncSessionUpdate : NSObject {

	PSYSyncSession* _originalSession;
	PSYSyncSession* _updatedSession;

}

@property (nonatomic,readonly) PSYSyncSession * originalSession;              //@synthesize originalSession=_originalSession - In the implementation block
@property (nonatomic,readonly) PSYSyncSession * updatedSession;               //@synthesize updatedSession=_updatedSession - In the implementation block
-(void)enumerateChangedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithOriginalSession:(id)arg1 updatedSession:(id)arg2 ;
-(void)enumerateNewlyRunningActivitiesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNewlyCompletedActivitiesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)didUpdateCompleteSyncSession;
-(PSYSyncSession *)originalSession;
-(PSYSyncSession *)updatedSession;
@end

