/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDebugIssueReporting.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting> {

	NSMutableArray* _mutableIssues;

}

@property (nonatomic,copy,readonly) NSArray * issues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addIssue:(id)arg1 ;
-(NSArray *)issues;
@end

