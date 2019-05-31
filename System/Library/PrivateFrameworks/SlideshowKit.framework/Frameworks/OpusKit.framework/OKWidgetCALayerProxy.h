/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CALayer, OKWidgetMicaDocument, NSString;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport> {

	CALayer* _layer;
	OKWidgetMicaDocument* _widgetMicaDocument;

}

@property (nonatomic,retain,readonly) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) OKWidgetMicaDocument * widgetMicaDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForLayer:(id)arg1 ;
-(id)init;
-(CALayer *)layer;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingContents:(id)arg1 ;
-(void)setWidgetMicaDocument:(OKWidgetMicaDocument *)arg1 ;
-(OKWidgetMicaDocument *)widgetMicaDocument;
@end

