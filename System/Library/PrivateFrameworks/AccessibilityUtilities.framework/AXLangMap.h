/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXDialectMap, NSArray, NSString;

@interface AXLangMap : NSObject {

	BOOL _western;
	BOOL _ambiguous;
	BOOL _rtl;
	AXDialectMap* userLocaleDialect;
	NSArray* _dialects;
	NSString* _generalLanguageID;
	AXDialectMap* _userPreferredDialect;
	NSArray* _alternateLanguageIDs;
	NSArray* _associatedAmbiguousLanguages;

}

@property (assign,getter=isWestern,nonatomic) BOOL western;                           //@synthesize western=_western - In the implementation block
@property (assign,getter=isRTL,nonatomic) BOOL rtl;                                   //@synthesize rtl=_rtl - In the implementation block
@property (assign,getter=isAmbiguous,nonatomic) BOOL ambiguous;                       //@synthesize ambiguous=_ambiguous - In the implementation block
@property (nonatomic,copy) NSString * generalLanguageID;                              //@synthesize generalLanguageID=_generalLanguageID - In the implementation block
@property (nonatomic,retain) NSArray * alternateLanguageIDs;                          //@synthesize alternateLanguageIDs=_alternateLanguageIDs - In the implementation block
@property (nonatomic,retain) NSArray * dialects;                                      //@synthesize dialects=_dialects - In the implementation block
@property (nonatomic,retain) NSArray * associatedAmbiguousLanguages;                  //@synthesize associatedAmbiguousLanguages=_associatedAmbiguousLanguages - In the implementation block
@property (nonatomic,readonly) AXDialectMap * defaultDialect; 
@property (nonatomic,readonly) AXDialectMap * userLocaleDialect; 
@property (assign,nonatomic,__weak) AXDialectMap * userPreferredDialect;              //@synthesize userPreferredDialect=_userPreferredDialect - In the implementation block
-(id)description;
-(id)debugDescription;
-(BOOL)isRTL;
-(BOOL)isAmbiguous;
-(BOOL)isWestern;
-(void)setWestern:(BOOL)arg1 ;
-(void)setAmbiguous:(BOOL)arg1 ;
-(void)setRtl:(BOOL)arg1 ;
-(void)setGeneralLanguageID:(NSString *)arg1 ;
-(void)setAlternateLanguageIDs:(NSArray *)arg1 ;
-(void)setDialects:(NSArray *)arg1 ;
-(void)setAssociatedAmbiguousLanguages:(NSArray *)arg1 ;
-(NSString *)generalLanguageID;
-(NSArray *)dialects;
-(void)setUserPreferredDialect:(AXDialectMap *)arg1 ;
-(id)basicDescription;
-(NSArray *)alternateLanguageIDs;
-(AXDialectMap *)userPreferredDialect;
-(AXDialectMap *)userLocaleDialect;
-(id)initWithLanguageID:(id)arg1 isWestern:(BOOL)arg2 isAmbiguous:(BOOL)arg3 isRTL:(BOOL)arg4 dialects:(id)arg5 alternateLanguageIDs:(id)arg6 associatedAmbiguousLanguages:(id)arg7 ;
-(AXDialectMap *)defaultDialect;
-(id)dialectWithLocaleIdentifier:(id)arg1 ;
-(NSArray *)associatedAmbiguousLanguages;
@end
