//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, SPTLocalSettingsObserver;

@interface SPTCommandLineOverrideLocalSettingsObservation : NSObject
{
    id <SPTLocalSettingsObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SPTLocalSettingsObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

