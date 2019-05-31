/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSimpleRestaurantMenuText : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _menuGroups;

}

@property (nonatomic,retain) NSMutableArray * menuGroups;                    //@synthesize menuGroups=_menuGroups - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)menuGroupType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearMenuGroups;
-(void)addMenuGroup:(id)arg1 ;
-(unsigned long long)menuGroupsCount;
-(id)menuGroupAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)menuGroups;
-(void)setMenuGroups:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

