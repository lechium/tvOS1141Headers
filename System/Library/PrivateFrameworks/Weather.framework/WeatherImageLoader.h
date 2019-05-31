/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject {

	double _scale;
	CPBitmapStore* _store;
	NSCache* _conditionImagesCache;

}

@property (nonatomic,retain) CPBitmapStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSCache * conditionImagesCache;              //@synthesize conditionImagesCache=_conditionImagesCache - In the implementation block
+(id)sharedImageLoader;
+(id)conditionImageBundle;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)conditionImageNamed:(id)arg1 ;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(NSCache *)conditionImagesCache;
-(void)setConditionImagesCache:(NSCache *)arg1 ;
-(id)cachedImageForKey:(id)arg1 ;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
@end

