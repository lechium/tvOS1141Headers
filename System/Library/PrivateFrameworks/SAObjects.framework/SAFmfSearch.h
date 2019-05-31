/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSArray, NSString;

@interface SAFmfSearch : SADomainCommand

@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)currentLocation;
-(void)setCurrentLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)proximity;
-(void)setProximity:(NSString *)arg1 ;
-(NSArray *)friends;
-(void)setFriends:(NSArray *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
@end

