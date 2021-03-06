/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * typeName; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
@end

