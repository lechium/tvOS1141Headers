/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload {

	NSData* _attestation;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
+(id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2 ;
+(id)authInfoResultWithAttestation:(id)arg1 ;
-(id)generatePayload;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
@end

