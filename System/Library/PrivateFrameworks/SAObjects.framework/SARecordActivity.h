/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand

@property (nonatomic,retain) SAActivityObject * activity; 
+(id)recordActivity;
+(id)recordActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAActivityObject *)activity;
-(void)setActivity:(SAActivityObject *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

