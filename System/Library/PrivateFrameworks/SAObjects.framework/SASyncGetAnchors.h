/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appMetaDataList; 
@property (nonatomic,copy) NSDictionary * customVocabSources; 
@property (assign,nonatomic) BOOL includeAllKnownAnchors; 
@property (nonatomic,copy) NSArray * sources; 
@property (nonatomic,copy) NSString * syncReason; 
@property (nonatomic,copy) NSArray * watchAppMetaDataList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)sources;
-(void)setSources:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appMetaDataList;
-(void)setAppMetaDataList:(NSArray *)arg1 ;
-(NSDictionary *)customVocabSources;
-(void)setCustomVocabSources:(NSDictionary *)arg1 ;
-(BOOL)includeAllKnownAnchors;
-(void)setIncludeAllKnownAnchors:(BOOL)arg1 ;
-(NSString *)syncReason;
-(void)setSyncReason:(NSString *)arg1 ;
-(NSArray *)watchAppMetaDataList;
-(void)setWatchAppMetaDataList:(NSArray *)arg1 ;
@end

