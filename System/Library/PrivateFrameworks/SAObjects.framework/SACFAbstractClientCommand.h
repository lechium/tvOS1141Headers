/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray;

@interface SACFAbstractClientCommand : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSArray * jsLibraries; 
@property (nonatomic,copy) NSString * jsParameters; 
@property (nonatomic,copy) NSString * jsScript; 
@property (assign,nonatomic) BOOL shouldCacheScript; 
+(id)abstractClientCommand;
+(id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)domain;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsScript;
-(void)setJsScript:(NSString *)arg1 ;
-(BOOL)shouldCacheScript;
-(void)setShouldCacheScript:(BOOL)arg1 ;
-(NSArray *)jsLibraries;
-(void)setJsLibraries:(NSArray *)arg1 ;
-(NSString *)jsParameters;
-(void)setJsParameters:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end
