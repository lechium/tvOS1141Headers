/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying> {

	NSURL* _beginLeaseURL;
	NSURL* _getAssetURL;
	long long _leaseType;
	NSURL* _provisionMachineURL;
	NSURL* _refreshLeaseURL;
	NSString* _storeFrontSuffix;
	NSURL* _syncMachineURL;
	NSURL* _certificateURL;
	NSURL* _pastisCertificateURL;
	NSURL* _pastisKeyServerURL;

}

@property (nonatomic,readonly) long long leaseType;                   //@synthesize leaseType=_leaseType - In the implementation block
@property (nonatomic,copy) NSURL * beginLeaseURL;                     //@synthesize beginLeaseURL=_beginLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * certificateURL;                    //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSURL * getAssetURL;                       //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * refreshLeaseURL;                   //@synthesize refreshLeaseURL=_refreshLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * pastisCertificateURL;              //@synthesize pastisCertificateURL=_pastisCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * pastisKeyServerURL;                //@synthesize pastisKeyServerURL=_pastisKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * provisionMachineURL;               //@synthesize provisionMachineURL=_provisionMachineURL - In the implementation block
@property (nonatomic,copy) NSURL * syncMachineURL;                    //@synthesize syncMachineURL=_syncMachineURL - In the implementation block
@property (nonatomic,copy) NSString * storeFrontSuffix;               //@synthesize storeFrontSuffix=_storeFrontSuffix - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)certificateURL;
-(long long)leaseType;
-(NSURL *)beginLeaseURL;
-(NSURL *)refreshLeaseURL;
-(id)initWithCertificateURL:(id)arg1 leaseType:(long long)arg2 leaseURL:(id)arg3 pastisKeyServerURL:(id)arg4 provisionMachineURL:(id)arg5 storeFrontSuffix:(id)arg6 syncMachineURL:(id)arg7 ;
-(id)initWithURLBagDictionary:(id)arg1 leaseType:(long long)arg2 ;
-(void)setBeginLeaseURL:(NSURL *)arg1 ;
-(void)setProvisionMachineURL:(NSURL *)arg1 ;
-(void)setRefreshLeaseURL:(NSURL *)arg1 ;
-(void)setSyncMachineURL:(NSURL *)arg1 ;
-(void)setPastisKeyServerURL:(NSURL *)arg1 ;
-(void)setPastisCertificateURL:(NSURL *)arg1 ;
-(id)initWithCertificateURL:(id)arg1 leaseURL:(id)arg2 pastisKeyServerURL:(id)arg3 provisionMachineURL:(id)arg4 storeFrontSuffix:(id)arg5 syncMachineURL:(id)arg6 ;
-(NSURL *)provisionMachineURL;
-(NSURL *)syncMachineURL;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(NSURL *)pastisKeyServerURL;
-(NSURL *)pastisCertificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setGetAssetURL:(NSURL *)arg1 ;
-(NSURL *)getAssetURL;
@end

