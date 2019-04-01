//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol VOXPlayerRoutesObserverDelegate;

@interface VOXPlayerRoutesObserver : NSObject
{
    _Bool _observing;
    id <VOXPlayerRoutesObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <VOXPlayerRoutesObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
- (void).cxx_destruct;
- (void)audioRoutesChanged:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end

