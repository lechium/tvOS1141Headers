/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR9* _handlerReturnStatus;
	unsigned _errorCode;
	NSMutableArray* _handlerReturnStatusDatas;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerReturnStatusCount; 
@property (nonatomic,readonly) unsigned* handlerReturnStatus; 
@property (nonatomic,retain) NSMutableArray * handlerReturnStatusDatas;                  //@synthesize handlerReturnStatusDatas=_handlerReturnStatusDatas - In the implementation block
+(Class)handlerReturnStatusDataType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addHandlerReturnStatusData:(id)arg1 ;
-(unsigned long long)handlerReturnStatusCount;
-(void)clearHandlerReturnStatus;
-(unsigned)handlerReturnStatusAtIndex:(unsigned long long)arg1 ;
-(void)addHandlerReturnStatus:(unsigned)arg1 ;
-(unsigned long long)handlerReturnStatusDatasCount;
-(void)clearHandlerReturnStatusDatas;
-(id)handlerReturnStatusDataAtIndex:(unsigned long long)arg1 ;
-(unsigned*)handlerReturnStatus;
-(void)setHandlerReturnStatus:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)handlerReturnStatusDatas;
-(void)setHandlerReturnStatusDatas:(NSMutableArray *)arg1 ;
@end
