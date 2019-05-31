/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject {

	SBKStoreURLBagContext* _bagContext;

}

@property (nonatomic,readonly) SBKStoreURLBagContext * bagContext;              //@synthesize bagContext=_bagContext - In the implementation block
-(void)timeout;
-(void)cancel;
-(SBKStoreURLBagContext *)bagContext;
-(id)initWithBagContext:(id)arg1 ;
@end

