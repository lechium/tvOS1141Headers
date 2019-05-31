/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRowTableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface PTSEditRowTableViewCell : PTSRowTableViewCell <UITextFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)cellStyleForRow:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)updateDisplayedValue;
-(id)textForValue:(id)arg1 ;
-(id)valueForText:(id)arg1 ;
@end

