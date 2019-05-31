/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {

	NSError* _error;
	BOOL _failed;
	NSArray* _updateItems;

}

@property (readonly) NSError * error; 
@property (getter=isFailed,readonly) BOOL failed; 
@property (readonly) NSArray * updateItems; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSError *)error;
-(void)dealloc;
-(id)description;
-(NSArray *)updateItems;
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)arg1 ;
-(BOOL)isFailed;
-(id)initWithError:(id)arg1 ;
@end

