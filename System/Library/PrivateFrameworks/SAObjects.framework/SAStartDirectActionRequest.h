/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAStartDirectActionRequest : SAStartRequest

@property (nonatomic,copy) NSString * directAction; 
+(id)startDirectActionRequest;
+(id)startDirectActionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)directAction;
-(void)setDirectAction:(NSString *)arg1 ;
@end

