/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface LOGMSGEVENTLogMsgEventTableBookedSession : PBCodable <NSCopying> {

	NSString* _bookedTableSessionId;
	NSMutableArray* _bookedTables;

}

@property (nonatomic,readonly) BOOL hasBookedTableSessionId; 
@property (nonatomic,retain) NSString * bookedTableSessionId;              //@synthesize bookedTableSessionId=_bookedTableSessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * bookedTables;                //@synthesize bookedTables=_bookedTables - In the implementation block
+(Class)bookedTableType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBookedTables:(NSMutableArray *)arg1 ;
-(void)setBookedTableSessionId:(NSString *)arg1 ;
-(BOOL)hasBookedTableSessionId;
-(void)clearBookedTables;
-(void)addBookedTable:(id)arg1 ;
-(unsigned long long)bookedTablesCount;
-(id)bookedTableAtIndex:(unsigned long long)arg1 ;
-(NSString *)bookedTableSessionId;
-(NSMutableArray *)bookedTables;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

