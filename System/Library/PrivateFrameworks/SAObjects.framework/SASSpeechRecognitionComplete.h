/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * sessionId; 
+(id)speechRecognitionComplete;
+(id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

