/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIButton;

@interface TVSUITextAlertButton : NSObject <NSCopying> {

	NSString* _title;
	unsigned long long _type;
	UIButton* _button;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIButton * button;                      //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)buttonWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(UIButton *)button;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(void)insertInSection:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)initWithTitle:(id)arg1 type:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
@end

