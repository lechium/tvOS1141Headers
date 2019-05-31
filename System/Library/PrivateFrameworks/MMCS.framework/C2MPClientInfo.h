/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCS-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPClientInfo : PBCodable <NSCopying> {

	NSString* _processName;
	NSString* _processVersion;
	NSString* _productBuild;
	NSString* _productName;
	NSString* _productType;
	NSString* _productVersion;

}

@property (nonatomic,readonly) BOOL hasProductName; 
@property (nonatomic,retain) NSString * productName;                 //@synthesize productName=_productName - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                 //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) BOOL hasProductVersion; 
@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasProductBuild; 
@property (nonatomic,retain) NSString * productBuild;                //@synthesize productBuild=_productBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessName; 
@property (nonatomic,retain) NSString * processName;                 //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessVersion; 
@property (nonatomic,retain) NSString * processVersion;              //@synthesize processVersion=_processVersion - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)productName;
-(BOOL)hasProductName;
-(void)setProductName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)processName;
-(id)dictionaryRepresentation;
-(void)setProductBuild:(NSString *)arg1 ;
-(void)setProcessVersion:(NSString *)arg1 ;
-(BOOL)hasProductType;
-(BOOL)hasProductVersion;
-(BOOL)hasProductBuild;
-(BOOL)hasProcessName;
-(BOOL)hasProcessVersion;
-(NSString *)productBuild;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(NSString *)processVersion;
@end

