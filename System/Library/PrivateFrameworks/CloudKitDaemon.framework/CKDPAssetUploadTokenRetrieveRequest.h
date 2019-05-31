/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, CKDPRecordFieldIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {

	NSMutableArray* _assets;
	NSData* _authCopyRequest;
	NSData* _authPutRequest;
	NSMutableArray* _contentRequestHeaders;
	CKDPRecordFieldIdentifier* _field;
	CKDPRecordType* _type;
	NSMutableArray* _uploads;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;                   //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                             //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploads;                            //@synthesize uploads=_uploads - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;              //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthPutRequest; 
@property (nonatomic,retain) NSData * authPutRequest;                             //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthCopyRequest; 
@property (nonatomic,retain) NSData * authCopyRequest;                            //@synthesize authCopyRequest=_authCopyRequest - In the implementation block
+(id)options;
+(Class)assetsType;
+(Class)uploadsType;
+(Class)contentRequestHeadersType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasType;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasField;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)field;
-(unsigned long long)assetsCount;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)setUploads:(NSMutableArray *)arg1 ;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(void)addContentRequestHeaders:(id)arg1 ;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
-(void)addUploads:(id)arg1 ;
-(unsigned long long)uploadsCount;
-(void)clearUploads;
-(id)uploadsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setAuthCopyRequest:(NSData *)arg1 ;
-(BOOL)hasAuthPutRequest;
-(BOOL)hasAuthCopyRequest;
-(NSMutableArray *)uploads;
-(NSMutableArray *)contentRequestHeaders;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSData *)authCopyRequest;
-(NSMutableArray *)assets;
@end
