/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentSettingParams;
	NSString* _iAdIDString;

}

@property (nonatomic,readonly) BOOL hasIAdIDString; 
@property (nonatomic,retain) NSString * iAdIDString;                             //@synthesize iAdIDString=_iAdIDString - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSettingParams;              //@synthesize currentSettingParams=_currentSettingParams - In the implementation block
+(id)options;
+(Class)currentSettingParamsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addCurrentSettingParams:(id)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(unsigned long long)currentSettingParamsCount;
-(void)clearCurrentSettingParams;
-(id)currentSettingParamsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIAdIDString;
-(NSString *)iAdIDString;
-(NSMutableArray *)currentSettingParams;
-(void)setCurrentSettingParams:(NSMutableArray *)arg1 ;
@end
