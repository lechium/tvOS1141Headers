/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAnswerAbstractSocialPost.h>

@class NSArray;

@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (nonatomic,copy) NSArray * socialAnswers; 
+(id)socialQuestion;
+(id)socialQuestionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)socialAnswers;
-(void)setSocialAnswers:(NSArray *)arg1 ;
@end

