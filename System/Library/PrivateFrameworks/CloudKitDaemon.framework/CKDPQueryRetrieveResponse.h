/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {

	NSData* _continuationMarker;
	NSMutableArray* _queryResults;

}

@property (nonatomic,retain) NSMutableArray * queryResults;              //@synthesize queryResults=_queryResults - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                //@synthesize continuationMarker=_continuationMarker - In the implementation block
+(Class)queryResultsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(NSMutableArray *)queryResults;
-(BOOL)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)addQueryResults:(id)arg1 ;
-(unsigned long long)queryResultsCount;
-(void)clearQueryResults;
-(id)queryResultsAtIndex:(unsigned long long)arg1 ;
-(void)setQueryResults:(NSMutableArray *)arg1 ;
@end

