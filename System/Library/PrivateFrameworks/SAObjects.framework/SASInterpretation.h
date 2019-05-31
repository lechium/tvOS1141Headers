/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASInterpretation : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL doNotDedup; 
@property (nonatomic,copy) NSArray * tokens; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interpretation;
+(id)interpretationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechTokens;
-(id)groupIdentifier;
-(NSArray *)tokens;
-(id)encodedClassName;
-(BOOL)doNotDedup;
-(void)setDoNotDedup:(BOOL)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
@end
