/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogFeatureKey : MCAggregateLogKey {

	unsigned long long _type;
	NSString* _feature;
	NSString* _nameSuffix;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)trueFeature:(id)arg1 name:(id)arg2 ;
+(id)falseFeature:(id)arg1 name:(id)arg2 ;
+(id)valueFeature:(id)arg1 name:(id)arg2 ;
+(id)objectFeature:(id)arg1 name:(id)arg2 ;
+(id)intersectionFeature:(id)arg1 name:(id)arg2 ;
+(id)_feature:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 ;
+(id)trueFeature:(id)arg1 ;
+(id)falseFeature:(id)arg1 ;
+(id)valueFeature:(id)arg1 ;
+(id)objectFeature:(id)arg1 ;
+(id)intersectionFeature:(id)arg1 ;
+(void)update;
-(NSString *)feature;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setFeature:(NSString *)arg1 ;
@end

