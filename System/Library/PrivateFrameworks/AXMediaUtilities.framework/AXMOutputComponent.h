/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXMOutputComponent : NSObject {

	long long _componentState;

}

@property (assign,nonatomic) long long componentState;              //@synthesize componentState=_componentState - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(id)description;
-(BOOL)canHandleRequest:(id)arg1 options:(id)arg2 ;
-(void)handleRequest:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setComponentState:(long long)arg1 ;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(long long)componentState;
@end

