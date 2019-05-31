/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIImageResource, NSDate;

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * evodFeaturingImage; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) BOOL isEvod; 
@property (nonatomic,copy) NSString * network; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSString * shelfType; 
@property (nonatomic,copy) NSString * studio; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListSearchResult;
+(id)watchListSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SAUIImageResource *)image;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(SAUIImageResource *)evodFeaturingImage;
-(void)setEvodFeaturingImage:(SAUIImageResource *)arg1 ;
-(BOOL)isEvod;
-(void)setIsEvod:(BOOL)arg1 ;
-(NSString *)shelfType;
-(void)setShelfType:(NSString *)arg1 ;
-(NSString *)studio;
-(void)setStudio:(NSString *)arg1 ;
-(NSDate *)releaseDate;
-(void)setContentType:(NSString *)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSString *)network;
-(void)setNetwork:(NSString *)arg1 ;
-(NSString *)contentType;
@end

