/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TLAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
-(void)_performSynchronousBlockInSerialQueue:(/*^block*/id)arg1 ;
-(void)performAsynchronousBlock:(/*^block*/id)arg1 ;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
@end

