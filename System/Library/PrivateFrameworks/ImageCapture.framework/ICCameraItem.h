/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, ICCameraDevice, ICCameraFolder, NSDate, NSDictionary, NSMutableDictionary;

@interface ICCameraItem : NSObject {

	void* _itemProperties;

}

@property (readonly) BOOL hasThumbnail; 
@property (readonly) BOOL hasMetadata; 
@property (readonly) NSString * fileSystemPath; 
@property (getter=isLocked) BOOL locked; 
@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnail; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSMutableDictionary * userData; 
-(void)finalize;
-(NSDictionary *)metadata;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)hasMetadata;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSMutableDictionary *)userData;
-(CGImageRef)thumbnail;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(ICCameraFolder *)parentFolder;
-(void)setModificationDate:(NSDate *)arg1 ;
-(BOOL)hasThumbnail;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)appendToPath:(id)arg1 ;
-(NSString *)fileSystemPath;
-(void)flushThumbnailCache;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)flushMetadataCache;
-(NSDate *)modificationDate;
-(ICCameraDevice *)device;
@end

