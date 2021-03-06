/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying> {

	NSString* _suggestionString;
	int _tappingCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasSuggestionString; 
@property (nonatomic,retain) NSString * suggestionString;              //@synthesize suggestionString=_suggestionString - In the implementation block
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible;                    //@synthesize initiallyVisible=_initiallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible;                   //@synthesize eventuallyVisible=_eventuallyVisible - In the implementation block
@property (assign,nonatomic) BOOL hasTappingCount; 
@property (assign,nonatomic) int tappingCount;                         //@synthesize tappingCount=_tappingCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(BOOL)hasInitiallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(BOOL)hasEventuallyVisible;
-(BOOL)initiallyVisible;
-(BOOL)eventuallyVisible;
-(BOOL)hasSuggestionString;
-(int)tappingCount;
-(void)setTappingCount:(int)arg1 ;
-(void)setHasTappingCount:(BOOL)arg1 ;
-(BOOL)hasTappingCount;
-(NSString *)suggestionString;
-(void)setSuggestionString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

