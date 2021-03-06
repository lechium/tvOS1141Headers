/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPMediaItem, NSNumber, NSString;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSString * upNextQueueInsertLocation; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSString *)upNextQueueInsertLocation;
-(void)setUpNextQueueInsertLocation:(NSString *)arg1 ;
-(SAMPMediaItem *)mediaItem;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
@end

