/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVLLegacyJSContext;

@interface TVLJSSlideShow : NSObject {

	TVLLegacyJSContext* _context;

}

@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
-(TVLLegacyJSContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(void)showSlideShowSettingsWithImageProxies:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runSlideShowWithImageProxies:(id)arg1 startingIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

