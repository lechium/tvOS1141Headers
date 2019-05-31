/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, _WKUserInitiatedAction, WKFrameInfo, NSURLRequest, NSString;

@interface WKNavigationAction : NSObject <WKObject> {

	ObjectStorage<API::NavigationAction> _navigationAction;

}

@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) BOOL _userInitiated; 
@property (nonatomic,readonly) BOOL _canHandleRequest; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalSchemes; 
@property (nonatomic,readonly) BOOL _shouldOpenAppLinks; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalURLs; 
@property (nonatomic,readonly) _WKUserInitiatedAction * _userInitiatedAction; 
@property (nonatomic,readonly) long long _syntheticClickType; 
@property (nonatomic,readonly) CGPoint _clickLocationInRootViewCoordinates; 
@property (nonatomic,readonly) BOOL _isRedirect; 
@property (nonatomic,copy,readonly) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy,readonly) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) long long navigationType; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSURLRequest *)request;
-(WKFrameInfo *)targetFrame;
-(long long)navigationType;
-(Object*)_apiObject;
-(_WKUserInitiatedAction *)_userInitiatedAction;
-(BOOL)_isUserInitiated;
-(long long)_syntheticClickType;
-(CGPoint)_clickLocationInRootViewCoordinates;
-(BOOL)_shouldOpenExternalSchemes;
-(NSURL *)_originalURL;
-(BOOL)_canHandleRequest;
-(BOOL)_shouldOpenAppLinks;
-(BOOL)_shouldOpenExternalURLs;
-(BOOL)_isRedirect;
-(WKFrameInfo *)sourceFrame;
@end

