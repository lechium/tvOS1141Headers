/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) BOOL acceptPodcastCollections; 
@property (assign,nonatomic) BOOL acceptPodcastStations; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setQuery:(NSString *)arg1 ;
-(long long)maxResults;
-(void)setMaxResults:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)query;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(BOOL)arg1 ;
-(BOOL)acceptPodcastStations;
-(void)setAcceptPodcastStations:(BOOL)arg1 ;
@end
