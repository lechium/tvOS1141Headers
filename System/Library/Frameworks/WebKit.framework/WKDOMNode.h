/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMDocument, NSArray;

@interface WKDOMNode : NSObject {

	RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >* _impl;

}

@property (readonly) WKDOMDocument * document; 
@property (readonly) WKDOMNode * parentNode; 
@property (readonly) WKDOMNode * firstChild; 
@property (readonly) WKDOMNode * lastChild; 
@property (readonly) WKDOMNode * previousSibling; 
@property (readonly) WKDOMNode * nextSibling; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(WKDOMNode *)lastChild;
-(WKDOMNode *)firstChild;
-(WKDOMNode *)parentNode;
-(WKDOMNode *)previousSibling;
-(void)removeChild:(id)arg1 ;
-(WKDOMDocument *)document;
-(WKDOMNode *)nextSibling;
-(id)_initWithImpl:(Node*)arg1 ;
-(void)insertNode:(id)arg1 before:(id)arg2 ;
-(void)appendChild:(id)arg1 ;
-(NSArray *)textRects;
-(OpaqueWKBundleNodeHandleRef)_copyBundleNodeHandleRef;
@end

