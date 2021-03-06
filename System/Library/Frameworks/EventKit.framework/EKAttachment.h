/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * fileFormat; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) NSString * UUID; 
+(Class)frozenClass;
-(NSString *)fileName;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)UUID;
-(NSNumber *)fileSize;
-(NSURL *)localURL;
-(id)externalId;
-(void)setExternalId:(id)arg1 ;
-(void)setFileFormat:(NSString *)arg1 ;
-(BOOL)isBinary;
-(void)setIsBinary:(BOOL)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(id)fileNameRaw;
-(id)fileSizeRaw;
-(void)setFileNameRaw:(id)arg1 ;
-(void)setFileSizeRaw:(id)arg1 ;
-(long long)compareFileNames:(id)arg1 ;
-(void)setLocalURL:(NSURL *)arg1 ;
-(NSString *)fileFormat;
@end

