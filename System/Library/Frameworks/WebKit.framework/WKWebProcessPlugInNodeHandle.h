/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;

}

@property (readonly) InjectedBundleNodeHandle* _nodeHandle; 
@property (nonatomic,readonly) CGRect elementBounds; 
@property (assign,nonatomic) BOOL HTMLInputElementIsAutoFilled; 
@property (nonatomic,readonly) BOOL HTMLInputElementIsUserEdited; 
@property (nonatomic,readonly) BOOL HTMLTextAreaElementIsUserEdited; 
@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(WKWebProcessPlugInFrame *)frame;
-(void)dealloc;
-(Object*)_apiObject;
-(InjectedBundleNodeHandle*)_nodeHandle;
-(id)renderedImageWithOptions:(unsigned)arg1 width:(id)arg2 ;
-(id)htmlIFrameElementContentFrame;
-(id)renderedImageWithOptions:(unsigned)arg1 ;
-(CGRect)elementBounds;
-(BOOL)HTMLInputElementIsAutoFilled;
-(void)setHTMLInputElementIsAutoFilled:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementAutoFillButtonEnabled;
-(void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)arg1 ;
-(long long)htmlInputElementAutoFillButtonType;
-(long long)htmlInputElementLastAutoFillButtonType;
-(BOOL)HTMLInputElementIsUserEdited;
-(BOOL)HTMLTextAreaElementIsUserEdited;
-(BOOL)isTextField;
-(WKWebProcessPlugInNodeHandle *)HTMLTableCellElementCellAbove;
@end

