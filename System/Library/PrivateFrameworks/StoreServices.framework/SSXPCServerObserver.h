/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSXPCServerObserver : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic) id observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end

