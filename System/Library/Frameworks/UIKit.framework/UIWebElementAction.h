/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface UIWebElementAction : NSObject {

	NSString* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	int _type;

}

@property (nonatomic,readonly) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id dismissalHandler;              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3 ;
+(id)customElementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)standardElementActionWithType:(int)arg1 ;
-(void)dealloc;
-(int)type;
-(id)_title;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(int)arg3 ;
-(void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(CGPoint)arg4 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
@end

