/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {

	NSString* _environmentDisplayName;
	NSString* _environmentReleaseName;
	NSMutableArray* _urls;

}

@property (nonatomic,readonly) BOOL hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName;              //@synthesize environmentDisplayName=_environmentDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName;              //@synthesize environmentReleaseName=_environmentReleaseName - In the implementation block
@property (nonatomic,retain) NSMutableArray * urls;                          //@synthesize urls=_urls - In the implementation block
+(Class)urlType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEnvironmentDisplayName;
-(BOOL)hasEnvironmentReleaseName;
-(void)clearUrls;
-(void)addUrl:(id)arg1 ;
-(unsigned long long)urlsCount;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(NSString *)environmentDisplayName;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(NSString *)environmentReleaseName;
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

