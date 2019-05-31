/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

@interface WKTextSelectionRect : UITextSelectionRect {

	WebSelectionRect* _webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect;              //@synthesize webRect=_webRect - In the implementation block
+(id)textSelectionRectsWithWebRects:(id)arg1 ;
-(void)dealloc;
-(WebSelectionRect *)webRect;
-(CGRect)rect;
-(id)range;
-(long long)writingDirection;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(BOOL)isVertical;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
@end

