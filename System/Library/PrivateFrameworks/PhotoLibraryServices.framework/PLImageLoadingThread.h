/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSMutableDictionary, NSObject, NSMutableArray, PLPhotoLibrary, PLImageCache;

@interface PLImageLoadingThread : NSObject {

	BOOL _running;
	BOOL _paused;
	BOOL _canceled;
	NSMutableSet* _queues;
	NSMutableDictionary* _requestsByKey;
	NSObject*<OS_dispatch_queue> _isolation;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _highestPriorityQueue;
	NSMutableArray* _highestPriorityRequests;
	NSObject*<OS_dispatch_queue> _highPriorityQueue;
	NSMutableArray* _highPriorityRequests;
	NSObject*<OS_dispatch_queue> _normalPriorityQueue;
	NSMutableArray* _normalPriorityRequests;
	PLPhotoLibrary* _library;
	PLImageCache* _weak_cache;

}
-(void)dealloc;
-(void)_start;
-(void)stop;
-(void)resume;
-(void)pause;
-(id)initWithImageCache:(id)arg1 ;
-(void)cacheWasDeallocated;
-(id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)addImageLoadingQueue:(id)arg1 ;
-(void)removeImageLoadingQueue:(id)arg1 ;
-(void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3 ;
-(void)_setImageCache:(id)arg1 ;
-(id)_imageCache;
-(BOOL)_dequeueRequest:(id)arg1 ;
-(void)_requeueRequest:(id)arg1 oldPriority:(int)arg2 ;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_serviceRequestFrom:(id)arg1 ;
-(void)_serviceRequest:(id)arg1 ;
@end

