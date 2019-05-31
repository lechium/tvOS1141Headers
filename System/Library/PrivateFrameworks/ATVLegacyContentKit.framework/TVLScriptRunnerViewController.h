/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIProgressView, TVLLegacyJSContext, TVLRootElement, NSArray;

@interface TVLScriptRunnerViewController : UIViewController {

	UILabel* _statusText;
	UIProgressView* _progressBar;
	TVLLegacyJSContext* _context;
	TVLRootElement* _feedElement;
	NSArray* _scriptURLs;

}

@property (nonatomic,retain) UILabel * statusText;                      //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;              //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) TVLRootElement * feedElement;              //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,copy) NSArray * scriptURLs;                        //@synthesize scriptURLs=_scriptURLs - In the implementation block
-(void)dealloc;
-(void)loadView;
-(TVLLegacyJSContext *)context;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(UIProgressView *)progressBar;
-(UILabel *)statusText;
-(void)setStatusText:(UILabel *)arg1 ;
-(id)initWithFeedElement:(id)arg1 ;
-(void)setScriptURLs:(NSArray *)arg1 ;
-(NSArray *)scriptURLs;
-(TVLRootElement *)feedElement;
-(void)setFeedElement:(TVLRootElement *)arg1 ;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)_setStatus:(id)arg1 withPercentComplete:(float)arg2 ;
-(void)_evaluateScripts:(id)arg1 ;
@end
