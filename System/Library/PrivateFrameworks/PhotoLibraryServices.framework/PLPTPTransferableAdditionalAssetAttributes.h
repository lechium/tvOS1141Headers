/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@required
-(NSNumber *)embeddedThumbnailWidth;
-(NSNumber *)embeddedThumbnailHeight;
-(NSNumber *)embeddedThumbnailOffset;
-(NSNumber *)embeddedThumbnailLength;
-(NSString *)originatingAssetIdentifier;
-(NSString *)exifTimestampString;
-(long long)ptpTrashedState;

@end
