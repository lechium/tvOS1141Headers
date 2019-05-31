/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableOrderedSet, AXDialectMap;

@interface AXLanguageTag : NSObject <NSCopying> {

	BOOL _wasPredicted;
	NSString* _content;
	NSMutableOrderedSet* _unambiguousDialects;
	NSMutableOrderedSet* _ambiguousDialects;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic,__weak) NSString * content;                                        //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unambiguousDialects;                        //@synthesize unambiguousDialects=_unambiguousDialects - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ambiguousDialects;                          //@synthesize ambiguousDialects=_ambiguousDialects - In the implementation block
@property (nonatomic,__weak,readonly) AXDialectMap * preferredAmbiguousDialect; 
@property (nonatomic,__weak,readonly) AXDialectMap * preferredUnambiguousDialect; 
@property (nonatomic,__weak,readonly) NSString * contentSubstring; 
@property (nonatomic,__weak,readonly) AXDialectMap * dialect; 
@property (assign,nonatomic) BOOL wasPredicted;                                                //@synthesize wasPredicted=_wasPredicted - In the implementation block
+(id)tagWithDialects:(id)arg1 range:(NSRange)arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4 ;
-(void)setContent:(NSString *)arg1 ;
-(id)description;
-(NSString *)content;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(AXDialectMap *)dialect;
-(BOOL)wasPredicted;
-(BOOL)canBeSpokenByLanguage:(id)arg1 ;
-(NSString *)contentSubstring;
-(void)setWasPredicted:(BOOL)arg1 ;
-(void)addAmbiguousDialect:(id)arg1 ;
-(void)addUnambiguousDialect:(id)arg1 ;
-(NSMutableOrderedSet *)ambiguousDialects;
-(NSMutableOrderedSet *)unambiguousDialects;
-(AXDialectMap *)preferredUnambiguousDialect;
-(AXDialectMap *)preferredAmbiguousDialect;
-(void)setUnambiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(void)setAmbiguousDialects:(NSMutableOrderedSet *)arg1 ;
-(BOOL)canBeSpokenByDialect:(id)arg1 ;
-(BOOL)hasAmbigiousDialects;
-(void)addAmbiguousDialects:(id)arg1 ;
@end

