/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, ICRequestContext;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying> {

	BOOL _skippedRentalCheckout;
	BOOL _ITunesStoreRequest;
	BOOL _shouldIncludeDeviceGUID;
	NSURL* _certificateURL;
	NSString* _contentURI;
	NSURL* _keyServerURL;
	long long _leaseActionType;
	ICRequestContext* _requestContext;
	long long _rentalID;
	long long _qualityOfService;
	/*^block*/id _serverPlaybackContextDataCreationHandler;

}

@property (nonatomic,copy) NSURL * certificateURL;                                             //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSString * contentURI;                                              //@synthesize contentURI=_contentURI - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                               //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,nonatomic) long long leaseActionType;                                        //@synthesize leaseActionType=_leaseActionType - In the implementation block
@property (nonatomic,copy) ICRequestContext * requestContext;                                  //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long rentalID;                                               //@synthesize rentalID=_rentalID - In the implementation block
@property (assign,nonatomic) BOOL skippedRentalCheckout;                                       //@synthesize skippedRentalCheckout=_skippedRentalCheckout - In the implementation block
@property (assign,getter=isITunesStoreRequest,nonatomic) BOOL ITunesStoreRequest;              //@synthesize ITunesStoreRequest=_ITunesStoreRequest - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                       //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id serverPlaybackContextDataCreationHandler;                        //@synthesize serverPlaybackContextDataCreationHandler=_serverPlaybackContextDataCreationHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeDeviceGUID;                                     //@synthesize shouldIncludeDeviceGUID=_shouldIncludeDeviceGUID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setRentalID:(long long)arg1 ;
-(BOOL)skippedRentalCheckout;
-(NSURL *)certificateURL;
-(BOOL)isITunesStoreRequest;
-(void)setServerPlaybackContextDataCreationHandler:(id)arg1 ;
-(void)setContentURI:(NSString *)arg1 ;
-(NSString *)contentURI;
-(long long)leaseActionType;
-(id)serverPlaybackContextDataCreationHandler;
-(BOOL)shouldIncludeDeviceGUID;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(void)setRequestContext:(ICRequestContext *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(NSURL *)keyServerURL;
-(long long)rentalID;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)setSkippedRentalCheckout:(BOOL)arg1 ;
-(ICRequestContext *)requestContext;
-(void)setShouldIncludeDeviceGUID:(BOOL)arg1 ;
-(void)setLeaseActionType:(long long)arg1 ;
-(void)configureUsingAssetResourceLoadingRequest:(id)arg1 ;
-(long long)qualityOfService;
@end

