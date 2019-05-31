/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormattedString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {

	NSMutableArray* _formatArguments;
	NSMutableArray* _formatStrings;
	NSMutableArray* _separators;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,retain) NSMutableArray * formatStrings;                //@synthesize formatStrings=_formatStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * formatArguments;              //@synthesize formatArguments=_formatArguments - In the implementation block
@property (nonatomic,retain) NSMutableArray * separators;                   //@synthesize separators=_separators - In the implementation block
+(Class)formatStringType;
+(Class)formatArgumentType;
+(Class)separatorType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearFormatStrings;
-(void)addFormatString:(id)arg1 ;
-(unsigned long long)formatStringsCount;
-(id)formatStringAtIndex:(unsigned long long)arg1 ;
-(void)clearFormatArguments;
-(void)addFormatArgument:(id)arg1 ;
-(unsigned long long)formatArgumentsCount;
-(id)formatArgumentAtIndex:(unsigned long long)arg1 ;
-(void)clearSeparators;
-(void)addSeparator:(id)arg1 ;
-(unsigned long long)separatorsCount;
-(id)separatorAtIndex:(unsigned long long)arg1 ;
-(NSArray *)formatStrings;
-(void)setFormatStrings:(NSArray *)arg1 ;
-(NSMutableArray *)formatArguments;
-(void)setFormatArguments:(NSMutableArray *)arg1 ;
-(NSArray *)separators;
-(void)setSeparators:(NSArray *)arg1 ;
-(NSArray *)formatTokens;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

