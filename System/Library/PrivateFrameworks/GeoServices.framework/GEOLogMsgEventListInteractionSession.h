/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {

	NSMutableArray* _listResultItems;
	int _listType;
	NSString* _searchString;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType;                                  //@synthesize listType=_listType - In the implementation block
@property (nonatomic,retain) NSMutableArray * listResultItems;              //@synthesize listResultItems=_listResultItems - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
+(Class)listResultItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setListType:(int)arg1 ;
-(void)addListResultItem:(id)arg1 ;
-(BOOL)hasSearchString;
-(int)listType;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(void)clearListResultItems;
-(unsigned long long)listResultItemsCount;
-(id)listResultItemAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)listResultItems;
-(void)setListResultItems:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
@end

