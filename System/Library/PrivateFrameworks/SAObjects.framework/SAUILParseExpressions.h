/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)expressions;
-(void)setExpressions:(NSArray *)arg1 ;
@end

