/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class CALayerHost;

@interface _UILayerHostView : UIView

@property (assign,nonatomic) unsigned contextID; 
@property (assign,nonatomic) BOOL inheritsSecurity; 
@property (nonatomic,retain,readonly) CALayerHost * layerHost; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(unsigned)contextID;
-(CALayerHost *)layerHost;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(void)setContextID:(unsigned)arg1 ;
@end
