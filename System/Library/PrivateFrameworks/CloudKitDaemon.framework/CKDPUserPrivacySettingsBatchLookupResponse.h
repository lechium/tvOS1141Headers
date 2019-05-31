/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying> {

	NSMutableArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSMutableArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(Class)containerPrivacySettingsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)containerPrivacySettings;
-(void)addContainerPrivacySettings:(id)arg1 ;
-(unsigned long long)containerPrivacySettingsCount;
-(void)clearContainerPrivacySettings;
-(id)containerPrivacySettingsAtIndex:(unsigned long long)arg1 ;
-(void)setContainerPrivacySettings:(NSMutableArray *)arg1 ;
@end
