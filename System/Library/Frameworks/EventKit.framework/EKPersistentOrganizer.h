/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString, NSURL;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSURL * address; 
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setCurrentUser:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(BOOL)isCurrentUser;
-(int)entityType;
@end

