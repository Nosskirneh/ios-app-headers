//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC6Deezer20NetworkStateProvider, _TtC6Deezer23NetworkActivityObserver;
@protocol _TtP6Deezer18RadioStateProvider_;

@interface DZRNetworkToolProvider : NSObject
{
    _TtC6Deezer20NetworkStateProvider *_networkStateProvider;
    id <_TtP6Deezer18RadioStateProvider_> _radioStateProvider;
    _TtC6Deezer23NetworkActivityObserver *_networkActivityObserver;
}

+ (id)defaultLoader;
@property(retain) _TtC6Deezer23NetworkActivityObserver *networkActivityObserver; // @synthesize networkActivityObserver=_networkActivityObserver;
@property(retain) id <_TtP6Deezer18RadioStateProvider_> radioStateProvider; // @synthesize radioStateProvider=_radioStateProvider;
@property(retain) _TtC6Deezer20NetworkStateProvider *networkStateProvider; // @synthesize networkStateProvider=_networkStateProvider;
- (void).cxx_destruct;
- (void)setNetworkStateProvider:(id)arg1 radioStateProvider:(id)arg2 networkActivityObserver:(id)arg3;

@end

