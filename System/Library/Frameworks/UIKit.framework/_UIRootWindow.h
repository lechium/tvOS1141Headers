/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface _UIRootWindow : UIWindow {

	double _scale;

}
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_wantsSceneAssociation;
-(void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_isConstrainedByScreenJail;
-(SCD_Struct_UI22)_bindingDescription;
-(BOOL)_transformLayerIncludesScreenRotation;
-(void)setScreen:(id)arg1 ;
-(id)_context;
-(id)initWithDisplay:(id)arg1 ;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
@end

