/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (nonatomic,copy) NSArray * targetEntities; 
+(id)filesystemContext;
+(id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)targetEntities;
-(void)setTargetEntities:(NSArray *)arg1 ;
@end

