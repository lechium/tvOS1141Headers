/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/SAAceSerializable.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFSGSuggestContactMatchesWithTextSearch : SADomainCommand <CFLocalAceHandling, SAAceSerializable, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long limit; 
@property (nonatomic,copy) NSString * query; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)suggestContactMatchesWithTextSearch;
+(id)suggestContactMatchesWithTextSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)query;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end
