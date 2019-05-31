/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationClasses;

}

@property (readonly) NSMutableDictionary * flowControlledOperationClasses;              //@synthesize flowControlledOperationClasses=_flowControlledOperationClasses - In the implementation block
-(id)init;
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationClasses;
-(BOOL)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
-(id)CKStatusReportArray;
@end
