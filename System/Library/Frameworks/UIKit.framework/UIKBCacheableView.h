/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIKBCacheableView <NSObject>
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@optional
-(void)drawContentsOfRenderers:(id)arg1;

@required
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;

@end

