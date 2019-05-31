/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * logoURLs;                     //@synthesize logoURLs=_logoURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs;              //@synthesize snippetLogoURLs=_snippetLogoURLs - In the implementation block
+(Class)logoURLsType;
+(Class)snippetLogoURLsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguage;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)clearLogoURLs;
-(void)addLogoURLs:(id)arg1 ;
-(unsigned long long)logoURLsCount;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(void)clearSnippetLogoURLs;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(unsigned long long)snippetLogoURLsCount;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logoURLs;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)snippetLogoURLs;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
