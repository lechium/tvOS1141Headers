/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSIndexExtensionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, _MDIndexExtensionLoader, NSDictionary, NSCondition, NSString;

@interface _MDIndexExtensionManager : NSObject <CSIndexExtensionDelegate> {

	BOOL _isUnderMemoryPressure;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	_MDIndexExtensionLoader* _extensionLoader;
	NSDictionary* _indexExtensionsByBundleID;
	NSObject*<OS_dispatch_queue> _queue;
	NSCondition* _extensionsCondition;
	NSObject*<OS_dispatch_source> _memoryStatusSource;

}

@property (nonatomic,retain) _MDIndexExtensionLoader * extensionLoader;                     //@synthesize extensionLoader=_extensionLoader - In the implementation block
@property (nonatomic,retain) NSDictionary * indexExtensionsByBundleID;                      //@synthesize indexExtensionsByBundleID=_indexExtensionsByBundleID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCondition * extensionsCondition;                             //@synthesize extensionsCondition=_extensionsCondition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryStatusSource;              //@synthesize memoryStatusSource=_memoryStatusSource - In the implementation block
@property (assign) BOOL isUnderMemoryPressure;                                              //@synthesize isUnderMemoryPressure=_isUnderMemoryPressure - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                      //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)fetchFileProviderBundleMap;
-(NSObject*<OS_dispatch_source>)memoryStatusSource;
-(void)_didUpdateMemoryStatus:(unsigned long long)arg1 ;
-(void)setIsUnderMemoryPressure:(BOOL)arg1 ;
-(BOOL)isUnderMemoryPressure;
-(_MDIndexExtensionLoader *)extensionLoader;
-(NSCondition *)extensionsCondition;
-(void)setIndexExtensionsByBundleID:(NSDictionary *)arg1 ;
-(void)_notifyForLoadedExtensions;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(NSDictionary *)indexExtensionsByBundleID;
-(void)loadExtensions;
-(void)_filterExtensionsWithBlock:(/*^block*/id)arg1 ;
-(id)allExtensionsWithBlock:(/*^block*/id)arg1 ;
-(void)_willRunJobWithBundleID:(id)arg1 ;
-(void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(/*^block*/id)arg5 ;
-(void)_didRetryJobWithBundleID:(id)arg1 ;
-(id)anyExtensionWithBlock:(/*^block*/id)arg1 ;
-(void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)loadExtensionsSynchronously;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExtensionLoader:(_MDIndexExtensionLoader *)arg1 ;
-(void)setExtensionsCondition:(NSCondition *)arg1 ;
-(void)setMemoryStatusSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)extensions;
@end

