/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface PFCloudKitErrorLog : NSObject {

	NSMutableArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries; 
-(void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)entries;
@end

