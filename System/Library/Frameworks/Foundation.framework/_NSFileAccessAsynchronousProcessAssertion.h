/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BKSProcessAssertion;

@interface _NSFileAccessAsynchronousProcessAssertion : NSObject {

	int _pid;
	NSString* _name;
	BKSProcessAssertion* _assertion;

}

@property (readonly) int PID;              //@synthesize pid=_pid - In the implementation block
-(id)initWithPID:(int)arg1 name:(id)arg2 ;
-(void)beginAssertion;
-(int)PID;
-(void)invalidate;
-(void)dealloc;
@end

