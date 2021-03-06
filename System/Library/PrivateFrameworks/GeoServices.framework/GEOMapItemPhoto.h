/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol GEOMapItemPhoto <NSObject>
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullPhotoInline; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) double sizeRatio; 
@required
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(id)largestPhoto;
-(NSString *)author;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(NSURL *)licenseURL;
-(BOOL)displayFullPhotoInline;
-(BOOL)useGallery;
-(double)sizeRatio;
-(NSString *)uid;

@end

