/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSMutableDictionary, NSString;

@interface ICCameraFile : ICCameraItem {

	void* _fileProperties;

}

@property (assign) BOOL fetchingThumbnail; 
@property (assign) BOOL fetchingMetadata; 
@property (assign) long long fileSize; 
@property (getter=isRaw) BOOL raw; 
@property (assign) unsigned long long orientation; 
@property (readonly) BOOL hasOverriddenOrientation; 
@property (retain) NSMutableDictionary * metadata_hidden; 
@property (readonly) NSString * burstUUID; 
@property (readonly) BOOL burstFavorite; 
@property (readonly) BOOL burstPicked; 
@property (readonly) BOOL highFramerate; 
@property (readonly) BOOL timeLapse; 
@property (readonly) NSString * originatingAssetID; 
@property (readonly) NSString * groupUUID; 
@property (readonly) NSString * relatedUUID; 
@property (readonly) NSString * originalFilename; 
@property (readonly) NSString * createdFilename; 
-(void)finalize;
-(id)metadata;
-(BOOL)setMetadata:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(unsigned long long)orientation;
-(long long)fileSize;
-(void)setFileSize:(long long)arg1 ;
-(BOOL)hasMetadata;
-(void)setOrientation:(unsigned long long)arg1 ;
-(CGImageRef)thumbnail;
-(BOOL)hasThumbnail;
-(NSString *)groupUUID;
-(NSString *)createdFilename;
-(NSString *)originatingAssetID;
-(NSString *)burstUUID;
-(NSString *)relatedUUID;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(BOOL)setThumbnailData:(CFDataRef)arg1 withOrientation:(id)arg2 ;
-(void)setFetchingThumbnail:(BOOL)arg1 ;
-(void)setFetchingMetadata:(BOOL)arg1 ;
-(void)setMetadata_hidden:(NSMutableDictionary *)arg1 ;
-(BOOL)fetchingThumbnail;
-(BOOL)fetchingMetadata;
-(void)setHasMetadata:(BOOL)arg1 ;
-(void)setRaw:(BOOL)arg1 ;
-(NSMutableDictionary *)metadata_hidden;
-(BOOL)hasOverriddenOrientation;
-(BOOL)burstPicked;
-(BOOL)burstFavorite;
-(BOOL)highFramerate;
-(BOOL)timeLapse;
-(BOOL)firstPicked;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)overrideOrientation:(unsigned long long)arg1 ;
-(void)setKeywordPropertiesFromMetadata;
-(void)flushThumbnailCache;
-(void)requestThumbnail;
-(BOOL)isRaw;
-(void)requestMetadata;
-(void)flushMetadataCache;
-(NSString *)originalFilename;
-(void)setHasThumbnail:(BOOL)arg1 ;
@end

