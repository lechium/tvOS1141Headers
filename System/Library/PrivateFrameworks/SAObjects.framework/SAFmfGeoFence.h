/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString, SALocation;

@interface SAFmfGeoFence : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,retain) SALocation * location; 
+(id)geoFence;
+(id)geoFenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
@end

