/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class EAAccessory, EASession, NSRecursiveLock;

@interface EAOutputStream : NSOutputStream {

	id _delegate;
	int _sock;
	EAAccessory* _accessory;
	EASession* _session;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	BOOL _useSocket;
	CFSocketRef _cfSocket;
	BOOL _isOpenCompletedEventSent;
	BOOL _hasSpaceAvailableEventSent;
	BOOL _hasSpaceAvailable;
	BOOL _isAtEndEventSent;
	unsigned long long _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	CFRunLoopSourceRef _socketRunLoopSource;

}
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(BOOL)hasSpaceAvailable;
-(id)streamError;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)close;
-(void)open;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(id)initWithAccessoryWithoutSocket:(id)arg1 forSession:(id)arg2 ;
-(void)endStream;
-(void)_streamWriteable;
@end

