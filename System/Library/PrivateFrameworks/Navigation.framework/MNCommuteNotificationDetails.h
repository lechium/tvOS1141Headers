/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNCommuteNotificationDetails : PBCodable <NSCopying> {

	double _expirationDate;
	NSString* _commuteDetailsIdentifier;
	NSString* _message;
	int _score;
	NSString* _title;
	SCD_Struct_MN13 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL hasCommuteDetailsIdentifier; 
@property (nonatomic,retain) NSString * commuteDetailsIdentifier;              //@synthesize commuteDetailsIdentifier=_commuteDetailsIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score;                                        //@synthesize score=_score - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setExpirationDate:(double)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(BOOL)hasExpirationDate;
-(double)expirationDate;
-(int)score;
-(void)setScore:(int)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(BOOL)hasTitle;
-(BOOL)hasMessage;
-(BOOL)hasCommuteDetailsIdentifier;
-(NSString *)commuteDetailsIdentifier;
-(void)setCommuteDetailsIdentifier:(NSString *)arg1 ;
@end

