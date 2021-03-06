/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, GEOMapItemAttribution;


@protocol GEOEncyclopedicInfo <NSObject>
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@required
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;

@end

