/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICanvas.h>

@interface __UIScreenCanvas : _UICanvas
+(id)_unassociatedCanvasForScreen:(id)arg1 create:(BOOL)arg2 ;
+(BOOL)alwaysKeepContexts;
+(id)settingsDiffActions;
-(id)screen;
-(id)initWithScreen:(id)arg1 ;
-(void)detachWindow:(id)arg1 ;
-(void)setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(void)_invalidateScreen;
-(id)_lookupKey;
@end

