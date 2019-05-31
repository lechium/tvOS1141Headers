/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAVCSContentCabinet : SAUISnippet

@property (assign,nonatomic) BOOL browseResults; 
@property (nonatomic,copy) NSNumber * fullScreenEnabled; 
@property (nonatomic,copy) NSArray * shelves; 
+(id)contentCabinet;
+(id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)shelves;
-(void)setShelves:(NSArray *)arg1 ;
-(BOOL)browseResults;
-(void)setBrowseResults:(BOOL)arg1 ;
-(NSNumber *)fullScreenEnabled;
-(void)setFullScreenEnabled:(NSNumber *)arg1 ;
@end
