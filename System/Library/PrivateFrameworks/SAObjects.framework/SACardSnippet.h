/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSData, NSArray;

@interface SACardSnippet : SAUISnippet

@property (nonatomic,copy) NSData * cardData; 
@property (nonatomic,copy) NSArray * contextItems; 
@property (nonatomic,copy) NSArray * referencedCommands; 
@property (nonatomic,copy) NSArray * referencedSnippets; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)cardData;
-(void)setCardData:(NSData *)arg1 ;
-(NSArray *)contextItems;
-(void)setContextItems:(NSArray *)arg1 ;
-(NSArray *)referencedCommands;
-(void)setReferencedCommands:(NSArray *)arg1 ;
-(NSArray *)referencedSnippets;
-(void)setReferencedSnippets:(NSArray *)arg1 ;
@end
