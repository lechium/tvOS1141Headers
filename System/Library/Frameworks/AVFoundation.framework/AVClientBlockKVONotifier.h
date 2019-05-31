/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKVONotifier.h>
#import <AVFoundation/AVKVOIntrospection.h>

@class NSObject, AVCallbackContextRegistry, NSString;

@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection> {

	AVCallbackContextRegistry* _callbackContextRegistry;
	void* _callbackContextToken;
	NSObject* _observer;
	NSObject* _object;
	NSString* _keyPath;
	unsigned long long _options;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject * observedObject; 
-(void)finalize;
-(void)cancelCallbacks;
-(id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(NSObject *)observedObject;
@end

