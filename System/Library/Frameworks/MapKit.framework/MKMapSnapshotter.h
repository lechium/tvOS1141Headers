/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(id)init;
-(void)cancel;
-(void)dealloc;
-(BOOL)isLoading;
-(id)initWithOptions:(id)arg1 ;
-(void)_cancel;
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_cleanupSnapshotCreator;
-(void)_failWithError:(id)arg1 ;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
-(void)_performSnapshot;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end
