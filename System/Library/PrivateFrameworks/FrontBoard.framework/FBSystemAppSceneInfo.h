/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneImpl, _UICanvas, UIWindow;

@interface FBSystemAppSceneInfo : NSObject {

	FBSSceneImpl* _scene;
	_UICanvas* _canvas;
	UIWindow* _primaryWindow;

}

@property (nonatomic,retain) FBSSceneImpl * scene;                         //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) _UICanvas * canvas;                           //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * primaryWindow;              //@synthesize primaryWindow=_primaryWindow - In the implementation block
-(void)dealloc;
-(FBSSceneImpl *)scene;
-(_UICanvas *)canvas;
-(void)setCanvas:(_UICanvas *)arg1 ;
-(void)setScene:(FBSSceneImpl *)arg1 ;
-(UIWindow *)primaryWindow;
-(void)setPrimaryWindow:(UIWindow *)arg1 ;
@end
