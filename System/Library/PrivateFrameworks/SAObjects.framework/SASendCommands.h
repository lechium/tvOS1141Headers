/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
+(id)sendCommands;
+(id)sendCommandsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
@end

