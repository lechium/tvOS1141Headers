/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSOutputStream.h>

@protocol NSStreamDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSRunLoop, NSObject;

@interface MRAVBufferedOutputStream : NSOutputStream {

	unsigned long long _status;
	id<NSStreamDelegate> _delegate;
	NSMutableDictionary* _properties;
	NSRunLoop* _scheduledRunLoop;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(id)streamError;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)_init;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(void)open;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)notifyDelegateOfStreamEvent:(unsigned long long)arg1 ;
-(id)initToMemory;
@end

