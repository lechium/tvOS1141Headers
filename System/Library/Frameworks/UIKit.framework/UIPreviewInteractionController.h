/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal;
#import <UIKit/UIKit-Structs.h>
@class UIInteractionProgress, UIGestureRecognizer, NSArray;

@interface UIPreviewInteractionController : NSObject {

	UIInteractionProgress* interactionProgressForPresentation;
	UIGestureRecognizer* presentationGestureRecognizer;
	UIGestureRecognizer* beginPreviewGestureRecognizer;
	id<UIPreviewInteractionControllerDelegate> _delegate;
	NSArray* _gestureRecognizers;
	id<UIViewControllerPreviewing_Internal> _previewingContext;

}

@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> previewingContext;              //@synthesize previewingContext=_previewingContext - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers;                                                //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
-(id<UIPreviewInteractionControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPreviewInteractionControllerDelegate>)arg1 ;
-(NSArray *)gestureRecognizers;
-(id)initWithView:(id)arg1 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(BOOL)startInteractivePreviewAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)commitInteractivePreview;
-(void)cancelInteractivePreview;
-(void)_finalizeInteractivePreview;
-(void)_previewPresentationControllerDidScheduleDismiss;
-(id<UIViewControllerPreviewing_Internal>)previewingContext;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
@end
