/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject {

	BOOL _succeeded;
	IMRuntimeTest* _test;

}

@property (getter=hasSucceeded) BOOL succeeded;              //@synthesize succeeded=_succeeded - In the implementation block
@property (readonly) IMRuntimeTest * test;                   //@synthesize test=_test - In the implementation block
-(void)start;
-(void)stop;
-(void)setSucceeded:(BOOL)arg1 ;
-(id)initWithTest:(id)arg1 ;
-(void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4 ;
-(IMRuntimeTest *)test;
-(BOOL)hasSucceeded;
@end
