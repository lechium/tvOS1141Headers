/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class CNAvatarView, UILabel;

@interface CNUIPeopleCell : UITableViewCell {

	CNAvatarView* _avatarView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

