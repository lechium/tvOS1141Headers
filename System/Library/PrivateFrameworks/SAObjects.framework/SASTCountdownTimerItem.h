/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIColor, NSString;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) long long actionDelayInSeconds; 
@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * countdownTextColor; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countdownTimerItem;
+(id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(SAUIColor *)headerTextColor;
-(id)encodedClassName;
-(long long)actionDelayInSeconds;
-(void)setActionDelayInSeconds:(long long)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)countdownTextColor;
-(void)setCountdownTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
@end

