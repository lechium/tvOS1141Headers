/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSURL * articleURL; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)encodedClassName;
-(NSURL *)articleURL;
-(void)setArticleURL:(NSURL *)arg1 ;
@end

