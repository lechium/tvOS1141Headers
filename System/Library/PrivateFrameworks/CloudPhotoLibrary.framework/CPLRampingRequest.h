/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying> {

	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;              //@synthesize requests=_requests - In the implementation block
+(Class)requestType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)requests;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(unsigned long long)requestsCount;
-(id)requestAtIndex:(unsigned long long)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

