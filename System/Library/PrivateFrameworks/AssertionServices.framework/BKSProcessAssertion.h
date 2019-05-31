/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/BKSAssertion.h>

@class NSString;

@interface BKSProcessAssertion : BKSAssertion {

	int _pid;
	NSString* _bundleIdentifier;
	unsigned _flags;
	unsigned _reason;

}

@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) unsigned reason;              //@synthesize reason=_reason - In the implementation block
+(id)NameForReason:(unsigned)arg1 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 pid:(int)arg2 flags:(unsigned)arg3 reason:(unsigned)arg4 name:(id)arg5 withHandler:(/*^block*/id)arg6 acquire:(BOOL)arg7 ;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 acquire:(BOOL)arg6 ;
-(id)_clientQueue_destroyEvent;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 ;
-(id)_clientQueue_createEvent;
-(id)_clientQueue_updateEvent;
-(unsigned)flags;
-(id)init;
-(void)dealloc;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(unsigned)reason;
-(id)initWithBundleIdentifier:(id)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)setFlags:(unsigned)arg1 ;
@end
