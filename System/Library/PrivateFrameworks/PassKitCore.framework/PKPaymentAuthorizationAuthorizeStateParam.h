/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData;

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam {

	NSData* _credential;
	NSData* _nonceData;

}

@property (nonatomic,retain) NSData * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSData * nonceData;               //@synthesize nonceData=_nonceData - In the implementation block
+(id)paramWithCredential:(id)arg1 ;
+(id)paramWithCredential:(id)arg1 nonce:(id)arg2 ;
-(NSData *)credential;
-(id)description;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
-(void)setCredential:(NSData *)arg1 ;
@end

