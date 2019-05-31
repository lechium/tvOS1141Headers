/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont, NSArray;

@interface UIInputSwitcherItem : NSObject {

	NSString* _identifier;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	long long _selectedSegmentIndex;
	NSArray* _segmentTitles;
	NSArray* _segmentImages;
	/*^block*/id _persistentSelectedIndex;

}

@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                     //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                  //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFont;                       //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (nonatomic,readonly) BOOL isSegmentedItem; 
@property (assign,nonatomic) long long selectedSegmentIndex;              //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,retain) NSArray * segmentTitles;                     //@synthesize segmentTitles=_segmentTitles - In the implementation block
@property (nonatomic,retain) NSArray * segmentImages;                     //@synthesize segmentImages=_segmentImages - In the implementation block
@property (nonatomic,copy) id persistentSelectedIndex;                    //@synthesize persistentSelectedIndex=_persistentSelectedIndex - In the implementation block
+(id)switcherItemWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(UIFont *)titleFont;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setPersistentSelectedIndex:(id)arg1 ;
-(NSArray *)segmentImages;
-(NSArray *)segmentTitles;
-(BOOL)isSegmentedItem;
-(void)setTitleFont:(UIFont *)arg1 ;
-(UIFont *)subtitleFont;
-(void)setSubtitleFont:(UIFont *)arg1 ;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(void)setSegmentImages:(NSArray *)arg1 ;
-(id)persistentSelectedIndex;
@end

