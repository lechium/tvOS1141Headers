/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (assign,nonatomic) long long utteranceIndex; 
+(id)changePrimaryUtterance;
+(id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(long long)utteranceIndex;
-(void)setUtteranceIndex:(long long)arg1 ;
@end

