/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIContextBinding.h>

@class FBSScene, NSMapTable, NSString;

@interface __UISceneSubstrate : NSObject <_UIContextBinding> {

	FBSScene* _scene;
	NSMapTable* _sceneLayerTable;

}

@property (nonatomic,readonly) FBSScene * scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSScene *)scene;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
@end

