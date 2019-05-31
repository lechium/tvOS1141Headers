/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setIconImage:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(id)headerLabel;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setImageAlignment:(int)arg1;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;

@end

