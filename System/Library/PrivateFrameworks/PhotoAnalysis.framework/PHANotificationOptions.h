/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary, PHAsset;

@interface PHANotificationOptions : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _bodyText;
	NSDate* _deliveryDate;
	NSDate* _expirationDate;
	NSDictionary* _userInfo;
	PHAsset* _keyAsset;
	NSString* _collectionUUID;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                    //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,retain) NSDate * deliveryDate;                  //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSString * collectionUUID;              //@synthesize collectionUUID=_collectionUUID - In the implementation block
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setTitle:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(PHAsset *)keyAsset;
-(NSString *)collectionUUID;
-(NSDate *)deliveryDate;
-(void)setDeliveryDate:(NSDate *)arg1 ;
-(void)setCollectionUUID:(NSString *)arg1 ;
@end

