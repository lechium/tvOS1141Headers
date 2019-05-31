/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mobileSpace; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(NSURL *)contactIdentifier;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(NSString *)mobileSpace;
-(void)setMobileSpace:(NSString *)arg1 ;
-(void)setTiming:(NSString *)arg1 ;
-(NSString *)timing;
@end

