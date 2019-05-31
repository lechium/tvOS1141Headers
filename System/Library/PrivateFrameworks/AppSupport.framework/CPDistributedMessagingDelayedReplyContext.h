/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	BOOL _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) BOOL portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(BOOL)arg2 ;
-(void)setReplyPort:(unsigned)arg1 ;
-(BOOL)portPassing;
-(void)setPortPassing:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned)replyPort;
@end
