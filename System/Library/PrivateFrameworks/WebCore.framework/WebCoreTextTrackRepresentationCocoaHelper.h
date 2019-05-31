/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {

	TextTrackRepresentationCocoa* _parent;

}

@property (assign) TextTrackRepresentationCocoa* parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParent:(TextTrackRepresentationCocoa*)arg1 ;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TextTrackRepresentationCocoa*)parent;
-(void)setParent:(TextTrackRepresentationCocoa*)arg1 ;
@end

