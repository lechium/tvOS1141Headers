/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPDFAnnotationControllerDelegate
@optional
-(BOOL)willTrackAnnotationAtPoint:(CGPoint)arg1 controller:(id)arg2;
-(void)annotation:(id)arg1 didEndTrackingAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotationWasRemoved:(id)arg1 controller:(id)arg2;
-(CGImageRef)newHighlightMaskImage:(CGRect)arg1 controller:(id)arg2;
-(CGImageRef)underlineImage:(CGRect)arg1 controller:(id)arg2;
-(CGSize*)marginNoteImageSize:(id)arg1;
-(id)marginNoteImage:(id)arg1 controller:(id)arg2;

@end

