/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKAsynchronousOperation.h>

@class NSOperation;

@interface TVCKAwaitRentalsUpdateOperation : TVCKAsynchronousOperation {

	NSOperation* _requestSuccessOperation;
	NSOperation* _requestFailureOperation;
	NSOperation* _requestTimeoutOperation;

}

@property (retain) NSOperation * requestSuccessOperation;              //@synthesize requestSuccessOperation=_requestSuccessOperation - In the implementation block
@property (retain) NSOperation * requestFailureOperation;              //@synthesize requestFailureOperation=_requestFailureOperation - In the implementation block
@property (retain) NSOperation * requestTimeoutOperation;              //@synthesize requestTimeoutOperation=_requestTimeoutOperation - In the implementation block
-(void)cancel;
-(NSOperation *)requestSuccessOperation;
-(NSOperation *)requestFailureOperation;
-(NSOperation *)requestTimeoutOperation;
-(void)setRequestFailureOperation:(NSOperation *)arg1 ;
-(void)setRequestSuccessOperation:(NSOperation *)arg1 ;
-(void)setRequestTimeoutOperation:(NSOperation *)arg1 ;
-(void)_cleanupOperationsAndFinishExecutionIfPossible;
-(void)executionDidBegin;
@end
