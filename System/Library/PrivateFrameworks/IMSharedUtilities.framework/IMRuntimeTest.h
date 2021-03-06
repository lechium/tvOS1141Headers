/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject {

	IMRuntimeTestRun* _testRun;
	/*^block*/id _completion;

}

@property (retain) IMRuntimeTestRun * testRun;              //@synthesize testRun=_testRun - In the implementation block
@property (copy) id completion;                             //@synthesize completion=_completion - In the implementation block
-(id)testName;
-(void)tearDown;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(IMRuntimeTestRun *)testRun;
-(Class)testRunClass;
-(void)setTestRun:(IMRuntimeTestRun *)arg1 ;
-(void)finishTestAfterInterval:(double)arg1 ;
-(void)finishTest;
-(void)startTest;
-(void)setUp;
-(void)runTest:(/*^block*/id)arg1 ;
@end

