/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
@class VSIdentityProvider, NSArray, NSDictionary;

@interface VSSetupFlowConfiguration : NSObject {

	BOOL _shouldSkipSetupEntirely;
	BOOL _shouldOfferAuthenticationFlow;
	BOOL _shouldOfferSoleAuthenticationFlow;
	BOOL _canShowSupportedAppsButton;
	VSIdentityProvider* _identityProvider;
	NSArray* _bundlesIDsToConsent;
	NSDictionary* _vouchersByBundleID;

}

@property (assign,nonatomic) BOOL shouldSkipSetupEntirely;                        //@synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferAuthenticationFlow;                  //@synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSoleAuthenticationFlow;              //@synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;               //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSArray * bundlesIDsToConsent;                         //@synthesize bundlesIDsToConsent=_bundlesIDsToConsent - In the implementation block
@property (nonatomic,copy) NSDictionary * vouchersByBundleID;                     //@synthesize vouchersByBundleID=_vouchersByBundleID - In the implementation block
@property (assign,nonatomic) BOOL canShowSupportedAppsButton;                     //@synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(BOOL)shouldSkipSetupEntirely;
-(BOOL)shouldOfferSoleAuthenticationFlow;
-(BOOL)canShowSupportedAppsButton;
-(NSArray *)bundlesIDsToConsent;
-(BOOL)shouldOfferAuthenticationFlow;
-(NSDictionary *)vouchersByBundleID;
-(void)setShouldSkipSetupEntirely:(BOOL)arg1 ;
-(void)setShouldOfferSoleAuthenticationFlow:(BOOL)arg1 ;
-(void)setVouchersByBundleID:(NSDictionary *)arg1 ;
-(void)setBundlesIDsToConsent:(NSArray *)arg1 ;
-(void)setShouldOfferAuthenticationFlow:(BOOL)arg1 ;
-(void)setCanShowSupportedAppsButton:(BOOL)arg1 ;
@end

