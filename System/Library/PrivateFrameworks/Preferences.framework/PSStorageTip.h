/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSSpecifier, NSString, UIImage;

@interface PSStorageTip : NSObject {

	PSSpecifier* _infoSpecifier;
	NSString* _identifier;
	PSSpecifier* _specifier;

}

@property (retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (retain) PSSpecifier * specifier;                              //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * infoSpecifier;              //@synthesize infoSpecifier=_infoSpecifier - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * infoText; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) long long size; 
@property (nonatomic,retain) NSString * representedApp; 
-(PSSpecifier *)specifier;
-(id)init;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)reload;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(UIImage *)icon;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)infoSpecifier;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
-(void)setRepresentedApp:(NSString *)arg1 ;
-(NSString *)representedApp;
@end

