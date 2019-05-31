/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject {

	long long _linkType;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long linkType;                              //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
@end
