/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CLSRate : NSObject {

	float _rate;
	float _weight;
	float _value;
	float _limit;
	NSString* _info;
	NSDictionary* _childrenRates;

}

@property (assign,nonatomic) float rate;                                //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float weight;                              //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSString * info;                           //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSDictionary * childrenRates;              //@synthesize childrenRates=_childrenRates - In the implementation block
@property (assign,nonatomic) float value;                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) float limit;                               //@synthesize limit=_limit - In the implementation block
+(id)rate;
+(id)rateWithJSONObject:(id)arg1 ;
-(id)init;
-(void)setValue:(float)arg1 ;
-(float)value;
-(NSString *)info;
-(void)setInfo:(NSString *)arg1 ;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)limit;
-(void)setLimit:(float)arg1 ;
-(NSDictionary *)childrenRates;
-(id)initWithRate:(float)arg1 weight:(float)arg2 value:(float)arg3 limit:(float)arg4 info:(id)arg5 childrenRates:(id)arg6 ;
-(void)updateRate:(BOOL)arg1 ;
-(void)setChildrenRates:(NSDictionary *)arg1 ;
-(id)rateDumpWithPrefix:(id)arg1 ;
-(id)_buildJsonCompatibleObjectDetailed:(BOOL)arg1 ;
-(id)jsonDictionaryDetailed:(BOOL)arg1 ;
-(id)rateDump;
-(id)jsonDataDetailed:(BOOL)arg1 ;
@end

