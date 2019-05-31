/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WLKUIMediaEntityTypeExport <JSExport>
@property (nonatomic,readonly) NSString * subtype; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * collectionType; 
@required
+(id)show;
+(id)rental;
+(id)movie;
+(id)episode;
+(id)season;
+(id)homeVideo;
-(NSString *)category;
-(NSString *)subtype;
-(NSString *)collectionType;

@end

