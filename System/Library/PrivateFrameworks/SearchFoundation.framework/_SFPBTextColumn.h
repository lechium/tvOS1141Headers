/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumn.h>
@class NSArray, NSData;


@protocol _SFPBTextColumn <NSObject>
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)clearSections;
-(void)addSections:(id)arg1;
-(unsigned long long)sectionsCount;
-(id)sectionsAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setSections:(id)arg1;
-(NSArray *)sections;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding> {

	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearSections;
-(void)addSections:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

