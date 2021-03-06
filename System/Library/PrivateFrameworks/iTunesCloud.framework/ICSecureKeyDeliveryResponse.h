/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreDialogResponse, NSError, NSDate, NSData;

@interface ICSecureKeyDeliveryResponse : NSObject {

	ICStoreDialogResponse* _dialog;
	NSError* _serverError;
	NSDate* _rentalExpirationDate;
	NSDate* _rentalPlaybackStartDate;
	NSDate* _renewalDate;
	NSData* _serverPlaybackContextData;
	NSData* _contentKeyContextData;

}

@property (nonatomic,copy) ICStoreDialogResponse * dialog;                  //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSError * serverError;                           //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,copy) NSDate * rentalExpirationDate;                   //@synthesize rentalExpirationDate=_rentalExpirationDate - In the implementation block
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate;                //@synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate - In the implementation block
@property (nonatomic,copy) NSDate * renewalDate;                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,copy) NSData * serverPlaybackContextData;              //@synthesize serverPlaybackContextData=_serverPlaybackContextData - In the implementation block
@property (nonatomic,copy) NSData * contentKeyContextData;                  //@synthesize contentKeyContextData=_contentKeyContextData - In the implementation block
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSData *)contentKeyContextData;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(void)setContentKeyContextData:(NSData *)arg1 ;
-(NSData *)serverPlaybackContextData;
-(void)setServerPlaybackContextData:(NSData *)arg1 ;
-(void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2 ;
-(NSError *)serverError;
-(void)setServerError:(NSError *)arg1 ;
-(ICStoreDialogResponse *)dialog;
-(void)setDialog:(ICStoreDialogResponse *)arg1 ;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
@end

