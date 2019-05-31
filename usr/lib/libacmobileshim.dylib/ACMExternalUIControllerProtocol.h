/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, UIColor, NSString;


@protocol ACMExternalUIControllerProtocol <ACMUIControllerProtocol>
@property (assign,nonatomic) unsigned long long signInStyle; 
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (nonatomic,retain) NSString * widgetAccountLabel; 
@property (nonatomic,retain) id signInButton; 
@property (nonatomic,retain) id cancelButton; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) NSString * password; 
@required
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setCancelButton:(id)arg1;
-(id)cancelButton;
-(NSString *)password;
-(UIImage *)logoImage;
-(void)setLogoImage:(id)arg1;
-(void)setPassword:(id)arg1;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1;
-(void)setAccountNameFieldPlaceholder:(id)arg1;
-(void)setSignInStyle:(unsigned long long)arg1;
-(unsigned long long)signInStyle;
-(NSString *)accountNameFieldPlaceholder;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(BOOL)shouldAuthenticateOnUserInput;
-(id)signInButton;
-(void)setSignInButton:(id)arg1;

@end

