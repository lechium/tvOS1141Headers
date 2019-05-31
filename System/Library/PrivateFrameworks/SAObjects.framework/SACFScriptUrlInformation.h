/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSURL, NSDictionary, NSString;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (nonatomic,copy) NSURL * downloadUrl; 
@property (nonatomic,copy) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * requestMethodType; 
+(id)scriptUrlInformation;
+(id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)headerFields;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)downloadUrl;
-(void)setDownloadUrl:(NSURL *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSString *)requestMethodType;
-(void)setRequestMethodType:(NSString *)arg1 ;
@end

