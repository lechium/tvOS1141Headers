/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {

	SKScene* _scene;
	NSMutableDictionary* _touchMap;
	BOOL _mouseIsDown;
	BOOL _rightMouseIsDown;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
@end

