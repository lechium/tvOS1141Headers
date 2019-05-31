/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {

	UIKeyboardTaskExecutionContext* _parentExecutionContext;
	/*^block*/id _continuation;
	id _info;
	/*^block*/id _pendingCompletionBlock;
	UIKeyboardTaskQueue* _executionQueue;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,retain) id info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id pendingCompletionBlock;                             //@synthesize pendingCompletionBlock=_pendingCompletionBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)info;
-(void)returnExecutionToParent;
-(id)childWithContinuation:(/*^block*/id)arg1 ;
-(void)transferExecutionToMainThreadWithTask:(/*^block*/id)arg1 ;
-(void)returnExecutionToParentWithInfo:(id)arg1 ;
-(id)pendingCompletionBlock;
-(void)setPendingCompletionBlock:(id)arg1 ;
-(UIKeyboardTaskQueue *)executionQueue;
-(id)initWithParentContext:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)setInfo:(id)arg1 ;
-(id)initWithExecutionQueue:(id)arg1 ;
@end

