/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UWLErrorResponse : PBCodable <NSCopying> {

	int _retryPeriodInSeconds;

}

@property (assign,nonatomic) int retryPeriodInSeconds;              //@synthesize retryPeriodInSeconds=_retryPeriodInSeconds - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)retryPeriodInSeconds;
-(void)setRetryPeriodInSeconds:(int)arg1 ;
@end
