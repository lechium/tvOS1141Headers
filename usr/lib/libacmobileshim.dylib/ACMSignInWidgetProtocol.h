/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UITextField, NSString, UIColor, NSDictionary;


@protocol ACMSignInWidgetProtocol <NSObject>
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UITextField * accountField; 
@property (nonatomic,readonly) UITextField * passwordField; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSDictionary * placeholderAttributes; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint position; 
@required
-(id<ACMSignInWidgetDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(void)setPosition:(CGPoint)arg1;
-(CGPoint)position;
-(UITextField *)passwordField;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(id)arg1;

@end

