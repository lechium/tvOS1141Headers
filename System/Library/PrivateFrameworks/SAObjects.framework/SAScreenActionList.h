/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * mainEntitySemanticData; 
@property (nonatomic,copy) NSURL * viewId; 
+(id)list;
+(id)listWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAppId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)appId;
-(id)encodedClassName;
-(NSString *)mainEntitySemanticData;
-(void)setMainEntitySemanticData:(NSString *)arg1 ;
-(NSURL *)viewId;
-(void)setViewId:(NSURL *)arg1 ;
@end
