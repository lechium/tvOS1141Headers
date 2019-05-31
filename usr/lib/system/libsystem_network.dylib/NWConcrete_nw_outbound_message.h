/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_outbound_message.h>

@protocol OS_dispatch_data, OS_nw_array, OS_nw_dictionary;
@class NSObject, NSString;

@interface NWConcrete_nw_outbound_message : NSObject <OS_nw_outbound_message> {

	NSObject*<OS_dispatch_data> content;
	NSObject*<OS_nw_array> antecedents;
	NSObject*<OS_nw_dictionary> values;
	unsigned long long deadline_milliseconds;
	unsigned relative_priority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithContent:(id)arg1 ;
@end

