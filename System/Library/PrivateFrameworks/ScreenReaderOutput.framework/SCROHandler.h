/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCROHandlerProtocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {

	NSLock* _lock;
	BOOL isInvalid;
	id _callbackDelegate;

}

@property (assign,nonatomic,__weak) id callbackDelegate;              //@synthesize callbackDelegate=_callbackDelegate - In the implementation block
-(id)init;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(id)callbackDelegate;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(void)setCallbackDelegate:(id)arg1 ;
@end

