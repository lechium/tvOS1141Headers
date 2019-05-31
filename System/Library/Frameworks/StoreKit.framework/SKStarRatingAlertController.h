/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController {

	SKStarRatingControl* _ratingControl;
	UIAlertAction* _submitAction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) float rating; 
@property (nonatomic,copy) id completion;               //@synthesize completion=_completion - In the implementation block
+(id)starRatingAlertController;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)_ratingControlChanged:(id)arg1 ;
-(void)setupActionsWithBundle:(id)arg1 ;
-(void)_updateButtonState;
@end

