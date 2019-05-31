/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying> {

	double _contactRelevanceScore;
	double _fractionOfMatch;
	int _age;
	int _distanceToSuggestion;
	int _peopleSuggesterRank;
	int _serverEntryType;
	int _suggestionType;
	BOOL _matchedUsingAddress;
	BOOL _matchedUsingEventName;
	BOOL _matchedUsingLabel;
	BOOL _matchedUsingName;
	BOOL _matchedUsingOrganization;
	BOOL _shownToUser;
	SCD_Struct_LO96 _has;

}

@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType;                            //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) BOOL hasShownToUser; 
@property (assign,nonatomic) BOOL shownToUser;                              //@synthesize shownToUser=_shownToUser - In the implementation block
@property (assign,nonatomic) BOOL hasFractionOfMatch; 
@property (assign,nonatomic) double fractionOfMatch;                        //@synthesize fractionOfMatch=_fractionOfMatch - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToSuggestion; 
@property (assign,nonatomic) int distanceToSuggestion;                      //@synthesize distanceToSuggestion=_distanceToSuggestion - In the implementation block
@property (assign,nonatomic) BOOL hasContactRelevanceScore; 
@property (assign,nonatomic) double contactRelevanceScore;                  //@synthesize contactRelevanceScore=_contactRelevanceScore - In the implementation block
@property (assign,nonatomic) BOOL hasMatchedUsingName; 
@property (assign,nonatomic) BOOL matchedUsingName;                         //@synthesize matchedUsingName=_matchedUsingName - In the implementation block
@property (assign,nonatomic) BOOL hasMatchedUsingOrganization; 
@property (assign,nonatomic) BOOL matchedUsingOrganization;                 //@synthesize matchedUsingOrganization=_matchedUsingOrganization - In the implementation block
@property (assign,nonatomic) BOOL hasMatchedUsingAddress; 
@property (assign,nonatomic) BOOL matchedUsingAddress;                      //@synthesize matchedUsingAddress=_matchedUsingAddress - In the implementation block
@property (assign,nonatomic) BOOL hasMatchedUsingLabel; 
@property (assign,nonatomic) BOOL matchedUsingLabel;                        //@synthesize matchedUsingLabel=_matchedUsingLabel - In the implementation block
@property (assign,nonatomic) BOOL hasMatchedUsingEventName; 
@property (assign,nonatomic) BOOL matchedUsingEventName;                    //@synthesize matchedUsingEventName=_matchedUsingEventName - In the implementation block
@property (assign,nonatomic) BOOL hasPeopleSuggesterRank; 
@property (assign,nonatomic) int peopleSuggesterRank;                       //@synthesize peopleSuggesterRank=_peopleSuggesterRank - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) int age;                                       //@synthesize age=_age - In the implementation block
@property (assign,nonatomic) BOOL hasServerEntryType; 
@property (assign,nonatomic) int serverEntryType;                           //@synthesize serverEntryType=_serverEntryType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAge:(int)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(int)age;
-(int)suggestionType;
-(void)setSuggestionType:(int)arg1 ;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setShownToUser:(BOOL)arg1 ;
-(void)setHasShownToUser:(BOOL)arg1 ;
-(BOOL)hasShownToUser;
-(void)setFractionOfMatch:(double)arg1 ;
-(void)setHasFractionOfMatch:(BOOL)arg1 ;
-(BOOL)hasFractionOfMatch;
-(void)setDistanceToSuggestion:(int)arg1 ;
-(void)setHasDistanceToSuggestion:(BOOL)arg1 ;
-(BOOL)hasDistanceToSuggestion;
-(void)setContactRelevanceScore:(double)arg1 ;
-(void)setHasContactRelevanceScore:(BOOL)arg1 ;
-(BOOL)hasContactRelevanceScore;
-(void)setMatchedUsingName:(BOOL)arg1 ;
-(void)setHasMatchedUsingName:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingName;
-(void)setMatchedUsingOrganization:(BOOL)arg1 ;
-(void)setHasMatchedUsingOrganization:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingOrganization;
-(void)setMatchedUsingAddress:(BOOL)arg1 ;
-(void)setHasMatchedUsingAddress:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingAddress;
-(void)setMatchedUsingLabel:(BOOL)arg1 ;
-(void)setHasMatchedUsingLabel:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingLabel;
-(void)setMatchedUsingEventName:(BOOL)arg1 ;
-(void)setHasMatchedUsingEventName:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingEventName;
-(void)setPeopleSuggesterRank:(int)arg1 ;
-(void)setHasPeopleSuggesterRank:(BOOL)arg1 ;
-(BOOL)hasPeopleSuggesterRank;
-(int)serverEntryType;
-(void)setServerEntryType:(int)arg1 ;
-(void)setHasServerEntryType:(BOOL)arg1 ;
-(BOOL)hasServerEntryType;
-(id)serverEntryTypeAsString:(int)arg1 ;
-(int)StringAsServerEntryType:(id)arg1 ;
-(BOOL)shownToUser;
-(double)fractionOfMatch;
-(int)distanceToSuggestion;
-(double)contactRelevanceScore;
-(BOOL)matchedUsingName;
-(BOOL)matchedUsingOrganization;
-(BOOL)matchedUsingAddress;
-(BOOL)matchedUsingLabel;
-(BOOL)matchedUsingEventName;
-(int)peopleSuggesterRank;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

