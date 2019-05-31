/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPSecureKeyLoader.h>

@protocol TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling;
@class NSURL, TVPSecureKeyRequest, NSMutableArray, NSDate;

@interface TVPSecureKeyStandardLoader : TVPSecureKeyLoader {

	BOOL _holdKeyResponses;
	BOOL _didSkipRentalCheckout;
	BOOL _includeGUID;
	id<TVPSecureKeyStandardLoaderRequestGenerating> _requestGenerator;
	id<TVPSecureKeyStandardLoaderConnectionHandling> _connectionHandler;
	NSURL* _certificateDataURL;
	NSURL* _keyDataURL;
	TVPSecureKeyRequest* _savedRequestToUseForStopping;
	NSMutableArray* _pendingKeyResponses;
	NSDate* _rentalExpirationDate;

}

@property (nonatomic,retain) NSURL * certificateDataURL;                                                      //@synthesize certificateDataURL=_certificateDataURL - In the implementation block
@property (nonatomic,retain) NSURL * keyDataURL;                                                              //@synthesize keyDataURL=_keyDataURL - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * savedRequestToUseForStopping;                              //@synthesize savedRequestToUseForStopping=_savedRequestToUseForStopping - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingKeyResponses;                                            //@synthesize pendingKeyResponses=_pendingKeyResponses - In the implementation block
@property (nonatomic,retain) NSDate * rentalExpirationDate;                                                   //@synthesize rentalExpirationDate=_rentalExpirationDate - In the implementation block
@property (nonatomic,retain) id<TVPSecureKeyStandardLoaderRequestGenerating> requestGenerator;                //@synthesize requestGenerator=_requestGenerator - In the implementation block
@property (nonatomic,retain) id<TVPSecureKeyStandardLoaderConnectionHandling> connectionHandler;              //@synthesize connectionHandler=_connectionHandler - In the implementation block
@property (assign,nonatomic) BOOL holdKeyResponses;                                                           //@synthesize holdKeyResponses=_holdKeyResponses - In the implementation block
@property (assign,nonatomic) BOOL didSkipRentalCheckout;                                                      //@synthesize didSkipRentalCheckout=_didSkipRentalCheckout - In the implementation block
@property (assign,nonatomic) BOOL includeGUID;                                                                //@synthesize includeGUID=_includeGUID - In the implementation block
+(void)initialize;
-(id)init;
-(void)sendStopRequest;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(NSMutableArray *)pendingKeyResponses;
-(BOOL)includeGUID;
-(BOOL)didSkipRentalCheckout;
-(NSURL *)certificateDataURL;
-(id<TVPSecureKeyStandardLoaderRequestGenerating>)requestGenerator;
-(id<TVPSecureKeyStandardLoaderConnectionHandling>)connectionHandler;
-(id)_assetIdentifierForKeyRequest:(id)arg1 ;
-(TVPSecureKeyRequest *)savedRequestToUseForStopping;
-(void)setSavedRequestToUseForStopping:(TVPSecureKeyRequest *)arg1 ;
-(NSURL *)keyDataURL;
-(id)_bodyJSONDataForRequest:(id)arg1 forceStop:(BOOL)arg2 ;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
-(BOOL)holdKeyResponses;
-(id)initWithCertificateDataURL:(id)arg1 keyDataURL:(id)arg2 ;
-(void)setHoldKeyResponses:(BOOL)arg1 ;
-(void)setRequestGenerator:(id<TVPSecureKeyStandardLoaderRequestGenerating>)arg1 ;
-(void)setConnectionHandler:(id<TVPSecureKeyStandardLoaderConnectionHandling>)arg1 ;
-(void)setDidSkipRentalCheckout:(BOOL)arg1 ;
-(void)setIncludeGUID:(BOOL)arg1 ;
-(void)setCertificateDataURL:(NSURL *)arg1 ;
-(void)setKeyDataURL:(NSURL *)arg1 ;
-(void)setPendingKeyResponses:(NSMutableArray *)arg1 ;
@end

