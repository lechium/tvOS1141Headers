/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfView.h>
#import <TVMLKit/TVRowHosting_Collection.h>

@class NSString;

@interface _TVMLShelfView : _TVShelfView <TVRowHosting_Collection>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(BOOL)shouldBindRowsTogether;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 _shelfViewLayout:(id)arg2 ;
@end

