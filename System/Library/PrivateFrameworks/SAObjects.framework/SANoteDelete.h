/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SANoteDelete : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
+(id)delete;
+(id)deleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
