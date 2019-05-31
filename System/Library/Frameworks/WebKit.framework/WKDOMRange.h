/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMNode, NSString, NSArray;

@interface WKDOMRange : NSObject {

	RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >* _impl;

}

@property (retain,readonly) WKDOMNode * startContainer; 
@property (readonly) long long startOffset; 
@property (retain,readonly) WKDOMNode * endContainer; 
@property (readonly) long long endOffset; 
@property (copy,readonly) NSString * text; 
@property (readonly) BOOL isCollapsed; 
@property (readonly) NSArray * textRects; 
-(void)dealloc;
-(NSString *)text;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(WKDOMNode *)startContainer;
-(long long)startOffset;
-(void)selectNodeContents:(id)arg1 ;
-(BOOL)isCollapsed;
-(id)initWithDocument:(id)arg1 ;
-(void)selectNode:(id)arg1 ;
-(WKDOMNode *)endContainer;
-(long long)endOffset;
-(id)_initWithImpl:(Range*)arg1 ;
-(NSArray *)textRects;
-(void)collapse:(BOOL)arg1 ;
-(id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2 ;
-(OpaqueWKBundleRangeHandleRef)_copyBundleRangeHandleRef;
@end

