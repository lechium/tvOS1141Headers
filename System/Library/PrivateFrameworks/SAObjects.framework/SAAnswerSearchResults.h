/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainSearchResults.h>

@class NSArray;

@interface SAAnswerSearchResults : SADomainSearchResults

@property (nonatomic,copy) NSArray * results; 
+(id)searchResults;
+(id)searchResultsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

