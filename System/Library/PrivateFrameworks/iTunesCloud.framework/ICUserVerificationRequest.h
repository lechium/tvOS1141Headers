/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying> {

	long long _qualityOfService;
	ICStoreRequestContext* _storeRequestContext;
	ICUserVerificationContext* _verificationContext;

}

@property (assign,nonatomic) long long qualityOfService;                                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;                           //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy,readonly) ICUserVerificationContext * verificationContext;              //@synthesize verificationContext=_verificationContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(ICUserVerificationContext *)verificationContext;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithVerificationContext:(id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(long long)qualityOfService;
@end

