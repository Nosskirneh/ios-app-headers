//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTEntityStoreObserver;

@interface YTEntityStoreObserverAndOptions : NSObject
{
    id <YTEntityStoreObserver> _observer;
    unsigned long long _observerAddress;
    unsigned long long _options;
}

+ (id)classWithObserverForRemoval:(id)arg1;
+ (id)classWithObserver:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long observerAddress; // @synthesize observerAddress=_observerAddress;
@property(readonly, nonatomic) __weak id <YTEntityStoreObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObserver:(id)arg1 observerAddress:(unsigned long long)arg2 options:(unsigned long long)arg3;

@end
