/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton;

@interface BFFLinkHandler : NSObject {

	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                       //@synthesize handler=_handler - In the implementation block
-(id)init;
-(UIButton *)button;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
@end

