/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBPunchout.h>
@class NSString, NSArray, _SFPBUserActivityData, NSData;


@protocol _SFPBPunchout <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,copy) NSArray * urls; 
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData; 
@property (nonatomic,readonly) BOOL hasUserActivityData; 
@property (nonatomic,copy) NSString * actionTarget; 
@property (nonatomic,readonly) BOOL hasActionTarget; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasName;
-(BOOL)hasLabel;
-(BOOL)hasBundleIdentifier;
-(void)clearUrls;
-(unsigned long long)urlsCount;
-(NSArray *)urls;
-(void)setUrls:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(_SFPBUserActivityData *)userActivityData;
-(void)setBundleIdentifier:(id)arg1;
-(NSData *)jsonData;
-(void)setUserActivityData:(id)arg1;
-(NSString *)actionTarget;
-(void)setActionTarget:(id)arg1;
-(BOOL)hasUserActivityData;
-(BOOL)hasActionTarget;
-(id)initWithJSON:(id)arg1;
-(void)addUrls:(id)arg1;
-(id)urlsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _SFPBUserActivityData, NSData;

@interface _SFPBPunchout : PBCodable <_SFPBPunchout, NSSecureCoding> {

	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _label;
	NSArray* _urls;
	_SFPBUserActivityData* _userActivityData;
	NSString* _actionTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,copy) NSArray * urls;                                          //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) _SFPBUserActivityData * userActivityData;              //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityData; 
@property (nonatomic,copy) NSString * actionTarget;                                 //@synthesize actionTarget=_actionTarget - In the implementation block
@property (nonatomic,readonly) BOOL hasActionTarget; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasLabel;
-(BOOL)hasBundleIdentifier;
-(void)clearUrls;
-(unsigned long long)urlsCount;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBUserActivityData *)userActivityData;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)setUserActivityData:(_SFPBUserActivityData *)arg1 ;
-(NSString *)actionTarget;
-(void)setActionTarget:(NSString *)arg1 ;
-(BOOL)hasUserActivityData;
-(BOOL)hasActionTarget;
-(id)initWithJSON:(id)arg1 ;
-(void)addUrls:(id)arg1 ;
-(id)urlsAtIndex:(unsigned long long)arg1 ;
@end

