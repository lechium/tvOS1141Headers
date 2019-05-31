/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CNContactPickerServiceProtocol.h>
#import <libobjc.A.dylib/CNContactPickerHostProtocol.h>

@class CNContactPickerHostViewController, NSString;

@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol> {

	CNContactPickerHostViewController* _viewController;

}

@property (assign,nonatomic,__weak) CNContactPickerHostViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setViewController:(CNContactPickerHostViewController *)arg1 ;
-(CNContactPickerHostViewController *)viewController;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
@end
