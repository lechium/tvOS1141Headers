/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	int field1;
	int field2;
} SCD_Struct_CT0;

typedef struct _NSZone* NSZoneRef;

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct network_usage_policy_client_s* network_usage_policy_client_sRef;

typedef struct _compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __value_;
} compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;

typedef struct vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > {
	block<void ()(NSDictionary *)> __begin_;
	block<void ()(NSDictionary *)> __end_;
	compressed_pair<dispatch::block<void ()(NSDictionary *)> *, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > > __end_cap_;
} vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >;
