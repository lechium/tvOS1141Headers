/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DSTestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(id)sharedInstance;
+(void)postInteractiveTestEvent:(id)arg1 info:(id)arg2 ;
+(void)postConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
@end

