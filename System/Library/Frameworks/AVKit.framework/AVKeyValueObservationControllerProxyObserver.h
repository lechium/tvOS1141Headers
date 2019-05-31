/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet;

@interface AVKeyValueObservationControllerProxyObserver : NSObject {

	id _retainedObservedObject;
	id _unsafeUnretainedObservedObject;
	void* _context;
	NSObject*<OS_dispatch_queue> _proxyObserverIvarAccessQueue;
	NSString* _token;
	unsigned long long _options;
	id _observer;
	NSSet* _keyPaths;
	/*^block*/id _changesBlock;

}

@property (nonatomic,readonly) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) id observedObject; 
@property (nonatomic,__weak,readonly) id observer;                      //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSSet * keyPaths;                        //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,readonly) id changesBlock;                         //@synthesize changesBlock=_changesBlock - In the implementation block
-(unsigned long long)options;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)token;
-(id)observer;
-(void)stopObserving;
-(void)startObserving;
-(id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(BOOL)arg4 options:(unsigned long long)arg5 changesBlock:(/*^block*/id)arg6 ;
-(void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)changesBlock;
-(NSSet *)keyPaths;
-(id)observedObject;
@end
