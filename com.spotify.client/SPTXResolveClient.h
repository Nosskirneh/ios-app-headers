//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTXResolveClientDelegate;

@interface SPTXResolveClient : NSObject
{
    struct unique_ptr<spotify::connectivity::auth::accesspoint::AccesspointResolver, std::__1::default_delete<spotify::connectivity::auth::accesspoint::AccesspointResolver>> _accesspointResolver;
    id <SPTXResolveClientDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resolve:(id)arg1;
- (id)initWithScheduler:(id)arg1 internalCoreScheduler:(struct Scheduler *)arg2 httpConnectionBuilder:(struct ConnectionBuilder *)arg3 dns:(struct Dns *)arg4 delegate:(id)arg5 clientRevision:(unsigned int)arg6;

@end
