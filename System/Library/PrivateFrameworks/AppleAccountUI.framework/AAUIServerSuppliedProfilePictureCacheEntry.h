/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, UIImage, NSString;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {

	NSDate* _expirationDate;
	BOOL _updating;
	UIImage* _picture;
	NSString* _serverCacheTag;

}

@property (nonatomic,retain) UIImage * picture;                    //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (assign,nonatomic) BOOL updating;                        //@synthesize updating=_updating - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
-(id)description;
-(UIImage *)picture;
-(void)setPicture:(UIImage *)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)expired;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)expire;
-(BOOL)updating;
@end

