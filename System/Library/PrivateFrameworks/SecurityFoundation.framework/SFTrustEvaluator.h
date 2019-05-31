/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFTrustPolicy, SFRevocationPolicy, NSArray;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {

	id _trustEvaluatorInternal;
	BOOL _allowCertificateFetching;
	BOOL _trustSystemAnchorCertificates;
	SFTrustPolicy* _trustPolicy;
	SFRevocationPolicy* _revocationPolicy;
	NSArray* _applicationAnchorCertificates;

}

@property (nonatomic,copy) SFTrustPolicy * trustPolicy;                          //@synthesize trustPolicy=_trustPolicy - In the implementation block
@property (nonatomic,copy) SFRevocationPolicy * revocationPolicy;                //@synthesize revocationPolicy=_revocationPolicy - In the implementation block
@property (nonatomic,copy) NSArray * applicationAnchorCertificates;              //@synthesize applicationAnchorCertificates=_applicationAnchorCertificates - In the implementation block
@property (assign,nonatomic) BOOL allowCertificateFetching;                      //@synthesize allowCertificateFetching=_allowCertificateFetching - In the implementation block
@property (assign,nonatomic) BOOL trustSystemAnchorCertificates;                 //@synthesize trustSystemAnchorCertificates=_trustSystemAnchorCertificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFTrustPolicy *)trustPolicy;
-(SFRevocationPolicy *)revocationPolicy;
-(NSArray *)applicationAnchorCertificates;
-(id)initWithTrustPolicy:(id)arg1 ;
-(id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 ;
-(id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(BOOL)arg4 trustSystemAnchorCertificates:(BOOL)arg5 ;
-(void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)setTrustPolicy:(SFTrustPolicy *)arg1 ;
-(void)setRevocationPolicy:(SFRevocationPolicy *)arg1 ;
-(void)setApplicationAnchorCertificates:(NSArray *)arg1 ;
-(BOOL)allowCertificateFetching;
-(void)setAllowCertificateFetching:(BOOL)arg1 ;
-(BOOL)trustSystemAnchorCertificates;
-(void)setTrustSystemAnchorCertificates:(BOOL)arg1 ;
@end

