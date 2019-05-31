/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSArray, NSNumber;

@interface SAHAEntity : SADomainObject

@property (nonatomic,copy) NSString * accessory; 
@property (nonatomic,copy) NSURL * accessoryIdentifier; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSNumber * currentDevice; 
@property (nonatomic,copy) NSString * entityType; 
@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (nonatomic,copy) NSString * home; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * room; 
@property (nonatomic,copy) NSURL * roomIdentifier; 
@property (nonatomic,copy) NSString * sceneType; 
@property (nonatomic,copy) NSString * serviceGroup; 
@property (nonatomic,copy) NSArray * serviceGroupIdentifiers; 
@property (nonatomic,copy) NSString * serviceSubType; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSArray * status; 
@property (nonatomic,copy) NSArray * targetAttributes; 
@property (nonatomic,copy) NSString * zone; 
@property (nonatomic,copy) NSArray * zoneIdentifiers; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setStatus:(NSArray *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)home;
-(void)setHome:(NSString *)arg1 ;
-(NSNumber *)currentDevice;
-(NSString *)zone;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSArray *)status;
-(id)encodedClassName;
-(NSString *)accessory;
-(NSString *)room;
-(void)setAccessory:(NSString *)arg1 ;
-(void)setEntityType:(NSString *)arg1 ;
-(void)setSceneType:(NSString *)arg1 ;
-(NSString *)entityType;
-(NSString *)sceneType;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(void)setCurrentDevice:(NSNumber *)arg1 ;
-(void)setZone:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(NSURL *)roomIdentifier;
-(NSArray *)zoneIdentifiers;
-(NSString *)serviceGroup;
-(NSArray *)serviceGroupIdentifiers;
-(NSURL *)accessoryIdentifier;
-(NSString *)serviceSubType;
-(NSString *)hashedRouteUID;
-(NSArray *)targetAttributes;
-(void)setRoom:(NSString *)arg1 ;
-(void)setRoomIdentifier:(NSURL *)arg1 ;
-(void)setZoneIdentifiers:(NSArray *)arg1 ;
-(void)setAccessoryIdentifier:(NSURL *)arg1 ;
-(void)setServiceSubType:(NSString *)arg1 ;
-(void)setHashedRouteUID:(NSString *)arg1 ;
-(void)setTargetAttributes:(NSArray *)arg1 ;
-(void)setServiceGroup:(NSString *)arg1 ;
-(void)setServiceGroupIdentifiers:(NSArray *)arg1 ;
@end

