//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeBufferDelegate-Protocol.h"
#import "SPTVolumeEventEmitter-Protocol.h"

@class NSString, NSTimer, SPTVolumeBuffer;
@protocol SPTVolumeEventReceiver;

@interface SPTVolumeBufferEmitter : NSObject <SPTVolumeBufferDelegate, SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    SPTVolumeBuffer *_buffer;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) SPTVolumeBuffer *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)eventForBuffering:(_Bool)arg1;
- (void)volumeBufferStateDidChange:(id)arg1;
- (id)initWithBuffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

