/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libTelephonyUtilDynamic.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct weak_ptr<ctu::Http::HttpRequestCallbackHandler> {
	HttpRequestCallbackHandler __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<ctu::Http::HttpRequestCallbackHandler>;

typedef struct shared_ptr<ctu::Http::HttpResponse> {
	HttpResponse __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ctu::Http::HttpResponse>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, void *> > >;

typedef struct _tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true> > __pair3_;
} tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> > > >;

typedef struct map<unsigned long, std::__1::shared_ptr<SessionTaskContext>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<SessionTaskContext> > > > {
	tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<SessionTaskContext> > > > __tree_;
} map<unsigned long, std::__1::shared_ptr<SessionTaskContext>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<SessionTaskContext> > > >;
