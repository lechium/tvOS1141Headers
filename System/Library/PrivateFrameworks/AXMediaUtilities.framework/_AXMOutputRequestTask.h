/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTask.h>

@class AXMOutputRequest, AXMOutputRequestDispatchOptions;

@interface _AXMOutputRequestTask : AXMTask {

	AXMOutputRequest* _request;
	AXMOutputRequestDispatchOptions* _options;

}

@property (nonatomic,retain) AXMOutputRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AXMOutputRequestDispatchOptions * options;              //@synthesize options=_options - In the implementation block
-(void)setRequest:(AXMOutputRequest *)arg1 ;
-(AXMOutputRequest *)request;
-(void)setOptions:(AXMOutputRequestDispatchOptions *)arg1 ;
-(AXMOutputRequestDispatchOptions *)options;
@end
