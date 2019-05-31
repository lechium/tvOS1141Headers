/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMapTable, NSMutableDictionary, NSObject;

@interface VNTrackerManager : NSObject {

	NSDictionary* _trackerTypeToClassDictionary;
	NSMapTable* _trackerClassToNameMapTable;
	NSMutableDictionary* _liveTrackerCounter;
	NSObject*<OS_dispatch_queue> _trackingProcessingQueue;
	NSObject*<OS_dispatch_queue> _trackersCollectionManagementQueue;
	NSDictionary* _liveTrackerCounterLimit;
	NSMutableDictionary* _trackers;

}
+(id)manager;
+(void)releaseAllTrackers;
+(void)releaseManager;
-(id)init;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)releaseTracker:(id)arg1 ;
-(id)_getTracker:(id)arg1 ;
-(id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(long long)_maximumTrackersOfType:(id)arg1 ;
@end

