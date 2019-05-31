/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject {

	double _expirationTime;
	ICURLBag* _urlBag;

}

@property (assign,nonatomic) double expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
@property (retain) ICURLBag * urlBag;                            //@synthesize urlBag=_urlBag - In the implementation block
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(ICURLBag *)urlBag;
-(id)initWithURLBag:(id)arg1 expirationTime:(double)arg2 ;
-(void)setUrlBag:(ICURLBag *)arg1 ;
@end
