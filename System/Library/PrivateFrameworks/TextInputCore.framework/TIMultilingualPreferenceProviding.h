/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TIInputMode, NSArray;


@protocol TIMultilingualPreferenceProviding <NSObject>
@property (nonatomic,readonly) TIInputMode * preferredSecondaryInputMode; 
@property (nonatomic,readonly) NSArray * userEnabledInputModes; 
@required
-(TIInputMode *)preferredSecondaryInputMode;
-(NSArray *)userEnabledInputModes;

@end

