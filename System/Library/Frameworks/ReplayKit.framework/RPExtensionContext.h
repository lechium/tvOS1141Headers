/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPExtensionVendorProtocol.h>

@protocol RPExtensionContextDelegate;
@class NSString;

@interface RPExtensionContext : NSExtensionContext <RPExtensionVendorProtocol> {

	id<RPExtensionContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPExtensionContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<RPExtensionContextDelegate>)delegate;
-(void)setDelegate:(id<RPExtensionContextDelegate>)arg1 ;
-(void)setEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
