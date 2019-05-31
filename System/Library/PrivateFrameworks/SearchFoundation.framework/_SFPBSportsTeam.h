/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBSportsTeam.h>
@class _SFPBImage, NSString, NSData;


@protocol _SFPBSportsTeam <NSObject>
@property (nonatomic,retain) _SFPBImage * logo; 
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,copy) NSString * record; 
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,copy) NSString * score; 
@property (nonatomic,readonly) BOOL hasScore; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,readonly) BOOL hasAccessibilityDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasName;
-(NSString *)score;
-(void)setScore:(id)arg1;
-(BOOL)hasScore;
-(BOOL)hasLogo;
-(_SFPBImage *)logo;
-(void)setLogo:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)name;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setAccessibilityDescription:(id)arg1;
-(NSString *)accessibilityDescription;
-(BOOL)hasAccessibilityDescription;
-(BOOL)hasRecord;
-(NSString *)record;
-(void)setRecord:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBImage, NSString, NSData;

@interface _SFPBSportsTeam : PBCodable <_SFPBSportsTeam, NSSecureCoding> {

	_SFPBImage* _logo;
	NSString* _record;
	NSString* _score;
	NSString* _accessibilityDescription;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBImage * logo;                               //@synthesize logo=_logo - In the implementation block
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,copy) NSString * record;                                 //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,copy) NSString * score;                                  //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL hasScore; 
@property (nonatomic,copy) NSString * accessibilityDescription;               //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessibilityDescription; 
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)score;
-(void)setScore:(NSString *)arg1 ;
-(BOOL)hasScore;
-(BOOL)hasLogo;
-(_SFPBImage *)logo;
-(void)setLogo:(_SFPBImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSString *)accessibilityDescription;
-(BOOL)hasAccessibilityDescription;
-(BOOL)hasRecord;
-(NSString *)record;
-(void)setRecord:(NSString *)arg1 ;
@end

