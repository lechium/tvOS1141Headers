/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSString * groupType; 
+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setEntities:(NSArray *)arg1 ;
-(NSString *)groupType;
-(NSArray *)entities;
-(void)setGroupType:(NSString *)arg1 ;
@end
