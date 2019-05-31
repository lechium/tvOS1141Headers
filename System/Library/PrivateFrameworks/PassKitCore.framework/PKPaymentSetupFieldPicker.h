/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {

	NSArray* _pickerItems;

}

@property (nonatomic,copy,readonly) NSArray * pickerItems;                            //@synthesize pickerItems=_pickerItems - In the implementation block
@property (nonatomic,copy) PKPaymentSetupFieldPickerItem * currentValue; 
-(id)displayString;
-(PKPaymentSetupFieldPickerItem *)currentValue;
-(void)updateWithConfiguration:(id)arg1 ;
-(unsigned long long)fieldType;
-(id)submissionString;
-(void)setCurrentValue:(PKPaymentSetupFieldPickerItem *)arg1 ;
-(NSArray *)pickerItems;
@end
